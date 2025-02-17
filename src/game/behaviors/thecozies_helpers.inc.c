#include "types.h"
#include "game/level_update.h"
#include "game/mario.h"
#include "game/object_list_processor.h"
#include "game/rendering_graph_node.h"
#include "engine/math_util.h"
#include "levels/ddd/header.h"

#ifndef THECOZIES_HELPERS_INC_C
#define THECOZIES_HELPERS_INC_C

void elastic_approach(f32 *cur, f32 *curVel, f32 goal, f32 speedDown, f32 speedUp) {
    f32 diff = goal - *cur;
    *curVel = approach_f32_asymptotic(*curVel, diff, *cur < goal ? speedUp : speedDown);
    *cur = *cur + *curVel;
}

void spring_towards(f32 *cur, f32 *curVel, f32 goal, f32 speed, f32 dampen) {
    f32 diff = goal - *cur;
    *curVel = (*curVel + (diff * speed)) * dampen;
    *cur = *cur + *curVel;
}

void spring_towards_vec3f(Vec3f cur, Vec3f curVel, Vec3f goal, f32 speed, f32 dampen) {
    spring_towards(&cur[0], &curVel[0], goal[0], speed, dampen);
    spring_towards(&cur[1], &curVel[1], goal[1], speed, dampen);
    spring_towards(&cur[2], &curVel[2], goal[2], speed, dampen);
}

s16 approach_dir(s16 curYaw, s16 target, f32 speed) {
    return (s16) (target - approach_f32_asymptotic(
        (s16) (target - curYaw),
        0,
        speed
    ));
}

void elastic_approach_angle(s16 *cur, s16 *curVel, s16 goal, f32 speedDown, f32 speedUp) {
    s16 diff = goal - *cur;
    *curVel = approach_dir(*curVel, diff, *cur < goal ? speedUp : speedDown);
    *cur = *cur + *curVel;
}

void elastic_approach_vec3f(Vec3f cur, Vec3f curVel, Vec3f goal, f32 speedDown, f32 speedUp) {
    elastic_approach(&cur[0], &curVel[0], goal[0], speedDown, speedUp);
    elastic_approach(&cur[1], &curVel[1], goal[1], speedDown, speedUp);
    elastic_approach(&cur[2], &curVel[2], goal[2], speedDown, speedUp);
}

void elastic_approach_vec3s(Vec3s cur, Vec3s curVel, Vec3s goal, f32 speedDown, f32 speedUp) {
    elastic_approach_angle(&cur[0], &curVel[0], goal[0], speedDown, speedUp);
    elastic_approach_angle(&cur[1], &curVel[1], goal[1], speedDown, speedUp);
    elastic_approach_angle(&cur[2], &curVel[2], goal[2], speedDown, speedUp);
}

void audio_meter_approach(f32 *cur, f32 next, f32 reduction, s32 timeout, s32 *momentumTimer) {
    if (next > *cur) {
        *cur = next;
        *momentumTimer = timeout;
    }
    else if (*momentumTimer > 0) *momentumTimer = *momentumTimer - 1;
    else *cur = approach_f32_symmetric(*cur, next, reduction);
}

struct Object *find_any_object_with_behavior_and_bparam2(const BehaviorScript *behavior, u32 bparam) {
    uintptr_t *behaviorAddr = segmented_to_virtual(behavior);
    struct Object *obj = NULL;
    struct ObjectNode *listHead;

    listHead = &gObjectLists[get_object_list_from_behavior(behaviorAddr)];

    obj = (struct Object *) listHead->next;

    while (obj != (struct Object *) listHead) {
        if (obj->behavior == behaviorAddr
            && GET_BPARAM2(obj->oBehParams) == bparam
            && obj->activeFlags != ACTIVE_FLAG_DEACTIVATED)
        {
            return obj;
        }
    
        obj = (struct Object *) obj->header.next;
    }

    return obj;
}

s32 check_mario_on_object(struct MarioState *m) {
    return (
        (gMarioState->action & ACT_GROUP_MASK) <= ACT_GROUP_MOVING
        && gMarioObject->platform == o
    )
    && m->vel[1] <= 0.0f;
}

s32 check_min_star_collected(u32 minStar) {
    u32 starFlags = save_file_get_star_flags(gCurrSaveFileNum - 1, COURSE_NUM_TO_INDEX(gCurrCourseNum));
    u32 lastActStarCollected = 0;
    for (int i = 0; i <= 5; i++) {
        if (starFlags & (1 << i)) lastActStarCollected = i + 1;
        if (lastActStarCollected >= minStar) {
            return TRUE;
        }
    }
    return FALSE;
}

#endif

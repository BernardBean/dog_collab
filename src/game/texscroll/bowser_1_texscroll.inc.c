#include "levels/bowser_1/header.h"
#include "levels/bowser_1/texscroll.inc.c"

#include "levels/bowser_1/electric_ring/texscroll.inc.c"
#include "levels/bowser_1/lightning/texscroll.inc.c"
void scroll_textures_bowser_1() {
	scroll_bowser_1();
		
	scroll_bowser_1_level_geo_electric_ring();
		scroll_bowser_1_level_geo_lightning();
}

void scroll_sts_mat_water_plane4_whirlpool_water_whirlpool_layer5() {
	Gfx *mat = segmented_to_virtual(mat_water_plane4_whirlpool_water_whirlpool_layer5);
	shift_s_down(mat, 15, PACK_TILESIZE(0, 1));
	shift_t(mat, 15, PACK_TILESIZE(0, 5));
	shift_t(mat, 23, PACK_TILESIZE(0, 4));
};

void scroll_ddd_level_geo_water_plane4_whirlpool() {
	scroll_sts_mat_water_plane4_whirlpool_water_whirlpool_layer5();
}

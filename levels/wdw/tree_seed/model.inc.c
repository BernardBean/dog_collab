Lights1 tree_seed_f3dlite_material_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Lights1 tree_seed_f3dlite_material_001_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Gfx tree_seed_nut_ci8_aligner[] = {gsSPEndDisplayList()};
u8 tree_seed_nut_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x05, 0x05, 
	0x05, 0x05, 0x03, 0x06, 0x01, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x02, 0x06, 0x05, 0x05, 0x07, 0x07, 0x08, 
	0x07, 0x09, 0x05, 0x03, 0x06, 0x01, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x06, 0x05, 0x07, 0x08, 0x0a, 0x0a, 0x0b, 
	0x0a, 0x0a, 0x08, 0x09, 0x05, 0x06, 0x01, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x02, 0x05, 0x07, 0x0c, 0x0d, 0x0e, 0x0f, 0x10, 
	0x0f, 0x0e, 0x0d, 0x11, 0x07, 0x05, 0x06, 0x02, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x06, 0x05, 0x08, 0x0d, 0x0f, 0x12, 0x13, 0x13, 
	0x13, 0x14, 0x0f, 0x0d, 0x0c, 0x07, 0x05, 0x06, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x03, 0x05, 0x0c, 0x0e, 0x14, 0x13, 0x15, 0x16, 
	0x16, 0x17, 0x13, 0x10, 0x0d, 0x08, 0x05, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x03, 0x05, 0x0c, 0x0e, 0x14, 0x13, 0x16, 0x16, 
	0x16, 0x16, 0x13, 0x14, 0x0e, 0x0a, 0x07, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x06, 0x05, 0x08, 0x0d, 0x10, 0x13, 0x17, 0x16, 
	0x16, 0x15, 0x13, 0x14, 0x0e, 0x0a, 0x07, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 
	0x02, 0x04, 0x07, 0x0a, 0x0d, 0x0f, 0x14, 0x13, 
	0x13, 0x13, 0x13, 0x10, 0x0d, 0x0c, 0x09, 0x05, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x01, 0x06, 0x05, 0x07, 0x0c, 0x0d, 0x0e, 0x0f, 
	0x0f, 0x0f, 0x0f, 0x0d, 0x0a, 0x08, 0x05, 0x03, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x01, 0x06, 0x05, 0x09, 0x08, 0x0c, 0x0a, 
	0x0a, 0x0a, 0x0a, 0x11, 0x07, 0x05, 0x03, 0x06, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x06, 0x03, 0x05, 0x05, 0x07, 
	0x07, 0x07, 0x07, 0x05, 0x05, 0x03, 0x02, 0x01, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x03, 0x03, 
	0x03, 0x03, 0x03, 0x03, 0x06, 0x02, 0x01, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 
	0x02, 0x02, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x18, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x19, 0x19, 0x1a, 0x1b, 0x1c, 
	0x1d, 0x1c, 0x1e, 0x19, 0x19, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x1f, 
	0x20, 0x21, 0x22, 0x19, 0x00, 0x00, 0x00, 0x00, 
	0x18, 0x23, 0x24, 0x25, 0x26, 0x27, 0x27, 0x28, 
	0x28, 0x28, 0x27, 0x26, 0x29, 0x2a, 0x22, 0x1f, 
	0x19, 0x2b, 0x00, 0x19, 0x1c, 0x2c, 0x29, 0x28, 
	0x2d, 0x2d, 0x28, 0x25, 0x2e, 0x1f, 0x1f, 0x2f, 
	0x30, 0x28, 0x2d, 0x31, 0x32, 0x32, 0x32, 0x32, 
	0x32, 0x31, 0x32, 0x31, 0x2d, 0x2d, 0x2d, 0x27, 
	0x33, 0x34, 0x35, 0x36, 0x27, 0x2d, 0x31, 0x32, 
	0x2d, 0x32, 0x32, 0x31, 0x2d, 0x28, 0x28, 0x2d, 
	0x32, 0x32, 0x32, 0x32, 0x32, 0x31, 0x28, 0x28, 
	0x28, 0x28, 0x2d, 0x32, 0x32, 0x32, 0x32, 0x32, 
	0x2d, 0x2d, 0x2d, 0x2d, 0x32, 0x32, 0x32, 0x32, 
	0x37, 0x38, 0x31, 0x31, 0x2d, 0x31, 0x32, 0x32, 
	0x32, 0x32, 0x28, 0x39, 0x3a, 0x3b, 0x3c, 0x3c, 
	0x3c, 0x3c, 0x3c, 0x3a, 0x3d, 0x38, 0x28, 0x32, 
	0x32, 0x31, 0x31, 0x32, 0x32, 0x28, 0x39, 0x3a, 
	0x3e, 0x3c, 0x37, 0x39, 0x28, 0x28, 0x2d, 0x28, 
	0x39, 0x3a, 0x3c, 0x3c, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3c, 0x3c, 0x3b, 0x3a, 
	0x3d, 0x39, 0x38, 0x39, 0x3f, 0x3b, 0x3c, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 
	0x3c, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3c, 0x3c, 0x3c, 0x3c, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 0x3e, 
	
};

Gfx tree_seed_nut_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 tree_seed_nut_ci8_pal_rgba16[] = {
	0x79, 0xc5, 0x81, 0xc5, 0x82, 0x05, 0x8a, 0x07, 
	0x8a, 0x47, 0x92, 0x47, 0x8a, 0x05, 0x9a, 0x89, 
	0xa2, 0x89, 0x9a, 0x49, 0xaa, 0xcb, 0xb2, 0xcb, 
	0xaa, 0xc9, 0xb3, 0x0b, 0xbb, 0x0d, 0xbb, 0x4d, 
	0xc3, 0x4d, 0xa2, 0xc9, 0xc3, 0x8f, 0xcb, 0x8f, 
	0xc3, 0x4f, 0xd3, 0xcf, 0xd3, 0xd1, 0xd3, 0x8f, 
	0x82, 0x49, 0x82, 0x07, 0x82, 0x47, 0x8a, 0x89, 
	0x92, 0xcd, 0x93, 0x0f, 0x8a, 0x49, 0x8a, 0x8b, 
	0xcd, 0xe7, 0xc5, 0x61, 0xa3, 0x93, 0x9b, 0x51, 
	0xb4, 0x9b, 0xc5, 0xa3, 0xce, 0x27, 0xd6, 0x29, 
	0xd6, 0x69, 0xcd, 0xa5, 0xbc, 0xdd, 0x7a, 0x05, 
	0xac, 0x5b, 0xd6, 0x6b, 0xa3, 0xd5, 0xac, 0x59, 
	0xcd, 0xe5, 0xd6, 0xab, 0xde, 0xab, 0xc5, 0xa5, 
	0xbd, 0x1f, 0xb4, 0xdd, 0xc5, 0x63, 0xce, 0x21, 
	0xd6, 0x67, 0xd6, 0x65, 0xce, 0x1f, 0xcd, 0xdd, 
	0xcd, 0xdb, 0xd6, 0x23, 0xcd, 0xd9, 0xd6, 0x21, 
	
};

Gfx tree_seed_stalkleaffixed_ci8_aligner[] = {gsSPEndDisplayList()};
u8 tree_seed_stalkleaffixed_ci8[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x01, 0x01, 0x02, 0x03, 0x04, 0x04, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x05, 0x06, 0x01, 0x07, 0x08, 0x08, 0x09, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x0a, 0x0b, 0x02, 0x01, 0x0c, 0x0c, 0x0c, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 
	0x0e, 0x0f, 0x10, 0x11, 0x12, 0x04, 0x13, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 
	0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x1c, 
	0x1d, 0x0e, 0x14, 0x1e, 0x1a, 0x1f, 0x1f, 0x1a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x21, 0x22, 
	0x22, 0x23, 0x24, 0x1a, 0x1a, 0x1f, 0x1a, 0x25, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x26, 0x21, 0x21, 0x21, 
	0x27, 0x28, 0x29, 0x25, 0x2a, 0x1a, 0x25, 0x1a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x2b, 0x23, 0x2c, 0x21, 
	0x2d, 0x2e, 0x25, 0x1a, 0x25, 0x13, 0x1a, 0x2f, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x23, 0x23, 0x2c, 0x23, 0x28, 
	0x30, 0x1f, 0x1a, 0x25, 0x13, 0x13, 0x1a, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x31, 0x32, 0x2c, 0x33, 0x2c, 0x34, 
	0x1f, 0x2a, 0x1f, 0x25, 0x13, 0x35, 0x35, 0x19, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x36, 0x21, 0x37, 0x23, 0x2c, 0x38, 0x2e, 
	0x25, 0x25, 0x25, 0x13, 0x35, 0x39, 0x19, 0x19, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x3a, 0x3b, 0x3b, 0x3c, 0x3d, 0x3e, 0x2e, 0x1a, 
	0x1a, 0x1a, 0x1a, 0x13, 0x3f, 0x39, 0x19, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 
	0x3b, 0x3b, 0x3b, 0x3b, 0x30, 0x2e, 0x25, 0x25, 
	0x1f, 0x1f, 0x13, 0x40, 0x19, 0x35, 0x13, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3b, 
	0x41, 0x42, 0x2d, 0x43, 0x44, 0x45, 0x25, 0x1f, 
	0x1f, 0x25, 0x13, 0x35, 0x13, 0x13, 0x13, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x3b, 
	0x41, 0x3b, 0x46, 0x44, 0x44, 0x1f, 0x45, 0x47, 
	0x1f, 0x48, 0x13, 0x13, 0x13, 0x48, 0x48, 0x13, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x43, 0x43, 
	0x46, 0x41, 0x49, 0x44, 0x44, 0x34, 0x47, 0x25, 
	0x25, 0x1a, 0x25, 0x13, 0x48, 0x48, 0x48, 0x35, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x43, 0x43, 
	0x43, 0x49, 0x44, 0x34, 0x44, 0x47, 0x1f, 0x25, 
	0x25, 0x1a, 0x25, 0x48, 0x25, 0x48, 0x13, 0x35, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x2d, 0x2d, 0x43, 
	0x4a, 0x4b, 0x4b, 0x4b, 0x44, 0x1f, 0x1a, 0x13, 
	0x25, 0x25, 0x25, 0x25, 0x48, 0x35, 0x19, 0x39, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x4c, 0x43, 0x43, 0x2d, 
	0x30, 0x44, 0x4b, 0x44, 0x45, 0x25, 0x25, 0x25, 
	0x25, 0x25, 0x1f, 0x25, 0x48, 0x39, 0x3f, 0x04, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x36, 0x46, 0x42, 0x42, 0x43, 
	0x44, 0x44, 0x44, 0x45, 0x25, 0x25, 0x45, 0x1f, 
	0x1f, 0x25, 0x1a, 0x48, 0x40, 0x3f, 0x4d, 0x19, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x4e, 0x4f, 0x4f, 0x50, 0x42, 0x51, 
	0x44, 0x47, 0x1f, 0x1f, 0x52, 0x1f, 0x1f, 0x52, 
	0x25, 0x25, 0x25, 0x35, 0x3f, 0x04, 0x04, 0x19, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x53, 0x54, 0x4f, 0x4f, 0x4f, 0x2e, 0x44, 
	0x1f, 0x45, 0x1f, 0x1f, 0x25, 0x1f, 0x2a, 0x25, 
	0x48, 0x13, 0x40, 0x3f, 0x04, 0x09, 0x04, 0x35, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x4e, 0x55, 0x55, 0x54, 0x4f, 0x4f, 0x1f, 0x1f, 
	0x25, 0x25, 0x25, 0x1a, 0x13, 0x25, 0x1a, 0x25, 
	0x48, 0x35, 0x3f, 0x0c, 0x0c, 0x04, 0x35, 0x48, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x54, 0x54, 0x55, 0x55, 0x55, 0x56, 0x25, 0x2a, 
	0x25, 0x2a, 0x25, 0x25, 0x13, 0x13, 0x25, 0x25, 
	0x48, 0x35, 0x57, 0x0c, 0x3f, 0x35, 0x13, 0x48, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4e, 0x58, 
	0x54, 0x54, 0x54, 0x52, 0x25, 0x48, 0x48, 0x52, 
	0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x48, 
	0x35, 0x3f, 0x57, 0x3f, 0x35, 0x48, 0x25, 0x25, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x59, 0x4f, 
	0x54, 0x54, 0x54, 0x25, 0x48, 0x13, 0x48, 0x25, 
	0x52, 0x25, 0x25, 0x25, 0x1a, 0x48, 0x48, 0x48, 
	0x13, 0x35, 0x39, 0x35, 0x48, 0x48, 0x1a, 0x2a, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x5a, 0x5b, 0x5c, 
	0x58, 0x54, 0x45, 0x25, 0x13, 0x35, 0x48, 0x25, 
	0x25, 0x25, 0x25, 0x25, 0x25, 0x48, 0x48, 0x13, 
	0x13, 0x13, 0x13, 0x48, 0x25, 0x1a, 0x1a, 0x48, 
	0x00, 0x00, 0x00, 0x0d, 0x1d, 0x22, 0x5b, 0x5a, 
	0x51, 0x1f, 0x52, 0x48, 0x13, 0x48, 0x1a, 0x25, 
	0x25, 0x25, 0x25, 0x48, 0x48, 0x48, 0x48, 0x13, 
	0x13, 0x13, 0x48, 0x25, 0x25, 0x1f, 0x2a, 0x48, 
	0x00, 0x00, 0x0d, 0x5d, 0x0f, 0x0f, 0x0f, 0x5c, 
	0x47, 0x1f, 0x25, 0x48, 0x48, 0x48, 0x48, 0x48, 
	0x48, 0x48, 0x1a, 0x25, 0x48, 0x48, 0x13, 0x48, 
	0x48, 0x48, 0x48, 0x1a, 0x1f, 0x2a, 0x52, 0x48, 
	0x00, 0x00, 0x5e, 0x5f, 0x5d, 0x15, 0x60, 0x61, 
	0x47, 0x52, 0x48, 0x48, 0x48, 0x48, 0x25, 0x25, 
	0x25, 0x25, 0x1a, 0x48, 0x35, 0x13, 0x48, 0x48, 
	0x48, 0x25, 0x25, 0x25, 0x25, 0x52, 0x25, 0x48, 
	0x00, 0x0d, 0x5d, 0x62, 0x0a, 0x63, 0x3e, 0x2e, 
	0x45, 0x52, 0x25, 0x48, 0x52, 0x52, 0x2a, 0x2a, 
	0x52, 0x25, 0x48, 0x35, 0x35, 0x13, 0x13, 0x48, 
	0x25, 0x25, 0x25, 0x52, 0x25, 0x48, 0x48, 0x48, 
	0x0d, 0x15, 0x64, 0x0f, 0x0f, 0x1e, 0x51, 0x52, 
	0x52, 0x52, 0x25, 0x25, 0x1f, 0x1f, 0x52, 0x52, 
	0x48, 0x48, 0x35, 0x19, 0x19, 0x35, 0x48, 0x25, 
	0x25, 0x25, 0x52, 0x25, 0x48, 0x35, 0x13, 0x1a, 
	0x65, 0x65, 0x65, 0x65, 0x60, 0x61, 0x52, 0x25, 
	0x52, 0x52, 0x52, 0x1f, 0x47, 0x1f, 0x52, 0x52, 
	0x48, 0x35, 0x3f, 0x66, 0x35, 0x13, 0x25, 0x52, 
	0x52, 0x45, 0x25, 0x13, 0x35, 0x13, 0x13, 0x1a, 
	0x67, 0x68, 0x69, 0x15, 0x60, 0x51, 0x2a, 0x25, 
	0x25, 0x25, 0x45, 0x47, 0x47, 0x1f, 0x25, 0x48, 
	0x35, 0x66, 0x3f, 0x35, 0x48, 0x52, 0x2a, 0x52, 
	0x25, 0x25, 0x13, 0x3f, 0x35, 0x48, 0x1f, 0x2f, 
	0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x1f, 0x1f, 0x1f, 
	0x1f, 0x45, 0x1f, 0x1f, 0x1f, 0x25, 0x48, 0x3f, 
	0x6f, 0x35, 0x35, 0x48, 0x25, 0x52, 0x25, 0x25, 
	0x13, 0x35, 0x35, 0x35, 0x35, 0x70, 0x1a, 0x1a, 
	0x71, 0x72, 0x73, 0x74, 0x29, 0x45, 0x45, 0x47, 
	0x47, 0x47, 0x75, 0x47, 0x1f, 0x48, 0x76, 0x77, 
	0x35, 0x48, 0x48, 0x25, 0x2a, 0x25, 0x48, 0x35, 
	0x19, 0x35, 0x35, 0x35, 0x13, 0x1a, 0x1a, 0x1a, 
	0x78, 0x79, 0x7a, 0x12, 0x1f, 0x75, 0x75, 0x44, 
	0x44, 0x44, 0x7b, 0x51, 0x1f, 0x48, 0x35, 0x76, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x35, 0x19, 0x35, 
	0x35, 0x35, 0x35, 0x13, 0x48, 0x1a, 0x1a, 0x1a, 
	0x7c, 0x7d, 0x7e, 0x18, 0x2a, 0x75, 0x47, 0x7f, 
	0x44, 0x51, 0x51, 0x51, 0x1f, 0x48, 0x48, 0x48, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x13, 0x35, 0x13, 
	0x35, 0x13, 0x13, 0x13, 0x25, 0x1a, 0x1a, 0x25, 
	0x80, 0x81, 0x6d, 0x82, 0x2a, 0x52, 0x44, 0x34, 
	0x34, 0x51, 0x44, 0x47, 0x52, 0x48, 0x48, 0x48, 
	0x48, 0x48, 0x48, 0x48, 0x48, 0x1a, 0x48, 0x13, 
	0x13, 0x13, 0x13, 0x13, 0x1a, 0x1a, 0x48, 0x13, 
	0x83, 0x10, 0x24, 0x29, 0x48, 0x48, 0x47, 0x4b, 
	0x7f, 0x44, 0x1f, 0x25, 0x48, 0x35, 0x84, 0x85, 
	0x48, 0x13, 0x48, 0x48, 0x25, 0x25, 0x13, 0x13, 
	0x13, 0x13, 0x48, 0x25, 0x1a, 0x48, 0x48, 0x13, 
	0x86, 0x87, 0x3e, 0x51, 0x35, 0x35, 0x1f, 0x47, 
	0x47, 0x1f, 0x48, 0x35, 0x13, 0x48, 0x48, 0x25, 
	0x25, 0x25, 0x25, 0x48, 0x48, 0x13, 0x40, 0x35, 
	0x13, 0x48, 0x48, 0x48, 0x13, 0x13, 0x13, 0x13, 
	0x88, 0x89, 0x8a, 0x51, 0x13, 0x40, 0x52, 0x2a, 
	0x25, 0x35, 0x40, 0x40, 0x48, 0x25, 0x52, 0x52, 
	0x2a, 0x2a, 0x25, 0x48, 0x48, 0x13, 0x35, 0x35, 
	0x48, 0x13, 0x8b, 0x35, 0x39, 0x35, 0x19, 0x19, 
	0x8c, 0x8d, 0x8e, 0x29, 0x48, 0x39, 0x25, 0x48, 
	0x48, 0x48, 0x48, 0x48, 0x25, 0x25, 0x52, 0x1f, 
	0x52, 0x25, 0x48, 0x13, 0x35, 0x13, 0x35, 0x13, 
	0x8b, 0x8b, 0x35, 0x39, 0x19, 0x19, 0x19, 0x12, 
	0x6c, 0x89, 0x8f, 0x90, 0x70, 0x25, 0x2a, 0x25, 
	0x25, 0x25, 0x25, 0x52, 0x2a, 0x1f, 0x1f, 0x52, 
	0x52, 0x48, 0x35, 0x39, 0x19, 0x35, 0x35, 0x35, 
	0x35, 0x35, 0x35, 0x39, 0x19, 0x19, 0x12, 0x04, 
	0x91, 0x92, 0x8e, 0x1a, 0x1f, 0x44, 0x47, 0x25, 
	0x25, 0x25, 0x52, 0x25, 0x1f, 0x1f, 0x1f, 0x25, 
	0x1a, 0x35, 0x19, 0x19, 0x19, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x39, 0x12, 0x12, 0x04, 
	0x93, 0x94, 0x8e, 0x13, 0x1f, 0x1f, 0x25, 0x25, 
	0x25, 0x25, 0x2a, 0x25, 0x1f, 0x1f, 0x25, 0x48, 
	0x13, 0x13, 0x35, 0x19, 0x19, 0x19, 0x19, 0x3f, 
	0x3f, 0x19, 0x19, 0x39, 0x39, 0x04, 0x04, 0x04, 
	0x88, 0x94, 0x90, 0x13, 0x25, 0x25, 0x48, 0x48, 
	0x25, 0x25, 0x25, 0x25, 0x1f, 0x1a, 0x25, 0x13, 
	0x40, 0x35, 0x19, 0x3f, 0x3f, 0x19, 0x19, 0x19, 
	0x39, 0x39, 0x39, 0x19, 0x19, 0x19, 0x04, 0x04, 
	0x73, 0x95, 0x8b, 0x13, 0x25, 0x25, 0x48, 0x84, 
	0x19, 0x13, 0x25, 0x25, 0x25, 0x13, 0x13, 0x13, 
	0x39, 0x19, 0x19, 0x19, 0x39, 0x19, 0x19, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x96, 0x04, 0x04, 
	0x6a, 0x97, 0x98, 0x13, 0x1a, 0x25, 0x99, 0x9a, 
	0x13, 0x25, 0x25, 0x25, 0x13, 0x13, 0x19, 0x39, 
	0x39, 0x19, 0x19, 0x19, 0x19, 0x39, 0x39, 0x19, 
	0x19, 0x19, 0x19, 0x19, 0x19, 0x12, 0x04, 0x09, 
	0x88, 0x9b, 0x12, 0x13, 0x9c, 0x9d, 0x99, 0x19, 
	0x25, 0x1a, 0x48, 0x13, 0x35, 0x19, 0x19, 0x39, 
	0x40, 0x13, 0x13, 0x19, 0x39, 0x19, 0x13, 0x13, 
	0x19, 0x19, 0x19, 0x04, 0x99, 0x97, 0x97, 0x9e, 
	0x9f, 0x9b, 0x9b, 0x97, 0xa0, 0xa1, 0x8b, 0x13, 
	0x48, 0x1a, 0x13, 0x40, 0x40, 0x39, 0x13, 0x13, 
	0x13, 0x48, 0x13, 0x13, 0x13, 0x13, 0x35, 0x19, 
	0x04, 0x04, 0x04, 0x9e, 0xa2, 0xa2, 0x9e, 0xa2, 
	0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0x18, 0x13, 
	0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x25, 0x1a, 
	0xa9, 0xa9, 0x13, 0x13, 0x13, 0x39, 0x39, 0x96, 
	0x04, 0x09, 0x9e, 0xaa, 0xaa, 0xa2, 0xab, 0x9e, 
	0xa4, 0x93, 0x80, 0x9a, 0x94, 0x96, 0x19, 0x1a, 
	0x1a, 0x1a, 0x1a, 0x1a, 0x25, 0x25, 0x1a, 0x1a, 
	0xa9, 0x13, 0x1a, 0x1a, 0x35, 0x39, 0x96, 0x04, 
	0x04, 0x09, 0x9a, 0xac, 0x9e, 0xab, 0x97, 0x97, 
	0x88, 0xad, 0x80, 0xae, 0xaf, 0xa2, 0x18, 0x1a, 
	0x13, 0x13, 0xa9, 0x25, 0x25, 0x82, 0x1a, 0x25, 
	0xa9, 0x1a, 0x1a, 0x13, 0x13, 0x19, 0x04, 0x04, 
	0x99, 0x99, 0x97, 0x9e, 0x9e, 0x9e, 0xa2, 0xa2, 
	0x80, 0x80, 0x71, 0x80, 0x80, 0xb0, 0xaf, 0xa0, 
	0xa0, 0x99, 0x39, 0x13, 0x13, 0xa9, 0xa9, 0xa9, 
	0xa9, 0xa9, 0x13, 0x39, 0x19, 0x19, 0x99, 0x09, 
	0x9a, 0x9a, 0x9a, 0xa2, 0xa2, 0xa2, 0xa2, 0xa2, 
	0x53, 0x80, 0x80, 0xad, 0x71, 0xb1, 0x88, 0xb2, 
	0x9d, 0x9a, 0x99, 0x39, 0x19, 0x18, 0x13, 0x13, 
	0xa9, 0x13, 0xb3, 0x19, 0x19, 0x04, 0x99, 0x97, 
	0x9a, 0x97, 0x9e, 0xa2, 0xa2, 0xaa, 0xaa, 0xa2, 
	0x00, 0x00, 0x80, 0x72, 0x72, 0x71, 0xb4, 0x88, 
	0xb0, 0xb0, 0xaf, 0x99, 0x0c, 0x04, 0x39, 0x18, 
	0xa9, 0x18, 0x19, 0x96, 0x04, 0x99, 0x99, 0x97, 
	0x97, 0xb5, 0xa2, 0xaf, 0xa2, 0xa2, 0xa2, 0xa2, 
	0x00, 0x00, 0x00, 0x53, 0x71, 0xb6, 0x6a, 0x88, 
	0x71, 0xb7, 0xb8, 0xb9, 0x99, 0x96, 0x39, 0x18, 
	0x39, 0x19, 0x12, 0x99, 0x09, 0x9a, 0xa2, 0xa2, 
	0xb5, 0xaf, 0xaf, 0xba, 0xa2, 0xb5, 0x97, 0xa2, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0x88, 0x71, 
	0x72, 0x72, 0xb1, 0xbb, 0xbc, 0x99, 0x18, 0x19, 
	0x96, 0xbd, 0x99, 0x97, 0xa0, 0xa2, 0xaf, 0xba, 
	0xa2, 0xaf, 0xaf, 0xaf, 0xba, 0xa2, 0xa2, 0xaf, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xbe, 0x71, 
	0x72, 0x72, 0xbf, 0xc0, 0xb4, 0xb4, 0xb4, 0xa0, 
	0xc1, 0xc1, 0xc2, 0xb2, 0xc3, 0xb9, 0x89, 0x9b, 
	0xaf, 0xa2, 0xb2, 0xb2, 0xb2, 0xaf, 0xb2, 0xb0, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0xc4, 0xc5, 0x93, 0xc0, 0xb4, 0xb4, 0xb4, 0x8c, 
	0xc6, 0x88, 0xc7, 0xc8, 0xc3, 0x97, 0x94, 0x89, 
	0x89, 0x94, 0x94, 0x97, 0xb5, 0xba, 0xb2, 0xc8, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xc9, 0xb4, 0xb4, 0x8c, 0xb6, 
	0x88, 0xc7, 0xca, 0xcb, 0x7d, 0x73, 0x07, 0xbd, 
	0x98, 0x95, 0x95, 0xaf, 0x9b, 0xaf, 0xaf, 0xb2, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xc6, 
	0x88, 0x7c, 0xcc, 0xcb, 0x93, 0x6c, 0xa7, 0xa1, 
	0xcd, 0xce, 0x67, 0xcf, 0x71, 0xb0, 0xb0, 0xaf, 
	
};

Gfx tree_seed_stalkleaffixed_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 tree_seed_stalkleaffixed_ci8_pal_rgba16[] = {
	0x00, 0x00, 0x43, 0xce, 0x4c, 0x0e, 0x44, 0x0e, 
	0x43, 0xcf, 0x5c, 0x52, 0x4c, 0x10, 0x43, 0x8e, 
	0x3b, 0x8d, 0x3b, 0x8f, 0x74, 0xd8, 0x6c, 0x96, 
	0x3b, 0xcf, 0x08, 0x42, 0x9e, 0x20, 0x8d, 0x9c, 
	0x7d, 0x18, 0x7c, 0xd8, 0x4b, 0xd1, 0x54, 0x51, 
	0x9e, 0x1e, 0x95, 0xde, 0x9d, 0xe0, 0x85, 0x1a, 
	0x54, 0x11, 0x4c, 0x11, 0x5c, 0x93, 0x6c, 0x94, 
	0x8d, 0xdc, 0x95, 0xdc, 0x85, 0x5b, 0x64, 0xd3, 
	0x4b, 0x0e, 0x8d, 0xda, 0x85, 0x9a, 0x8d, 0x9a, 
	0x7d, 0x59, 0x5c, 0x91, 0x10, 0xc4, 0x85, 0xda, 
	0x85, 0x99, 0x6c, 0xd5, 0x5c, 0xd3, 0x95, 0x9a, 
	0x8d, 0x98, 0x7d, 0x56, 0x6c, 0xd3, 0x64, 0xd5, 
	0x75, 0x15, 0x29, 0xc8, 0x95, 0xda, 0x9d, 0xda, 
	0x75, 0x55, 0x4c, 0x51, 0x19, 0x04, 0x96, 0x1c, 
	0x7d, 0x15, 0x4c, 0x0f, 0x08, 0x40, 0x7d, 0x54, 
	0x85, 0x98, 0xa6, 0x60, 0x85, 0x59, 0x44, 0x0f, 
	0x4c, 0x4f, 0x7d, 0x14, 0x75, 0x14, 0x75, 0x54, 
	0x6d, 0x13, 0x64, 0xd1, 0x75, 0x12, 0x65, 0x13, 
	0x54, 0x91, 0x75, 0x13, 0x75, 0x52, 0x6d, 0x53, 
	0x21, 0x86, 0x43, 0xd1, 0x08, 0x82, 0x6c, 0xd2, 
	0x6d, 0x12, 0x6d, 0x15, 0x5c, 0xd1, 0x00, 0x40, 
	0x64, 0xd0, 0x5c, 0xd0, 0x5c, 0x8f, 0x3c, 0x0f, 
	0x64, 0xd2, 0x75, 0x16, 0x7d, 0x5a, 0x7d, 0x58, 
	0x6d, 0x14, 0x85, 0x5c, 0x74, 0xda, 0x7d, 0x1a, 
	0x8d, 0x9d, 0x7d, 0x57, 0x85, 0x5a, 0x85, 0x9c, 
	0x95, 0x9c, 0x95, 0x9e, 0x44, 0x11, 0x64, 0x54, 
	0x6c, 0x98, 0x9d, 0xde, 0x2a, 0xca, 0x43, 0x4e, 
	0x3b, 0x4e, 0x6c, 0xd7, 0x75, 0x17, 0x44, 0x4f, 
	0x54, 0x93, 0x22, 0x48, 0x1a, 0x06, 0x33, 0x0c, 
	0x5c, 0x13, 0x65, 0x11, 0x4c, 0x91, 0x44, 0x51, 
	0x22, 0x4a, 0x19, 0xc8, 0x1a, 0x09, 0x6d, 0x55, 
	0x3b, 0x0e, 0x3a, 0xce, 0x4b, 0x51, 0x75, 0x53, 
	0x1a, 0x46, 0x53, 0xd0, 0x64, 0x93, 0x74, 0xd6, 
	0x54, 0x4f, 0x54, 0x8f, 0x5b, 0xd0, 0x74, 0xd7, 
	0x2a, 0x8a, 0x43, 0x4f, 0x7d, 0x17, 0x54, 0x53, 
	0x3b, 0x0c, 0x43, 0x0f, 0x6c, 0x97, 0x64, 0x55, 
	0x64, 0x95, 0x5c, 0x14, 0x4b, 0xd3, 0x32, 0xcc, 
	0x4b, 0x91, 0x53, 0xd3, 0x4b, 0xcf, 0x3b, 0x4f, 
	0x54, 0x13, 0x43, 0x8f, 0x3b, 0x4d, 0x32, 0xcd, 
	0x43, 0x8d, 0x32, 0xcb, 0x33, 0x4d, 0x3a, 0xcc, 
	0x3b, 0x0d, 0x6c, 0xd8, 0x33, 0x0d, 0x4b, 0x50, 
	0x43, 0x50, 0x4b, 0x90, 0x4b, 0xd2, 0x5c, 0x54, 
	0x5c, 0x53, 0x5c, 0x51, 0x2b, 0x0d, 0x33, 0x4f, 
	0x2b, 0x0b, 0x22, 0x46, 0x22, 0x88, 0x2a, 0xcb, 
	0x22, 0x49, 0x19, 0xc6, 0x2a, 0x8b, 0x54, 0x0f, 
	0x3b, 0x4c, 0x33, 0x0f, 0x32, 0xca, 0x11, 0xc4, 
	0x1a, 0x07, 0x43, 0x51, 0x2a, 0xcd, 0x4b, 0x92, 
	0x43, 0x91, 0x4b, 0x8f, 0x2a, 0x88, 0x32, 0x8c, 
	0x43, 0x90, 0x3b, 0x0f, 0x3a, 0xcd, 0x32, 0x8d, 
	0x08, 0xc2, 0x1a, 0x08, 0x2a, 0x4a, 0x2a, 0x8c, 
	0x22, 0x09, 0x22, 0x08, 0x4b, 0xd4, 0x32, 0xce, 
	0x3b, 0x10, 0x74, 0x98, 0x7d, 0x1c, 0x22, 0x06, 
	
};

Vtx tree_seed_Sphere_mesh_layer_1_vtx_cull[8] = {
	{{{-52, -39, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-52, 77, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-52, 77, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-52, -39, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, -39, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, 77, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, 77, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, -39, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx tree_seed_Sphere_mesh_layer_1_vtx_0[18] = {
	{{{0, -39, 1},0, {-16, 895},{0x0, 0x81, 0x0, 0x0}}},
	{{{-29, -26, 30},0, {355, 800},{0xB6, 0xB6, 0x49, 0x0}}},
	{{{-28, -26, -27},0, {112, 641},{0xB7, 0xB6, 0xB6, 0x0}}},
	{{{-50, 6, 1},0, {267, 515},{0x81, 0x0, 0xFE, 0x0}}},
	{{{0, 6, 52},0, {526, 608},{0xFE, 0x0, 0x7F, 0x0}}},
	{{{29, -26, 30},0, {699, 767},{0x49, 0xB6, 0x4A, 0x0}}},
	{{{0, -39, 1},0, {1008, 895},{0x0, 0x81, 0x0, 0x0}}},
	{{{29, -26, -27},0, {925, 619},{0x4A, 0xB6, 0xB7, 0x0}}},
	{{{-28, -26, -27},0, {1136, 641},{0xB7, 0xB6, 0xB6, 0x0}}},
	{{{0, 6, -49},0, {1038, 384},{0x2, 0x0, 0x81, 0x0}}},
	{{{51, 6, 1},0, {779, 477},{0x7F, 0x0, 0x2, 0x0}}},
	{{{37, 38, -15},0, {800, 228},{0x5B, 0x4C, 0xD2, 0x0}}},
	{{{-16, 38, -36},0, {1143, 190},{0xD2, 0x4C, 0xA5, 0x0}}},
	{{{0, 52, 1},0, {496, 97},{0x0, 0x7F, 0x0, 0x0}}},
	{{{17, 38, 39},0, {575, 375},{0x2E, 0x4C, 0x5B, 0x0}}},
	{{{-37, 38, 18},0, {364, 349},{0xA5, 0x4C, 0x2E, 0x0}}},
	{{{-16, 38, -36},0, {119, 190},{0xD2, 0x4C, 0xA5, 0x0}}},
	{{{0, 6, -49},0, {14, 384},{0x2, 0x0, 0x81, 0x0}}},
};

Gfx tree_seed_Sphere_mesh_layer_1_tri_0[] = {
	gsSPVertex(tree_seed_Sphere_mesh_layer_1_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
	gsSP2Triangles(6, 5, 1, 0, 6, 7, 5, 0),
	gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
	gsSP2Triangles(10, 7, 9, 0, 11, 10, 9, 0),
	gsSP2Triangles(9, 12, 11, 0, 12, 13, 11, 0),
	gsSP2Triangles(11, 13, 14, 0, 14, 13, 15, 0),
	gsSP2Triangles(15, 13, 16, 0, 16, 3, 15, 0),
	gsSP2Triangles(3, 16, 17, 0, 17, 2, 3, 0),
	gsSP2Triangles(4, 15, 3, 0, 15, 4, 14, 0),
	gsSP2Triangles(14, 4, 10, 0, 5, 10, 4, 0),
	gsSP2Triangles(7, 10, 5, 0, 10, 11, 14, 0),
	gsSPEndDisplayList(),
};

Vtx tree_seed_Sphere_mesh_layer_4_vtx_cull[8] = {
	{{{-52, -39, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-52, 77, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-52, 77, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-52, -39, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, -39, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, 77, 61},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, 77, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{69, -39, -49},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx tree_seed_Sphere_mesh_layer_4_vtx_0[18] = {
	{{{-4, 41, 18},0, {1294, 2107},{0xB0, 0x5D, 0x23, 0x0}}},
	{{{17, 52, 37},0, {1674, 1760},{0xD3, 0x6E, 0x2D, 0x0}}},
	{{{19, 63, 14},0, {515, 1763},{0xCD, 0x6C, 0x2C, 0x0}}},
	{{{-3, 46, 6},0, {893, 2117},{0xB0, 0x5D, 0x23, 0x0}}},
	{{{19, 63, 14},0, {382, 1793},{0xCD, 0x6C, 0x2C, 0x0}}},
	{{{17, 52, 37},0, {1627, 1795},{0xD3, 0x6E, 0x2D, 0x0}}},
	{{{43, 47, 61},0, {2056, 1103},{0xE8, 0x73, 0x31, 0x0}}},
	{{{47, 70, 9},0, {63, 1130},{0xE8, 0x73, 0x31, 0x0}}},
	{{{69, 63, 37},0, {978, 611},{0xE8, 0x73, 0x31, 0x0}}},
	{{{0, 42, 6},0, {1329, 2127},{0x3E, 0x55, 0x47, 0x0}}},
	{{{-9, 65, -13},0, {1735, 1780},{0x1F, 0x71, 0x31, 0x0}}},
	{{{-26, 61, 6},0, {586, 1785},{0x24, 0x6E, 0x35, 0x0}}},
	{{{-9, 40, 15},0, {919, 2137},{0x3E, 0x55, 0x47, 0x0}}},
	{{{-26, 61, 6},0, {453, 1840},{0x24, 0x6E, 0x35, 0x0}}},
	{{{-9, 65, -13},0, {1711, 1839},{0x1F, 0x71, 0x31, 0x0}}},
	{{{-15, 77, -46},0, {2077, 1138},{0xC, 0x7A, 0x23, 0x0}}},
	{{{-52, 68, -4},0, {69, 1181},{0xC, 0x7A, 0x23, 0x0}}},
	{{{-52, 76, -39},0, {1018, 667},{0xC, 0x7A, 0x23, 0x0}}},
};

Gfx tree_seed_Sphere_mesh_layer_4_tri_0[] = {
	gsSPVertex(tree_seed_Sphere_mesh_layer_4_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
	gsSP2Triangles(15, 16, 13, 0, 15, 17, 16, 0),
	gsSPEndDisplayList(),
};


Gfx mat_tree_seed_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, tree_seed_nut_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 63),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, tree_seed_nut_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(tree_seed_f3dlite_material_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_tree_seed_f3dlite_material[] = {
	gsDPPipeSync(),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_tree_seed_f3dlite_material_001[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, tree_seed_stalkleaffixed_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 207),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, tree_seed_stalkleaffixed_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_MIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPSetLights1(tree_seed_f3dlite_material_001_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_tree_seed_f3dlite_material_001[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx tree_seed_Sphere_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(tree_seed_Sphere_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_tree_seed_f3dlite_material),
	gsSPDisplayList(tree_seed_Sphere_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_tree_seed_f3dlite_material),
	gsSPEndDisplayList(),
};

Gfx tree_seed_Sphere_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(tree_seed_Sphere_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_tree_seed_f3dlite_material_001),
	gsSPDisplayList(tree_seed_Sphere_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_tree_seed_f3dlite_material_001),
	gsSPEndDisplayList(),
};

Gfx tree_seed_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};


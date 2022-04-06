Lights1 toad_cage_4_geo_cage_side_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Lights1 toad_cage_4_geo_cage_top_lights = gdSPDefLights1(
	0x7F, 0x7F, 0x7F,
	0xFE, 0xFE, 0xFE, 0x28, 0x28, 0x28);

Gfx toad_cage_4_geo_side_ci8_aligner[] = {gsSPEndDisplayList()};
u8 toad_cage_4_geo_side_ci8[] = {
	0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 0x02, 0x03, 
	0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x02, 0x02, 
	0x06, 0x06, 0x02, 0x02, 0x00, 0x00, 0x07, 0x07, 
	0x08, 0x07, 0x07, 0x00, 0x06, 0x02, 0x03, 0x03, 
	0x00, 0x01, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x02, 0x02, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x00, 0x07, 0x07, 0x00, 0x00, 0x02, 0x02, 0x03, 
	0x00, 0x02, 0x00, 0x08, 0x08, 0x00, 0x00, 0x07, 
	0x00, 0x00, 0x09, 0x00, 0x07, 0x07, 0x07, 0x07, 
	0x00, 0x00, 0x08, 0x00, 0x07, 0x08, 0x07, 0x07, 
	0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x02, 0x00, 0x08, 0x08, 0x00, 0x00, 0x07, 
	0x00, 0x00, 0x09, 0x00, 0x07, 0x07, 0x07, 0x07, 
	0x00, 0x00, 0x08, 0x00, 0x07, 0x08, 0x07, 0x07, 
	0x02, 0x02, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 
	0x00, 0x01, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x02, 0x02, 0x00, 0x00, 0x07, 0x07, 0x07, 0x07, 
	0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 
	0x00, 0x07, 0x07, 0x00, 0x00, 0x02, 0x02, 0x03, 
	0x00, 0x00, 0x01, 0x00, 0x02, 0x02, 0x02, 0x03, 
	0x04, 0x04, 0x04, 0x04, 0x05, 0x05, 0x02, 0x02, 
	0x06, 0x06, 0x02, 0x02, 0x00, 0x00, 0x07, 0x07, 
	0x08, 0x07, 0x07, 0x00, 0x06, 0x02, 0x03, 0x03, 
	0x0a, 0x0b, 0x0c, 0x0a, 0x0a, 0x0d, 0x0d, 0x0a, 
	0x0a, 0x0b, 0x0c, 0x0a, 0x0a, 0x0e, 0x0f, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x12, 0x0f, 0x0a, 
	0x0a, 0x0d, 0x13, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x0b, 0x0c, 0x0a, 0x0a, 0x14, 0x0d, 0x0a, 
	0x0a, 0x0b, 0x0c, 0x0a, 0x0a, 0x15, 0x0f, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x15, 0x0f, 0x0a, 
	0x0a, 0x0d, 0x0d, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x0d, 0x13, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x0d, 0x13, 0x0a, 0x0a, 0x0b, 0x0b, 0x0a, 
	0x0a, 0x10, 0x16, 0x0a, 0x0a, 0x0e, 0x0f, 0x0a, 
	0x0a, 0x14, 0x0d, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x0d, 0x13, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x0d, 0x13, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x11, 0x16, 0x0a, 0x0a, 0x15, 0x0f, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x0d, 0x13, 0x0a, 
	0x0a, 0x0d, 0x0d, 0x0a, 0x0a, 0x10, 0x16, 0x0a, 
	0x0a, 0x0d, 0x0d, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x0b, 0x0b, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x0d, 0x13, 0x0a, 
	0x0a, 0x14, 0x0d, 0x0a, 0x0a, 0x11, 0x16, 0x0a, 
	0x0a, 0x14, 0x0d, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x02, 0x18, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x10, 0x16, 0x0a, 0x0a, 0x0d, 0x0d, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x0d, 0x13, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x11, 0x16, 0x0a, 0x0a, 0x14, 0x0d, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x02, 0x18, 0x0a, 
	0x0a, 0x10, 0x11, 0x0a, 0x0a, 0x0d, 0x13, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x0b, 0x0c, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x10, 0x16, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x10, 0x16, 0x0a, 0x0a, 0x0d, 0x0d, 0x0a, 
	0x0a, 0x18, 0x18, 0x0a, 0x0a, 0x0d, 0x13, 0x0a, 
	0x0a, 0x02, 0x18, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x11, 0x16, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x11, 0x16, 0x0a, 0x0a, 0x14, 0x0d, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x0d, 0x13, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x10, 0x16, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x18, 0x18, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x0d, 0x0d, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x11, 0x16, 0x0a, 
	0x0a, 0x02, 0x18, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x02, 0x18, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x14, 0x0d, 0x0a, 
	0x0a, 0x18, 0x18, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x10, 0x16, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x02, 0x18, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x11, 0x16, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x10, 0x11, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x18, 0x18, 0x0a, 0x0a, 0x19, 0x16, 0x0a, 
	0x0a, 0x18, 0x18, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x10, 0x16, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x19, 0x16, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x02, 0x18, 0x0a, 
	0x0a, 0x0d, 0x19, 0x0a, 0x0a, 0x11, 0x16, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x18, 0x18, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x19, 0x16, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x0d, 0x19, 0x0a, 
	0x0a, 0x17, 0x18, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x14, 0x13, 0x0a, 0x0a, 0x02, 0x18, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x17, 0x17, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x18, 0x18, 0x0a, 
	0x0a, 0x17, 0x13, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x0d, 0x19, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x14, 0x13, 0x0a, 
	0x0a, 0x19, 0x16, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x17, 0x13, 0x0a, 0x0a, 0x17, 0x18, 0x0a, 
	0x0a, 0x17, 0x17, 0x0a, 0x0a, 0x19, 0x16, 0x0a, 
	0x07, 0x05, 0x06, 0x02, 0x05, 0x05, 0x03, 0x04, 
	0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x05, 0x05, 
	0x07, 0x00, 0x06, 0x06, 0x06, 0x02, 0x05, 0x05, 
	0x05, 0x03, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 
	0x02, 0x05, 0x02, 0x03, 0x03, 0x05, 0x05, 0x05, 
	0x05, 0x03, 0x03, 0x05, 0x05, 0x05, 0x03, 0x05, 
	0x00, 0x00, 0x07, 0x00, 0x02, 0x05, 0x02, 0x06, 
	0x05, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x02, 0x02, 0x05, 0x05, 0x03, 0x05, 0x03, 0x05, 
	0x02, 0x03, 0x03, 0x03, 0x05, 0x05, 0x03, 0x05, 
	0x00, 0x00, 0x07, 0x00, 0x02, 0x05, 0x02, 0x06, 
	0x05, 0x06, 0x05, 0x06, 0x06, 0x06, 0x06, 0x06, 
	0x02, 0x02, 0x05, 0x05, 0x03, 0x05, 0x03, 0x05, 
	0x02, 0x03, 0x03, 0x03, 0x05, 0x05, 0x03, 0x05, 
	0x07, 0x00, 0x06, 0x06, 0x06, 0x02, 0x05, 0x05, 
	0x05, 0x03, 0x05, 0x05, 0x06, 0x06, 0x06, 0x06, 
	0x02, 0x05, 0x02, 0x03, 0x03, 0x05, 0x05, 0x05, 
	0x05, 0x03, 0x03, 0x05, 0x05, 0x05, 0x03, 0x05, 
	0x07, 0x05, 0x06, 0x02, 0x05, 0x05, 0x03, 0x04, 
	0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 
	0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 
	0x02, 0x02, 0x02, 0x02, 0x05, 0x05, 0x05, 0x05, 
	
};

Gfx toad_cage_4_geo_side_ci8_pal_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 toad_cage_4_geo_side_ci8_pal_rgba16[] = {
	0x31, 0x8d, 0x52, 0x95, 0x21, 0x09, 0x10, 0x85, 
	0x08, 0x43, 0x18, 0xc7, 0x29, 0x4b, 0x39, 0xcf, 
	0x42, 0x11, 0x4a, 0x53, 0x00, 0x00, 0x3a, 0x13, 
	0x63, 0x5d, 0x4a, 0x55, 0x4a, 0x97, 0x6b, 0x5d, 
	0x39, 0xd1, 0x5a, 0xd9, 0x3a, 0x53, 0x84, 0x23, 
	0x21, 0x0b, 0x32, 0x11, 0x7b, 0xe1, 0x42, 0x13, 
	0x6b, 0x9d, 0x63, 0x1b, 
};

Gfx toad_cage_4_geo_top_i8_aligner[] = {gsSPEndDisplayList()};
u8 toad_cage_4_geo_top_i8[] = {
	0x33, 0x33, 0x57, 0x32, 0x27, 0x27, 0x27, 0x14, 
	0x0d, 0x0d, 0x0d, 0x0d, 0x19, 0x19, 0x20, 0x20, 
	0x2c, 0x2c, 0x24, 0x24, 0x34, 0x34, 0x3c, 0x3c, 
	0x45, 0x39, 0x3a, 0x35, 0x2e, 0x26, 0x14, 0x14, 
	0x33, 0x53, 0x29, 0x2a, 0x2c, 0x2a, 0x2f, 0x2f, 
	0x24, 0x24, 0x34, 0x34, 0x40, 0x40, 0x40, 0x40, 
	0x43, 0x43, 0x43, 0x43, 0x44, 0x44, 0x44, 0x43, 
	0x38, 0x39, 0x3a, 0x36, 0x38, 0x25, 0x21, 0x14, 
	0x33, 0x28, 0x33, 0x43, 0x45, 0x35, 0x37, 0x3e, 
	0x35, 0x34, 0x4b, 0x34, 0x40, 0x40, 0x40, 0x40, 
	0x34, 0x34, 0x43, 0x34, 0x3c, 0x44, 0x3c, 0x3c, 
	0x26, 0x26, 0x38, 0x26, 0x26, 0x22, 0x23, 0x24, 
	0x33, 0x26, 0x3a, 0x3a, 0x39, 0x33, 0x37, 0x3a, 
	0x34, 0x34, 0x4b, 0x4b, 0x40, 0x30, 0x40, 0x40, 
	0x34, 0x2c, 0x34, 0x34, 0x34, 0x3c, 0x44, 0x39, 
	0x2e, 0x34, 0x38, 0x2c, 0x28, 0x34, 0x24, 0x24, 
	0x27, 0x1f, 0x32, 0x35, 0x3c, 0x2d, 0x3b, 0x3a, 
	0x2d, 0x3c, 0x3c, 0x3c, 0x38, 0x30, 0x38, 0x44, 
	0x3c, 0x34, 0x30, 0x30, 0x2c, 0x37, 0x35, 0x2f, 
	0x33, 0x2a, 0x27, 0x2f, 0x33, 0x35, 0x31, 0x1c, 
	0x27, 0x26, 0x2b, 0x3b, 0x38, 0x2b, 0x33, 0x3d, 
	0x2f, 0x33, 0x3c, 0x3c, 0x38, 0x38, 0x38, 0x38, 
	0x34, 0x34, 0x30, 0x30, 0x2c, 0x37, 0x37, 0x2d, 
	0x28, 0x24, 0x21, 0x25, 0x2a, 0x25, 0x33, 0x1c, 
	0x27, 0x43, 0x2a, 0x32, 0x36, 0x2d, 0x38, 0x36, 
	0x2d, 0x33, 0x3c, 0x3c, 0x34, 0x30, 0x44, 0x38, 
	0x3c, 0x3c, 0x34, 0x30, 0x24, 0x24, 0x24, 0x2c, 
	0x3b, 0x39, 0x24, 0x24, 0x24, 0x32, 0x34, 0x0c, 
	0x14, 0x43, 0x3c, 0x2e, 0x2e, 0x35, 0x33, 0x32, 
	0x2c, 0x2c, 0x3c, 0x2c, 0x34, 0x34, 0x44, 0x44, 
	0x3c, 0x3c, 0x34, 0x30, 0x2c, 0x24, 0x20, 0x20, 
	0x24, 0x24, 0x24, 0x24, 0x34, 0x34, 0x34, 0x0c, 
	0x2c, 0x3c, 0x3c, 0x27, 0x2a, 0x2c, 0x2e, 0x25, 
	0x34, 0x34, 0x2f, 0x34, 0x43, 0x43, 0x43, 0x43, 
	0x44, 0x44, 0x3c, 0x34, 0x28, 0x20, 0x20, 0x20, 
	0x1c, 0x24, 0x24, 0x24, 0x34, 0x34, 0x1c, 0x14, 
	0x20, 0x2c, 0x3c, 0x20, 0x20, 0x24, 0x24, 0x2c, 
	0x2f, 0x2f, 0x34, 0x34, 0x43, 0x48, 0x48, 0x43, 
	0x44, 0x3c, 0x34, 0x34, 0x28, 0x20, 0x20, 0x20, 
	0x24, 0x1c, 0x1c, 0x19, 0x34, 0x34, 0x1c, 0x14, 
	0x2c, 0x27, 0x3c, 0x20, 0x24, 0x24, 0x2c, 0x38, 
	0x3c, 0x3c, 0x34, 0x3c, 0x43, 0x48, 0x47, 0x48, 
	0x44, 0x3c, 0x3c, 0x3c, 0x30, 0x28, 0x20, 0x28, 
	0x1c, 0x1c, 0x19, 0x19, 0x1c, 0x34, 0x1c, 0x04, 
	0x27, 0x20, 0x3c, 0x2c, 0x2c, 0x2c, 0x38, 0x38, 
	0x3c, 0x3c, 0x3c, 0x3c, 0x43, 0x47, 0x43, 0x47, 
	0x44, 0x44, 0x3c, 0x3c, 0x30, 0x20, 0x20, 0x28, 
	0x24, 0x24, 0x19, 0x19, 0x1c, 0x34, 0x14, 0x04, 
	0x27, 0x27, 0x34, 0x27, 0x27, 0x34, 0x34, 0x34, 
	0x3c, 0x3c, 0x47, 0x47, 0x43, 0x4b, 0x43, 0x4b, 
	0x3f, 0x3f, 0x3f, 0x34, 0x30, 0x28, 0x28, 0x28, 
	0x28, 0x1c, 0x1c, 0x10, 0x19, 0x30, 0x19, 0x00, 
	0x1c, 0x34, 0x47, 0x34, 0x27, 0x34, 0x34, 0x34, 
	0x47, 0x47, 0x3f, 0x47, 0x43, 0x4b, 0x4b, 0x4b, 
	0x3f, 0x3f, 0x3f, 0x34, 0x28, 0x24, 0x28, 0x28, 
	0x1c, 0x28, 0x1c, 0x14, 0x19, 0x30, 0x19, 0x00, 
	0x1c, 0x47, 0x47, 0x34, 0x2c, 0x2c, 0x34, 0x34, 
	0x47, 0x47, 0x3f, 0x47, 0x43, 0x4b, 0x4b, 0x43, 
	0x3f, 0x34, 0x34, 0x34, 0x28, 0x28, 0x24, 0x24, 
	0x1c, 0x28, 0x1c, 0x14, 0x19, 0x30, 0x08, 0x00, 
	0x1c, 0x47, 0x47, 0x34, 0x34, 0x2c, 0x2c, 0x2c, 
	0x3f, 0x3f, 0x3f, 0x47, 0x43, 0x43, 0x43, 0x3f, 
	0x3f, 0x3f, 0x2f, 0x2c, 0x28, 0x24, 0x24, 0x24, 
	0x1c, 0x1c, 0x1c, 0x14, 0x19, 0x30, 0x08, 0x00, 
	0x1c, 0x43, 0x5b, 0x43, 0x44, 0x3c, 0x3c, 0x3c, 
	0x3f, 0x47, 0x3f, 0x47, 0x3f, 0x3f, 0x3f, 0x34, 
	0x2c, 0x34, 0x2c, 0x24, 0x24, 0x24, 0x24, 0x24, 
	0x19, 0x19, 0x19, 0x10, 0x11, 0x20, 0x11, 0x01, 
	0x1c, 0x43, 0x5b, 0x43, 0x4f, 0x44, 0x4f, 0x44, 
	0x3f, 0x3f, 0x37, 0x3f, 0x3f, 0x3f, 0x34, 0x2f, 
	0x34, 0x2c, 0x2c, 0x24, 0x24, 0x24, 0x24, 0x1c, 
	0x19, 0x10, 0x19, 0x10, 0x11, 0x20, 0x11, 0x08, 
	0x1c, 0x43, 0x5b, 0x5b, 0x5f, 0x5f, 0x4f, 0x4f, 
	0x3f, 0x3f, 0x3f, 0x37, 0x34, 0x34, 0x34, 0x2c, 
	0x2c, 0x24, 0x24, 0x24, 0x1c, 0x24, 0x1c, 0x1c, 
	0x10, 0x10, 0x08, 0x10, 0x08, 0x20, 0x08, 0x01, 
	0x1c, 0x43, 0x5b, 0x5b, 0x5f, 0x5f, 0x5f, 0x4f, 
	0x47, 0x37, 0x37, 0x37, 0x2f, 0x2f, 0x2c, 0x2c, 
	0x2c, 0x24, 0x24, 0x24, 0x14, 0x14, 0x14, 0x1c, 
	0x10, 0x08, 0x08, 0x08, 0x01, 0x20, 0x01, 0x01, 
	0x20, 0x2f, 0x53, 0x53, 0x4f, 0x4f, 0x4f, 0x3f, 
	0x37, 0x37, 0x27, 0x2f, 0x2f, 0x2f, 0x2f, 0x2f, 
	0x27, 0x20, 0x20, 0x18, 0x10, 0x10, 0x14, 0x14, 
	0x0c, 0x0c, 0x0c, 0x0c, 0x04, 0x14, 0x01, 0x01, 
	0x20, 0x2f, 0x53, 0x53, 0x4f, 0x3f, 0x3f, 0x3f, 
	0x2f, 0x2f, 0x2f, 0x27, 0x27, 0x20, 0x2f, 0x2f, 
	0x27, 0x27, 0x20, 0x18, 0x10, 0x14, 0x14, 0x14, 
	0x14, 0x1c, 0x0c, 0x0c, 0x04, 0x08, 0x01, 0x04, 
	0x20, 0x2f, 0x53, 0x53, 0x3f, 0x37, 0x37, 0x37, 
	0x37, 0x27, 0x27, 0x2f, 0x27, 0x27, 0x27, 0x27, 
	0x27, 0x27, 0x20, 0x18, 0x14, 0x14, 0x14, 0x14, 
	0x1c, 0x14, 0x14, 0x0c, 0x08, 0x08, 0x04, 0x08, 
	0x2f, 0x3c, 0x53, 0x3c, 0x37, 0x2f, 0x2f, 0x2f, 
	0x27, 0x27, 0x27, 0x27, 0x20, 0x20, 0x27, 0x27, 
	0x27, 0x20, 0x20, 0x20, 0x14, 0x1c, 0x1c, 0x1c, 
	0x1c, 0x13, 0x14, 0x1c, 0x08, 0x0a, 0x15, 0x14, 
	0x24, 0x37, 0x36, 0x32, 0x1e, 0x1d, 0x1c, 0x1c, 
	0x27, 0x27, 0x20, 0x20, 0x24, 0x2c, 0x2c, 0x24, 
	0x24, 0x20, 0x18, 0x18, 0x18, 0x18, 0x18, 0x17, 
	0x16, 0x1c, 0x22, 0x19, 0x1a, 0x17, 0x11, 0x19, 
	0x37, 0x36, 0x26, 0x27, 0x27, 0x20, 0x1e, 0x32, 
	0x20, 0x20, 0x20, 0x20, 0x24, 0x34, 0x24, 0x24, 
	0x24, 0x24, 0x24, 0x20, 0x18, 0x18, 0x20, 0x1f, 
	0x1b, 0x14, 0x16, 0x16, 0x14, 0x1a, 0x12, 0x18, 
	0x24, 0x22, 0x2d, 0x27, 0x20, 0x20, 0x20, 0x20, 
	0x18, 0x20, 0x20, 0x20, 0x2c, 0x34, 0x2c, 0x24, 
	0x24, 0x24, 0x24, 0x20, 0x20, 0x20, 0x20, 0x22, 
	0x1c, 0x14, 0x15, 0x19, 0x15, 0x16, 0x17, 0x15, 
	0x24, 0x27, 0x2f, 0x2d, 0x1f, 0x20, 0x20, 0x2d, 
	0x27, 0x20, 0x20, 0x27, 0x34, 0x2c, 0x2c, 0x2c, 
	0x34, 0x20, 0x24, 0x20, 0x20, 0x20, 0x27, 0x27, 
	0x1a, 0x15, 0x16, 0x18, 0x14, 0x1a, 0x14, 0x17, 
	0x3b, 0x34, 0x42, 0x31, 0x27, 0x23, 0x28, 0x31, 
	0x2c, 0x1c, 0x1c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 
	0x24, 0x24, 0x19, 0x19, 0x1c, 0x14, 0x1c, 0x2c, 
	0x1c, 0x19, 0x0f, 0x11, 0x12, 0x19, 0x14, 0x14, 
	0x31, 0x35, 0x36, 0x32, 0x1d, 0x1c, 0x1d, 0x28, 
	0x1c, 0x2c, 0x1c, 0x2c, 0x2c, 0x2c, 0x2c, 0x2c, 
	0x24, 0x24, 0x19, 0x19, 0x0d, 0x1c, 0x14, 0x1b, 
	0x1d, 0x14, 0x14, 0x12, 0x18, 0x19, 0x14, 0x17, 
	0x39, 0x34, 0x26, 0x27, 0x27, 0x1f, 0x1b, 0x16, 
	0x1c, 0x14, 0x1c, 0x1c, 0x2c, 0x2c, 0x2c, 0x2c, 
	0x24, 0x19, 0x24, 0x14, 0x14, 0x1c, 0x1c, 0x1c, 
	0x17, 0x12, 0x11, 0x18, 0x15, 0x16, 0x10, 0x1a, 
	0x3c, 0x15, 0x26, 0x22, 0x1a, 0x16, 0x0f, 0x08, 
	0x14, 0x0c, 0x0c, 0x0c, 0x08, 0x08, 0x08, 0x08, 
	0x11, 0x11, 0x14, 0x11, 0x0d, 0x0d, 0x0d, 0x14, 
	0x23, 0x21, 0x23, 0x21, 0x17, 0x19, 0x1c, 0x1c, 
	
};

Vtx toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_cull[8] = {
	{{{-222, -150, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-222, 209, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-222, 209, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-222, -150, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, -150, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, 209, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, 209, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, -150, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_0[112] = {
	{{{0, -82, -128},0, {496, 215},{0xB3, 0xBF, 0xB3, 0xFF}}},
	{{{-100, 6, -101},0, {-16, 496},{0xB3, 0xBF, 0xB3, 0xFF}}},
	{{{-23, 7, -179},0, {496, 496},{0xB3, 0xBF, 0xB3, 0xFF}}},
	{{{-100, 2, -26},0, {630, 496},{0x88, 0xE5, 0xE2, 0xFF}}},
	{{{-100, 1, 0},0, {496, 496},{0x88, 0xE5, 0xE2, 0xFF}}},
	{{{-150, 137, 0},0, {496, 1008},{0x88, 0xE5, 0xE2, 0xFF}}},
	{{{-132, 99, -32},0, {622, 823},{0x88, 0xE5, 0xE2, 0xFF}}},
	{{{-110, 156, -55},0, {617, 1008},{0x88, 0xE5, 0xE2, 0xFF}}},
	{{{27, 2, -89},0, {624, 496},{0xFE, 0xCB, 0x8D, 0xFF}}},
	{{{2, 1, -85},0, {496, 496},{0xFE, 0xCB, 0x8D, 0xFF}}},
	{{{0, 113, -150},0, {496, 1008},{0xFE, 0xCB, 0x8D, 0xFF}}},
	{{{104, 4, -101},0, {1008, 496},{0xFE, 0xCB, 0x8D, 0xFF}}},
	{{{161, 154, -159},0, {1008, 1008},{0xFE, 0xCB, 0x8D, 0xFF}}},
	{{{93, 1, 0},0, {496, 496},{0xD5, 0x93, 0xCF, 0xFF}}},
	{{{193, -28, 8},0, {496, 805},{0xD5, 0x93, 0xCF, 0xFF}}},
	{{{195, -51, 26},0, {611, 805},{0xD5, 0x93, 0xCF, 0xFF}}},
	{{{95, 2, 26},0, {627, 496},{0xD5, 0x93, 0xCF, 0xFF}}},
	{{{80, 4, 102},0, {104, 496},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{104, 5, 102},0, {-16, 496},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{132, 99, 131},0, {-16, 804},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{2, 1, 102},0, {496, 496},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{0, 137, 150},0, {496, 1008},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{150, 161, 150},0, {-16, 1008},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{1, 84, 132},0, {496, 810},{0x4, 0xD8, 0x79, 0xFF}}},
	{{{2, 1, -85},0, {496, 496},{0xFD, 0xCE, 0x8B, 0xFF}}},
	{{{-100, 6, -101},0, {-16, 496},{0xFD, 0xCE, 0x8B, 0xFF}}},
	{{{-131, 104, -132},0, {-16, 815},{0xFD, 0xCE, 0x8B, 0xFF}}},
	{{{0, 113, -150},0, {496, 1008},{0xFD, 0xCE, 0x8B, 0xFF}}},
	{{{-150, 163, -150},0, {-16, 1008},{0xFD, 0xCE, 0x8B, 0xFF}}},
	{{{93, 1, 0},0, {496, 496},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{104, 4, -101},0, {-16, 496},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{161, 154, -159},0, {-16, 1008},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{161, 154, -159},0, {-16, 1008},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{127, 75, 0},0, {496, 805},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{93, 1, 0},0, {496, 496},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{150, 111, 0},0, {496, 1008},{0x74, 0xCD, 0x1, 0xFF}}},
	{{{-100, 1, 0},0, {496, 496},{0x88, 0xD8, 0xA, 0xFF}}},
	{{{-100, 13, 102},0, {-16, 496},{0x88, 0xD8, 0xA, 0xFF}}},
	{{{-136, 139, 138},0, {-16, 826},{0x88, 0xD8, 0xA, 0xFF}}},
	{{{-150, 137, 0},0, {496, 1008},{0x88, 0xD8, 0xA, 0xFF}}},
	{{{-156, 209, 158},0, {-16, 1008},{0x88, 0xD8, 0xA, 0xFF}}},
	{{{-150, -150, 150},0, {-16, -16},{0x87, 0x26, 0xFF, 0xFF}}},
	{{{-100, 13, 102},0, {-16, 496},{0x87, 0x26, 0xFF, 0xFF}}},
	{{{-100, 1, 0},0, {496, 496},{0x87, 0x26, 0xFF, 0xFF}}},
	{{{-150, -150, 0},0, {496, -16},{0x87, 0x26, 0xFF, 0xFF}}},
	{{{150, -150, -150},0, {-16, -16},{0x78, 0x28, 0x5, 0xFF}}},
	{{{104, 4, -101},0, {-16, 496},{0x78, 0x28, 0x5, 0xFF}}},
	{{{93, 1, 0},0, {496, 496},{0x78, 0x28, 0x5, 0xFF}}},
	{{{150, -150, 0},0, {496, -16},{0x78, 0x28, 0x5, 0xFF}}},
	{{{-150, -150, -150},0, {-16, -16},{0x0, 0x26, 0x87, 0xFF}}},
	{{{-100, 6, -101},0, {-16, 496},{0x0, 0x26, 0x87, 0xFF}}},
	{{{0, -82, -128},0, {496, 215},{0x0, 0x26, 0x87, 0xFF}}},
	{{{0, -150, -150},0, {496, -16},{0x0, 0x26, 0x87, 0xFF}}},
	{{{150, -150, 150},0, {-16, -16},{0x6, 0x1F, 0x7B, 0xFF}}},
	{{{104, 5, 102},0, {-16, 496},{0x6, 0x1F, 0x7B, 0xFF}}},
	{{{80, 4, 102},0, {104, 496},{0x6, 0x1F, 0x7B, 0xFF}}},
	{{{104, -74, 135},0, {99, 237},{0x6, 0x1F, 0x7B, 0xFF}}},
	{{{0, -150, 150},0, {496, -16},{0x6, 0x1F, 0x7B, 0xFF}}},
	{{{0, -84, 137},0, {496, 207},{0x6, 0x1F, 0x7B, 0xFF}}},
	{{{-150, -150, 150},0, {1008, -16},{0xFF, 0x24, 0x7A, 0xFF}}},
	{{{0, -150, 150},0, {496, -16},{0xFF, 0x24, 0x7A, 0xFF}}},
	{{{0, -84, 137},0, {496, 207},{0xFF, 0x24, 0x7A, 0xFF}}},
	{{{-100, 13, 102},0, {1008, 496},{0xFF, 0x24, 0x7A, 0xFF}}},
	{{{2, 1, 102},0, {496, 496},{0xFF, 0x24, 0x7A, 0xFF}}},
	{{{150, -150, 0},0, {496, -16},{0x78, 0x28, 0xFB, 0xFF}}},
	{{{93, 1, 0},0, {496, 496},{0x78, 0x28, 0xFB, 0xFF}}},
	{{{104, 5, 102},0, {1008, 496},{0x78, 0x28, 0xFB, 0xFF}}},
	{{{150, -150, 150},0, {1008, -16},{0x78, 0x28, 0xFB, 0xFF}}},
	{{{150, -150, -150},0, {1008, -16},{0xFE, 0x29, 0x88, 0xFF}}},
	{{{0, -150, -150},0, {496, -16},{0xFE, 0x29, 0x88, 0xFF}}},
	{{{0, -82, -128},0, {496, 215},{0xFE, 0x29, 0x88, 0xFF}}},
	{{{28, -81, -132},0, {602, 215},{0xFE, 0x29, 0x88, 0xFF}}},
	{{{104, 4, -101},0, {1008, 496},{0xFE, 0x29, 0x88, 0xFF}}},
	{{{27, 2, -89},0, {624, 496},{0xFE, 0x29, 0x88, 0xFF}}},
	{{{-150, -150, 0},0, {496, -16},{0x87, 0x27, 0x0, 0xFF}}},
	{{{-100, 1, 0},0, {496, 496},{0x87, 0x27, 0x0, 0xFF}}},
	{{{-100, 2, -26},0, {630, 496},{0x87, 0x27, 0x0, 0xFF}}},
	{{{-150, -150, -40},0, {634, -16},{0x87, 0x27, 0x0, 0xFF}}},
	{{{-100, 6, -101},0, {1008, 496},{0x87, 0x27, 0x0, 0xFF}}},
	{{{-150, -150, -150},0, {1008, -16},{0x87, 0x27, 0x0, 0xFF}}},
	{{{-9, -67, 193},0, {496, 352},{0x15, 0x8E, 0xCC, 0xFF}}},
	{{{87, -48, 193},0, {102, 367},{0x15, 0x8E, 0xCC, 0xFF}}},
	{{{84, -76, 250},0, {104, 496},{0x15, 0x8E, 0xCC, 0xFF}}},
	{{{-6, -91, 250},0, {496, 496},{0x15, 0x8E, 0xCC, 0xFF}}},
	{{{0, -84, 137},0, {496, 207},{0x11, 0x8B, 0x2F, 0xFF}}},
	{{{104, -74, 135},0, {99, 237},{0x11, 0x8B, 0x2F, 0xFF}}},
	{{{87, -48, 193},0, {102, 367},{0x11, 0x8B, 0x2F, 0xFF}}},
	{{{-9, -67, 193},0, {496, 352},{0x11, 0x8B, 0x2F, 0xFF}}},
	{{{132, 99, 131},0, {1008, 804},{0x74, 0xCD, 0xB, 0xFF}}},
	{{{127, 75, 0},0, {496, 805},{0x74, 0xCD, 0xB, 0xFF}}},
	{{{150, 111, 0},0, {496, 1008},{0x74, 0xCD, 0xB, 0xFF}}},
	{{{150, 161, 150},0, {1008, 1008},{0x74, 0xCD, 0xB, 0xFF}}},
	{{{95, 2, 26},0, {627, 496},{0x45, 0x96, 0x8, 0xFF}}},
	{{{188, 55, 27},0, {611, 805},{0x45, 0x96, 0x8, 0xFF}}},
	{{{192, 73, 129},0, {1008, 804},{0x45, 0x96, 0x8, 0xFF}}},
	{{{104, 5, 102},0, {1008, 496},{0x45, 0x96, 0x8, 0xFF}}},
	{{{-131, 104, -132},0, {1008, 815},{0x84, 0xC, 0x19, 0xFF}}},
	{{{-132, 99, -32},0, {622, 823},{0x84, 0xC, 0x19, 0xFF}}},
	{{{-110, 156, -55},0, {617, 1008},{0x84, 0xC, 0x19, 0xFF}}},
	{{{-150, 163, -150},0, {1008, 1008},{0x84, 0xC, 0x19, 0xFF}}},
	{{{-222, 96, -36},0, {630, 496},{0xFC, 0x7F, 0x5, 0xFF}}},
	{{{-132, 99, -32},0, {622, 823},{0xFC, 0x7F, 0x5, 0xFF}}},
	{{{-132, 100, -63},0, {743, 821},{0xFC, 0x7F, 0x5, 0xFF}}},
	{{{-222, 97, -61},0, {758, 496},{0xFC, 0x7F, 0x5, 0xFF}}},
	{{{-173, 18, -50},0, {758, 496},{0x8E, 0x39, 0x2, 0xFF}}},
	{{{-132, 100, -63},0, {743, 821},{0x8E, 0x39, 0x2, 0xFF}}},
	{{{-131, 104, -132},0, {1008, 815},{0x8E, 0x39, 0x2, 0xFF}}},
	{{{-173, 20, -100},0, {1008, 496},{0x8E, 0x39, 0x2, 0xFF}}},
	{{{-136, 139, 138},0, {1008, 826},{0xF5, 0xD9, 0x78, 0xFF}}},
	{{{1, 84, 132},0, {496, 810},{0xF5, 0xD9, 0x78, 0xFF}}},
	{{{0, 137, 150},0, {496, 1008},{0xF5, 0xD9, 0x78, 0xFF}}},
	{{{-156, 209, 158},0, {1008, 1008},{0xF5, 0xD9, 0x78, 0xFF}}},
};

Gfx toad_cage_4_geo_Cube_037_mesh_layer_4_tri_0[] = {
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(5, 6, 3, 0, 5, 7, 6, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
	gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
	gsSP2Triangles(20, 17, 19, 0, 19, 21, 20, 0),
	gsSP2Triangles(19, 22, 21, 0, 21, 23, 20, 0),
	gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
	gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_0 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
	gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
	gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
	gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
	gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
	gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
	gsSP2Triangles(24, 26, 25, 0, 27, 28, 29, 0),
	gsSP2Triangles(29, 30, 27, 0, 29, 31, 30, 0),
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_0 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(7, 8, 4, 0, 7, 9, 8, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
	gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_0 + 96, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSPEndDisplayList(),
};

Vtx toad_cage_4_geo_Cube_037_mesh_layer_1_vtx_cull[8] = {
	{{{-222, -150, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-222, 209, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-222, 209, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-222, -150, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, -150, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, 209, 250},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, 209, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{195, -150, -179},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx toad_cage_4_geo_Cube_037_mesh_layer_1_vtx_0[21] = {
	{{{0, 88, 0},0, {496, 496},{0x2B, 0x70, 0xD5, 0xFF}}},
	{{{-150, 137, 0},0, {1008, 496},{0x2B, 0x70, 0xD5, 0xFF}}},
	{{{-156, 209, 158},0, {1008, -16},{0x2B, 0x70, 0xD5, 0xFF}}},
	{{{0, 137, 150},0, {496, -16},{0x2B, 0x70, 0xD5, 0xFF}}},
	{{{-150, -103, -150},0, {-16, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, -103, -150},0, {1008, 1008},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, -103, 150},0, {1008, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{-150, -103, 150},0, {-16, -16},{0x0, 0x81, 0x0, 0xFF}}},
	{{{150, 111, 0},0, {-16, 496},{0xEE, 0x78, 0xD9, 0xFF}}},
	{{{0, 88, 0},0, {496, 496},{0xEE, 0x78, 0xD9, 0xFF}}},
	{{{0, 137, 150},0, {496, -16},{0xEE, 0x78, 0xD9, 0xFF}}},
	{{{150, 161, 150},0, {-16, -16},{0xEE, 0x78, 0xD9, 0xFF}}},
	{{{161, 154, -159},0, {-16, 1008},{0xE8, 0x7A, 0x1A, 0xFF}}},
	{{{0, 113, -150},0, {496, 1008},{0xE8, 0x7A, 0x1A, 0xFF}}},
	{{{0, 88, 0},0, {496, 496},{0xE8, 0x7A, 0x1A, 0xFF}}},
	{{{150, 111, 0},0, {-16, 496},{0xE8, 0x7A, 0x1A, 0xFF}}},
	{{{0, 88, 0},0, {496, 496},{0x30, 0x74, 0x13, 0xFF}}},
	{{{0, 113, -150},0, {496, 1008},{0x30, 0x74, 0x13, 0xFF}}},
	{{{-150, 163, -150},0, {1008, 1008},{0x30, 0x74, 0x13, 0xFF}}},
	{{{-110, 156, -55},0, {1008, 617},{0x30, 0x74, 0x13, 0xFF}}},
	{{{-150, 137, 0},0, {1008, 496},{0x30, 0x74, 0x13, 0xFF}}},
};

Gfx toad_cage_4_geo_Cube_037_mesh_layer_1_tri_0[] = {
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_1_vtx_0 + 0, 21, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
	gsSP1Triangle(19, 20, 16, 0),
	gsSPEndDisplayList(),
};


Gfx mat_toad_cage_4_geo_cage_side[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_RGBA16),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, toad_cage_4_geo_side_ci8_pal_rgba16),
	gsDPTileSync(),
	gsDPSetTile(0, 0, 0, 256, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadSync(),
	gsDPLoadTLUTCmd(7, 25),
	gsDPPipeSync(),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 1, toad_cage_4_geo_side_ci8),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(toad_cage_4_geo_cage_side_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_toad_cage_4_geo_cage_side[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsDPSetTextureLUT(G_TT_NONE),
	gsSPEndDisplayList(),
};

Gfx mat_toad_cage_4_geo_cage_top[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPClearGeometryMode(G_CULL_BACK),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 1, toad_cage_4_geo_top_i8),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPSetLights1(toad_cage_4_geo_cage_top_lights),
	gsSPEndDisplayList(),
};

Gfx mat_revert_toad_cage_4_geo_cage_top[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx toad_cage_4_geo_Cube_037_mesh_layer_4[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_4_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_toad_cage_4_geo_cage_side),
	gsSPDisplayList(toad_cage_4_geo_Cube_037_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_toad_cage_4_geo_cage_side),
	gsSPEndDisplayList(),
};

Gfx toad_cage_4_geo_Cube_037_mesh_layer_1[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(toad_cage_4_geo_Cube_037_mesh_layer_1_vtx_cull + 0, 8, 0),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_toad_cage_4_geo_cage_top),
	gsSPDisplayList(toad_cage_4_geo_Cube_037_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_revert_toad_cage_4_geo_cage_top),
	gsSPEndDisplayList(),
};

Gfx toad_cage_4_geo_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

static const s16 dog_anim_laser_values[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0xFFFF, 0x1000, 0xFFFF, 0xFFFF, 0xDFFF, 0x0000, 0xFFFF, 0x1555, 
	0x0000, 0x0000, 0xEFFF, 0xFFFF, 0x0000, 0x2000, 0x0000, 0x0000, 0xEAAA, 
	0x0000, 0xFFFF, 0x1000, 0xFFFF, 0xFFFF, 0xDFFF, 0x0000, 0xFFFF, 0x1555, 
	0x0000, 0x0000, 0xEFFF, 0xFFFF, 0x0000, 0x2000, 0x0000, 0x0000, 0xEAAA, 
	0xFF1F, 0xFCBB, 0xF92A, 0xF4CA, 0xEFFF, 0xEB34, 0xE6D4, 0xE344, 0xE0DF, 
	0xDFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 
	0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF, 0x0000, 0x0000, 0xFFFF, 0x0000, 0x0000, 
	0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 
	0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFFF, 0x0000, 
	0x0000, 0xFFFF, 0x0000, 0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0x0000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xFFFF, 0x0225, 0x0856, 0x1271, 0x2017, 0x3000, 0x3FE9, 0x4D8F, 0x57A9, 
	0x5DDB, 0x6000, 0xFFFF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0xFFFF, 0xFFFF, 0x0000, 0x0000, 
};

static const u16 dog_anim_laser_indices[] = {
	0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0003, 0x0001, 
	0x0004, 0x0001, 0x0005, 0x0001, 0x0006, 0x0001, 0x0007, 0x0001, 0x0008, 
	0x0001, 0x0009, 0x0001, 0x000A, 0x0001, 0x000B, 0x0001, 0x000C, 0x0001, 
	0x000D, 0x0001, 0x000E, 0x0001, 0x000F, 0x0001, 0x0010, 0x0001, 0x0011, 
	0x0001, 0x0012, 0x0001, 0x0013, 0x0001, 0x0014, 0x0001, 0x0015, 0x0001, 
	0x0016, 0x0001, 0x0017, 0x0001, 0x0018, 0x0001, 0x0019, 0x0001, 0x001A, 
	0x0001, 0x001B, 0x0001, 0x001C, 0x0001, 0x001D, 0x0001, 0x001E, 0x0001, 
	0x001F, 0x0001, 0x0020, 0x0001, 0x0021, 0x0001, 0x0022, 0x0001, 0x0023, 
	0x0001, 0x0024, 0x0001, 0x0025, 0x0001, 0x0026, 0x0001, 0x0027, 0x0001, 
	0x0028, 0x0001, 0x0029, 0x0001, 0x002A, 0x0001, 0x002B, 0x0001, 0x002C, 
	0x000A, 0x002D, 0x0008, 0x0037, 0x0006, 0x003F, 0x000A, 0x0045, 0x000A, 
	0x004F, 0x000A, 0x0059, 0x0003, 0x0063, 0x000A, 0x0066, 0x0006, 0x0070, 
	0x000A, 0x0076, 0x0001, 0x0080, 0x0007, 0x0081, 0x0001, 0x0088, 0x0001, 
	0x0089, 0x0001, 0x008A, 
};

static const struct Animation dog_anim_laser = {
	1,
	0,
	0,
	1,
	10,
	ANIMINDEX_NUMPARTS(dog_anim_laser_indices),
	dog_anim_laser_values,
	dog_anim_laser_indices,
	0,
};

#pragma once

namespace lgl {
	enum Type {
		BYTE = 0x1400,
		UNSIGNED_BYTE = 0x1401,
		SHORT = 0x1402,
		UNSIGNED_SHORT = 0x1403,
		INT = 0x1404,
		UNSIGNED_INT = 0x1405,
		FLOAT = 0x1406,
		FIXED = 0x140C,

		UNSIGNED_INT_24_8 = 0x84FA,
	};

	enum Format {
		RGB = 0x1907,
		RGBA = 0x1908,

		RGBA32F = 0x8814,
		RGB32F = 0x8815,
		RGBA16F = 0x881A,
		RGB16F = 0x881B,
		
		DEPTH_STENCIL = 0x84F9,
		DEPTH24_STENCIL8 = 0x88F0,
	};

	enum Primitive {
		POINT = 0x0000,
		LINE = 0x0001,
		TRIANGLE = 0x0004,
		LINE_STRIP = 0x0003,
		TRIANGLE_FAN = 0x0006,
		TRIANGLE_STRIP = 0x0005,
	};

	enum TextureFilteringMode {
		FilterMode_None = 0,
		FilterMode_LINEAR = 0x2601,
		FilterMode_NEAREST = 0x2600,
	};

	enum TextureWrapMode {
		WrapMode_None = 0,
		WrapMode_CLAMP_TO_EDGE = 0x812F,
		WrapMode_CLAMP_TO_BORDER = 0x812D,
		WrapMode_MIRRORED_REPEAT = 0x8370,
		WrapMode_REPEAT = 0x2901,
		WrapMode_MIRROR_CLAMP_TO_EDGE = 0x8743,
	};

	enum TextureMode {
		TEXTURE_1D = 0x0DE0,
		TEXTURE_2D = 0x0DE1,
		TEXTURE_3D = 0x806F,
		TEXTURE_1D_ARRAY = 0x8C18,
		TEXTURE_2D_ARRAY = 0x8C1A,
		TEXTURE_RECTANGLE = 0x84F5,
		TEXTURE_CUBE_MAP = 0x8513,
		// TEXTURE_CUBE_MAP_ARRAY,
		TEXTURE_BUFFER = 0x8C2A,
		TEXTURE_2D_MULTISAMPLE = 0x9100,
		TEXTURE_2D_MULTISAMPLE_ARRAY = 0x9102,
	};

	enum Attachment {
		COLOR_ATTACHMENT0 = 0x8CE0,
		COLOR_ATTACHMENT1 = 0x8CE1,
		COLOR_ATTACHMENT2 = 0x8CE2,
		COLOR_ATTACHMENT3 = 0x8CE3,
		COLOR_ATTACHMENT4 = 0x8CE4,
		COLOR_ATTACHMENT5 = 0x8CE5,
		COLOR_ATTACHMENT6 = 0x8CE6,
		COLOR_ATTACHMENT7 = 0x8CE7,
		COLOR_ATTACHMENT8 = 0x8CE8,
		COLOR_ATTACHMENT9 = 0x8CE9,
		COLOR_ATTACHMENT10 = 0x8CEA,
		COLOR_ATTACHMENT11 = 0x8CEB,
		COLOR_ATTACHMENT12 = 0x8CEC,
		COLOR_ATTACHMENT13 = 0x8CED,
		COLOR_ATTACHMENT14 = 0x8CEE,
		COLOR_ATTACHMENT15 = 0x8CEF,
		COLOR_ATTACHMENT16 = 0x8CF0,
		COLOR_ATTACHMENT17 = 0x8CF1,
		COLOR_ATTACHMENT18 = 0x8CF2,
		COLOR_ATTACHMENT19 = 0x8CF3,
		COLOR_ATTACHMENT20 = 0x8CF4,
		COLOR_ATTACHMENT21 = 0x8CF5,
		COLOR_ATTACHMENT22 = 0x8CF6,
		COLOR_ATTACHMENT23 = 0x8CF7,
		COLOR_ATTACHMENT24 = 0x8CF8,
		COLOR_ATTACHMENT25 = 0x8CF9,
		COLOR_ATTACHMENT26 = 0x8CFA,
		COLOR_ATTACHMENT27 = 0x8CFB,
		COLOR_ATTACHMENT28 = 0x8CFC,
		COLOR_ATTACHMENT29 = 0x8CFD,
		COLOR_ATTACHMENT30 = 0x8CFE,
		COLOR_ATTACHMENT31 = 0x8CFF,
		DEPTH_ATTACHMENT = 0x8D00,
		STENCIL_ATTACHMENT = 0x8D20,
		DEPTH_STENCIL_ATTACHMENT = 0x821A,
	};

	enum BufferBitFlags {
		COLOR_BUFFER_BIT = 0x00004000,
		DEPTH_BUFFER_BIT = 0x00000100,
		STENCIL_BUFFER_BIT = 0x00000400,
	};

	void CheckValues();
}
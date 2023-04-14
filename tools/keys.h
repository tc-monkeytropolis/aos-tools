/*
 * Written by EiNSTeiN_
 * 		http://archos.g3nius.org/
 * Enhanced by scholbert
 * Released under the GNU General Public License v2
 * http://www.gnu.org/licenses/old-licenses/gpl-2.0.html
*/

#ifndef __KEYS_H
#define __KEYS_H

/* Archos 5 and Archos 7 Internet Media Tablet */

static unsigned char A5_AES[] = {
	0xa3, 0x8a, 0x83, 0xaa, 0xef, 0x10, 0x48, 0x5e, 0x98, 0x71, // AES
	0x11, 0x60, 0xc2, 0x49, 0x6f, 0x1e
};

static unsigned char A5_BOOTLOADER[] = {
	0xAF, 0x4E, 0x44, 0xF3, 0x30, 0x0F, 0x74, 0xA3, 0x4D, 0x1A,	// bootloader
	0xD6, 0x84, 0xD7, 0x70, 0x27, 0x13, 0xB4, 0xB0, 0x75, 0xF8,
	0x42, 0xC2, 0xAD, 0x5C, 0xBF, 0x21, 0x50, 0xE8, 0xCC, 0x7A,
	0x19, 0x93, 0x7B, 0xBC, 0xF8, 0x54, 0x15, 0x60, 0xAD, 0x33,
	0xCA, 0x9F, 0xED, 0xF0, 0xC6, 0xBA, 0x46, 0xE5, 0x71, 0x2E,
	0xC7, 0x87, 0x8F, 0x58, 0x3C, 0x3B, 0xF5, 0x38, 0x97, 0x77,
	0x47, 0x49, 0x60, 0x99, 0x11, 0x16, 0x02, 0x94, 0x90, 0x00,
	0x6A, 0x98, 0xC6, 0xE8, 0xCD, 0x66, 0x75, 0x5C, 0x1E, 0x4F,
	0xC9, 0x9B, 0x49, 0x94, 0x8F, 0x7A, 0x66, 0x6D, 0xCA, 0x5A,
	0x0D, 0x6F, 0xB2, 0x01, 0xB2, 0x90, 0x36, 0xBF, 0x08, 0x9F,
	0x03, 0x4F, 0x38, 0x54, 0x82, 0x4D, 0xE3, 0x32, 0xB4, 0xC5,
	0xB7, 0x30, 0x6A, 0xF5, 0x4F, 0xB7, 0xDE, 0xAD, 0x90, 0x61,
	0x1A, 0xB6, 0xD5, 0x43, 0xC6, 0x24, 0xB0, 0xAD
};

static unsigned char A5_RELMPK[] = {
	0x3d, 0x85, 0x84, 0x68, 0x90, 0x55, 0xe9, 0xc8, 0x6c, 0x1d, // RelMPK
	0x43, 0x2f, 0xe0, 0x72, 0x01, 0x82, 0x51, 0xb4, 0x12, 0x3d,
	0x12, 0x67, 0x64, 0xe2, 0xac, 0xe0, 0x7d, 0x3e, 0x98, 0xba,
	0x6d, 0xbb, 0x0f, 0x38, 0x25, 0x68, 0xe4, 0xef, 0x81, 0x6b,
	0xb5, 0x01, 0x59, 0x61, 0x4c, 0xfc, 0xf9, 0x20, 0xe5, 0x77,
	0x35, 0xb0, 0x3f, 0x89, 0x81, 0x11, 0xab, 0x99, 0xb7, 0x05,
	0x03, 0x1f, 0x48, 0x28, 0xb6, 0x5f, 0x12, 0xcd, 0xc6, 0x3b,
	0xe4, 0xc1, 0x76, 0x40, 0x33, 0x82, 0xd3, 0x6e, 0x6f, 0xd9,
	0xae, 0xbc, 0xac, 0xc1, 0x05, 0xaa, 0x39, 0x51, 0xdb, 0x1e,
	0x5d, 0x3a, 0xf3, 0xc1, 0x64, 0xf2, 0xf7, 0xbe, 0x80, 0x7b,
	0xea, 0xd0, 0xd1, 0x17, 0xf8, 0x70, 0x2e, 0x5e, 0xd5, 0xe8,
	0x53, 0x41, 0x2c, 0x6b, 0xa3, 0x0d, 0x63, 0x2a, 0x61, 0xc3,
	0x7c, 0xe2, 0x54, 0x2c, 0x6c, 0x52, 0x2d, 0xbd
};

static unsigned char A5_DEVMPK[] = {
	0x85, 0x24, 0x81, 0x72, 0xe0, 0x6f, 0x36, 0x6a, 0x1e, 0xa5, // DevMPK
	0x5a, 0x92, 0x81, 0x4d, 0x9a, 0xdf, 0x3b, 0x22, 0xce, 0x44,
	0xd5, 0x39, 0xd4, 0x9f, 0x7f, 0x0e, 0x86, 0xba, 0x02, 0xe5,
	0xb7, 0xd3, 0x38, 0x40, 0x6a, 0x91, 0x8c, 0x88, 0xe1, 0x90,
	0xeb, 0x72, 0xa9, 0x1d, 0x90, 0x67, 0x60, 0xbf, 0x50, 0x72,
	0xf6, 0x02, 0x48, 0x80, 0x01, 0x87, 0x1e, 0x93, 0x61, 0x52,
	0x02, 0xd8, 0x9e, 0xe7, 0x12, 0x46, 0x72, 0x89, 0xa1, 0xe8,
	0x10, 0x2e, 0x76, 0xc4, 0xf2, 0xdc, 0xf6, 0x2e, 0x6d, 0x8c,
	0x46, 0x3a, 0x77, 0xa7, 0xb4, 0x5c, 0x00, 0x35, 0x2a, 0xac,
	0xd6, 0xb3, 0xbb, 0x2a, 0x4c, 0x12, 0x95, 0x29, 0xc2, 0x27,
	0x4a, 0xa6, 0xfa, 0xf7, 0x8e, 0x53, 0x0a, 0xc8, 0xbf, 0x95,
	0x51, 0x1f, 0xbb, 0x9d, 0x27, 0x21, 0x05, 0x8f, 0x82, 0xbc,
	0x1b, 0x0c, 0x71, 0xb7, 0x5f, 0x79, 0x8c, 0xa8
};

static unsigned char A5_PLUGMPK[] = {
	0x69, 0x6b, 0xea, 0x98, 0xb4, 0xc3, 0xb8, 0x98, 0x81, 0x32, // PlugMPK
	0x2b, 0x87, 0x68, 0x9d, 0xa1, 0x1b, 0x48, 0xf3, 0xa5, 0xa0,
	0xd4, 0xbb, 0x85, 0x52, 0x49, 0xd7, 0x64, 0xb0, 0xbb, 0x41,
	0x20, 0xce, 0xa0, 0x21, 0x85, 0xeb, 0x73, 0x05, 0x83, 0xf1,
	0x0a, 0x48, 0xb1, 0x06, 0x2d, 0x2b, 0xab, 0x66, 0x49, 0x36,
	0x68, 0xe6, 0xe2, 0xab, 0xaf, 0x60, 0xa7, 0x98, 0x56, 0xab,
	0x63, 0x46, 0x5b, 0x67, 0x54, 0xa8, 0xe1, 0xb7, 0x97, 0x87,
	0xf5, 0x28, 0xa9, 0x77, 0x62, 0x21, 0xfb, 0x00, 0xc0, 0x6f,
	0xf5, 0x61, 0xec, 0x13, 0x93, 0x8c, 0x3c, 0x4b, 0xcb, 0x4f,
	0x4b, 0x04, 0xd2, 0xe8, 0xfb, 0x53, 0x24, 0xe5, 0x91, 0x43,
	0x9d, 0xa9, 0xa1, 0x2c, 0x04, 0xba, 0x36, 0x27, 0xcb, 0x31,
	0x0a, 0x2a, 0x8f, 0x3d, 0xd4, 0x26, 0x11, 0xd5, 0x8d, 0x45,
	0x34, 0x60, 0xb4, 0xdc, 0x13, 0x3c, 0x0b, 0xac
};

static unsigned char A5_HDDMPK[] = {
	0xb5, 0x4a, 0x0e, 0xe6, 0x42, 0x6a, 0x68, 0x41, 0x17, 0x53, // HDDMPK
	0x70, 0xd2, 0x02, 0x86, 0xfb, 0xb3, 0x36, 0xdc, 0xaf, 0x5a,
	0xa3, 0x37, 0x0c, 0x57, 0xb9, 0x61, 0x70, 0x98, 0xe7, 0x6a,
	0x2c, 0x10, 0xb0, 0x2b, 0x66, 0x97, 0x45, 0x3e, 0x0c, 0xc5,
	0x38, 0x5d, 0x22, 0x7e, 0xe2, 0xa8, 0xe2, 0x81, 0xea, 0xfc,
	0x40, 0x38, 0xc9, 0x2d, 0x7d, 0xae, 0x78, 0xc1, 0x6b, 0x12,
	0x5b, 0xfd, 0x66, 0x77, 0x55, 0x3e, 0x45, 0xf3, 0x51, 0xfb,
	0x41, 0xd7, 0xd0, 0xa0, 0x42, 0x24, 0x6c, 0x7a, 0xe4, 0x91,
	0x55, 0x0e, 0x51, 0x14, 0x2b, 0x8a, 0x87, 0xc5, 0xe7, 0x57,
	0xf3, 0x0c, 0x5c, 0x8d, 0x21, 0xf0, 0xce, 0x4e, 0x98, 0xd5,
	0x3e, 0x1e, 0x17, 0x69, 0x45, 0x5f, 0x48, 0xee, 0xa3, 0x92,
	0x39, 0x0f, 0xbd, 0x80, 0x71, 0xe9, 0xad, 0x15, 0x15, 0x74,
	0xe9, 0xcd, 0xc3, 0x5c, 0x1a, 0x68, 0x99, 0xc6
};


static unsigned char A5_GAMESMPK[] = {
	0x61, 0xED, 0xB2, 0xCB, 0xD6, 0x90, 0x3F, 0xC6, 0xE9, 0x52, // GamesMPK
	0x8F, 0x88, 0xD9, 0x61, 0xC4, 0x8C, 0x69, 0x61, 0x35, 0x5C,
	0x28, 0xC1, 0xC6, 0xDA, 0x51, 0x78, 0x65, 0x43, 0x4C, 0x68,
	0x6D, 0xAB, 0x57, 0xF1, 0xC7, 0xC7, 0xC5, 0x48, 0xC9, 0x42,
	0xCC, 0x9C, 0x47, 0x54, 0x74, 0x35, 0x20, 0xD1, 0xE3, 0xB5,
	0xA6, 0x58, 0x97, 0x52, 0x6F, 0x13, 0x34, 0xEA, 0xAB, 0xC0,
	0x6C, 0xE4, 0x29, 0xC9, 0x2B, 0x7E, 0x81, 0x57, 0x30, 0x94,
	0xC2, 0x4C, 0xC3, 0x23, 0xCA, 0xC7, 0x85, 0xE6, 0xF3, 0xA0,
	0x50, 0x7C, 0x00, 0xC5, 0x0B, 0xEE, 0xD4, 0x98, 0x6D, 0x4E,
	0x2B, 0x52, 0x06, 0xBF, 0xB0, 0xFE, 0x8D, 0xA5, 0x87, 0xCF,
	0x19, 0x19, 0xF1, 0xA7, 0x3E, 0xF4, 0x21, 0x27, 0xA6, 0xE8,
	0x28, 0xA3, 0x19, 0x10, 0x1B, 0x89, 0xE7, 0x33, 0x7A, 0xA3,
	0x17, 0xF1, 0x72, 0x7C, 0x1D, 0x51, 0xCA, 0xED
};

/* Archos 3G+ from SFR */

 static unsigned char A3GP_AES[] = {
	0xb1, 0xcb, 0xed, 0x0b, 0x33, 0xcf, 0x00, 0xeb, 0x07, 0xa9, // AES key
	0x3d, 0xe8, 0x57, 0x79, 0xb8, 0x88
};

static unsigned char A3GP_BOOTLOADER[] = {
	0x6B, 0x82, 0xCC, 0x33, 0x29, 0x65, 0xAF, 0x0F, 0xD6, 0x5B, // bootloader
	0x18, 0x16, 0x6A, 0xD9, 0x52, 0x71, 0x1E, 0xA8, 0x2B, 0xE4,
	0x81, 0x40, 0x3E, 0xED, 0x3C, 0xE9, 0xFC, 0x0D, 0x0A, 0x6F,
	0x22, 0x1E, 0xAB, 0x2D, 0x92, 0x0B, 0x1B, 0xC3, 0xDB, 0xEF,
	0x02, 0x94, 0x74, 0x0B, 0xE5, 0x81, 0x52, 0xA5, 0x83, 0x56,
	0xC8, 0x25, 0xBA, 0xB4, 0x74, 0xEC, 0xC7, 0x41, 0x91, 0xDF,
	0x1C, 0x60, 0x2E, 0x51, 0x34, 0x3D, 0xD5, 0x28, 0xA3, 0xF3,
	0xB5, 0x06, 0x05, 0xD5, 0x81, 0x98, 0x26, 0x87, 0xA9, 0xE4,
	0xF8, 0x94, 0xE0, 0x7C, 0xBC, 0x18, 0xF2, 0x4A, 0xFA, 0xAB,
	0x94, 0x8C, 0x80, 0x61, 0x15, 0x99, 0x3F, 0x6F, 0x92, 0xD6,
	0x5C, 0x9E, 0xB5, 0x8D, 0xBA, 0x27, 0xAF, 0x41, 0xC4, 0x5A,
	0x69, 0x4E, 0xC5, 0xA1, 0x49, 0x53, 0x20, 0x1E, 0x79, 0x04,
	0xC3, 0x72, 0x1B, 0xB3, 0x6A, 0xD9, 0x15, 0xEF
};

static unsigned char A3GP_RELMPK[] = {
	0xCB, 0xD4, 0x51, 0x98, 0x92, 0x3C, 0xA1, 0x22, 0x6F, 0xCC, // RelMPK
	0xE6, 0x13, 0x49, 0xF8, 0x03, 0xAE, 0x7A, 0xBC, 0x07, 0x87,
	0xAB, 0x28, 0x48, 0x14, 0x2A, 0xC1, 0xD8, 0xAF, 0xD3, 0xB0,
	0xDC, 0x2D, 0x28, 0xE2, 0xCB, 0x9F, 0xBC, 0xD4, 0x55, 0xD2,
	0x5B, 0x51, 0xEA, 0x5C, 0xB7, 0xAC, 0xD2, 0xF8, 0x52, 0xDB,
	0x69, 0xC3, 0x06, 0x61, 0x92, 0x8A, 0x0A, 0x50, 0xE5, 0x17,
	0x57, 0x2E, 0x6E, 0xDF, 0xFE, 0x07, 0xAC, 0x37, 0x6F, 0x30,
	0xDE, 0xFA, 0xFD, 0xE2, 0xFB, 0xF8, 0xF7, 0x75, 0x07, 0x35,
	0xC6, 0x05, 0x9B, 0x33, 0x2E, 0x17, 0x88, 0x9B, 0x20, 0xFD,
	0x68, 0x12, 0x8F, 0x01, 0x77, 0xBD, 0x0F, 0x83, 0xC1, 0x1D,
	0x9E, 0x14, 0x7A, 0x59, 0xE2, 0xE6, 0x80, 0x0C, 0xF6, 0x07,
	0x83, 0xBC, 0xA6, 0x46, 0x2A, 0xC0, 0x54, 0xD6, 0x05, 0x99,
	0x41, 0xA6, 0x06, 0x73, 0xE4, 0x25, 0xAC, 0xAE
};

static unsigned char A3GP_DEVMPK[] = {
	0x6B, 0x8A, 0x00, 0xB6, 0xF2, 0x8F, 0x32, 0x8E, 0xE0, 0x68, // DevMPK
	0x9C, 0x74, 0xD7, 0x99, 0x82, 0x6B, 0x50, 0x40, 0x55, 0x3C,
	0x09, 0xE7, 0x81, 0x8D, 0xB2, 0x88, 0x55, 0xB7, 0x28, 0x96,
	0x68, 0x9C, 0xBD, 0xF1, 0xB5, 0x87, 0xE0, 0xB2, 0x7A, 0xC6,
	0x4B, 0xAC, 0x4F, 0x53, 0xD5, 0x4D, 0x30, 0xC1, 0x03, 0x37,
	0x62, 0xBB, 0x16, 0x8C, 0x7B, 0x28, 0x5A, 0x94, 0xD0, 0xB1,
	0xCD, 0x85, 0x13, 0x94, 0x13, 0x99, 0xC5, 0x85, 0xA4, 0xB2,
	0x3C, 0xD7, 0x86, 0x19, 0x99, 0x9A, 0x89, 0xB9, 0x08, 0x43,
	0x6D, 0x91, 0x1F, 0x61, 0x73, 0x69, 0x1B, 0x66, 0x99, 0xE2,
	0xB3, 0x1C, 0x8B, 0x56, 0x76, 0x55, 0x06, 0xD1, 0x47, 0x7F,
	0x66, 0xFC, 0xC5, 0xF4, 0x06, 0x7B, 0x3F, 0x67, 0xF4, 0xF4,
	0xD7, 0xC8, 0xE0, 0xA2, 0x2F, 0x68, 0x91, 0xCA, 0x99, 0x93,
	0xFC, 0x38, 0x32, 0x33, 0x51, 0x49, 0xE8, 0xB5
};

static unsigned char A3GP_PLUGMPK[] = {
	0xD1, 0x28, 0x7A, 0x8A, 0xC1, 0xBF, 0xCD, 0x00, 0x2E, 0x77,
	0x36, 0xD5, 0x18, 0x9D, 0xA9, 0xB4, 0xC1, 0xEB, 0x16, 0xC7,
	0x14, 0xD6, 0x17, 0xB8, 0xF6, 0xC3, 0x6E, 0xA6, 0x7B, 0x30,
	0x3E, 0x33, 0xD3, 0xAC, 0xB7, 0x41, 0xA3, 0x8F, 0xB7, 0xB2,
	0x2E, 0xD6, 0x3C, 0x08, 0x1F, 0x9C, 0xD6, 0x98, 0x15, 0xF4,
	0x49, 0xB3, 0xE5, 0xC2, 0x67, 0xCA, 0xAE, 0xA3, 0x4C, 0xD7,
	0x6F, 0xE5, 0xB7, 0x5E, 0x60, 0x79, 0xAE, 0x26, 0xAA, 0x2C,
	0xC4, 0x1A, 0x6C, 0x84, 0x04, 0xF5, 0x60, 0xAF, 0xE1, 0xAB,
	0x02, 0xCE, 0xF7, 0x7E, 0xD2, 0xC5, 0xD0, 0xB1, 0x57, 0x43,
	0xDD, 0x5A, 0x7E, 0x4A, 0x90, 0x08, 0xD9, 0xB4, 0xCF, 0xFF,
	0x8B, 0xB5, 0xA0, 0x6C, 0xD5, 0x9A, 0x15, 0xB2, 0x0D, 0x04,
	0x24, 0x48, 0x53, 0xF4, 0x02, 0xAC, 0x76, 0xA3, 0x95, 0xC0,
	0xB0, 0xD7, 0x68, 0xDA, 0xC3, 0x64, 0x6B, 0xAE
};

static unsigned char A3GP_HDDMPK[] = {
	0x3D, 0x85, 0xEA, 0xA2, 0x0B, 0xE1, 0x8C, 0xF2, 0xC8, 0x90,
	0x42, 0x4F, 0xEF, 0x71, 0x2B, 0x9D, 0x8C, 0x29, 0x41, 0x70,
	0x18, 0xA4, 0xA5, 0xB0, 0xBF, 0xB8, 0x8E, 0xE8, 0x41, 0x70,
	0x91, 0x0C, 0x75, 0xF7, 0x03, 0xA0, 0xB0, 0xD5, 0x87, 0x28,
	0x8E, 0x78, 0x3A, 0x4A, 0xDF, 0x68, 0x8A, 0x24, 0xD2, 0xE9,
	0x91, 0x41, 0xFA, 0xC9, 0x91, 0x15, 0x5F, 0xB4, 0x31, 0xB6,
	0x40, 0x9D, 0xDE, 0x37, 0x79, 0x93, 0x3C, 0xA2, 0x8C, 0xCD,
	0xE2, 0xBD, 0xCF, 0x7B, 0xF4, 0xE5, 0x2C, 0x94, 0x00, 0x96,
	0x41, 0x66, 0x31, 0x8E, 0xCF, 0x9F, 0x66, 0x2D, 0xBD, 0x7C,
	0xEA, 0xF2, 0xFB, 0x80, 0xE2, 0x61, 0x65, 0x0F, 0x71, 0xE9,
	0xE5, 0x96, 0x4B, 0x04, 0xF4, 0xDE, 0x20, 0xA6, 0x78, 0xFF,
	0xBD, 0xFE, 0x27, 0xF1, 0x5E, 0x6F, 0xE0, 0x29, 0x33, 0xCE,
	0x43, 0xE2, 0x9A, 0xB6, 0xAF, 0xFB, 0x9D, 0x9F
};

static unsigned char A3GP_GAMESMPK[] = {
	0x61, 0xED, 0xB2, 0xCB, 0xD6, 0x90, 0x3F, 0xC6, 0xE9, 0x52,
	0x8F, 0x88, 0xD9, 0x61, 0xC4, 0x8C, 0x69, 0x61, 0x35, 0x5C,
	0x28, 0xC1, 0xC6, 0xDA, 0x51, 0x78, 0x65, 0x43, 0x4C, 0x68,
	0x6D, 0xAB, 0x57, 0xF1, 0xC7, 0xC7, 0xC5, 0x48, 0xC9, 0x42,
	0xCC, 0x9C, 0x47, 0x54, 0x74, 0x35, 0x20, 0xD1, 0xE3, 0xB5,
	0xA6, 0x58, 0x97, 0x52, 0x6F, 0x13, 0x34, 0xEA, 0xAB, 0xC0,
	0x6C, 0xE4, 0x29, 0xC9, 0x2B, 0x7E, 0x81, 0x57, 0x30, 0x94,
	0xC2, 0x4C, 0xC3, 0x23, 0xCA, 0xC7, 0x85, 0xE6, 0xF3, 0xA0,
	0x50, 0x7C, 0x00, 0xC5, 0x0B, 0xEE, 0xD4, 0x98, 0x6D, 0x4E,
	0x2B, 0x52, 0x06, 0xBF, 0xB0, 0xFE, 0x8D, 0xA5, 0x87, 0xCF,
	0x19, 0x19, 0xF1, 0xA7, 0x3E, 0xF4, 0x21, 0x27, 0xA6, 0xE8,
	0x28, 0xA3, 0x19, 0x10, 0x1B, 0x89, 0xE7, 0x33, 0x7A, 0xA3,
	0x17, 0xF1, 0x72, 0x7C, 0x1D, 0x51, 0xCA, 0xED
};

/* Archos 5 Internet Tablet from Android */

static unsigned char A5IT_AES[] = {
	0x68, 0xE0, 0xDF, 0x3C, 0xA0, 0x17, 0xE9, 0xA3, 0xA1, 0xF6, // AES key
	0xA0, 0x71, 0x7E, 0x3E, 0xFA, 0xDD
};

static unsigned char A5IT_BOOTLOADER[] = {
	0x57, 0xA7, 0x56, 0x1D, 0x9D, 0x06, 0xAC, 0x51, 0x66, 0xB3, // bootloader
	0x85, 0xC2, 0x1D, 0xED, 0x7C, 0x6A, 0x2F, 0x26, 0x4C, 0xF8,
	0xDA, 0x08, 0xC8, 0x25, 0x5B, 0x4A, 0x5F, 0x1F, 0x0D, 0x45,
	0x57, 0xDA, 0x31, 0x84, 0x55, 0x60, 0x94, 0x6E, 0x5D, 0x77,
	0x7F, 0xF8, 0xF8, 0x92, 0x6B, 0x07, 0xA5, 0x6B, 0x6C, 0x52,
	0x54, 0x8C, 0xB0, 0xE3, 0x47, 0x21, 0xDE, 0xD4, 0xF5, 0x8D,
	0xA8, 0x7D, 0x9A, 0x19, 0xA0, 0xAF, 0xDF, 0xC8, 0xF7, 0x85,
	0x25, 0xCC, 0x3C, 0x18, 0xA6, 0xA1, 0x58, 0xE3, 0xD5, 0x2D,
	0x23, 0xFA, 0xF5, 0x26, 0xA5, 0x2D, 0xF2, 0x03, 0x1D, 0xC8,
	0xC5, 0xF8, 0x14, 0x5E, 0x85, 0xA9, 0x2D, 0x80, 0xD8, 0x78,
	0x5A, 0xF2, 0x12, 0x50, 0xFC, 0xFF, 0x9F, 0x3A, 0x73, 0xFC,
	0xE4, 0xEF, 0x01, 0x9C, 0x10, 0x33, 0x8B, 0xFE, 0xEA, 0x5B,
	0x8C, 0x01, 0xCE, 0xC1, 0xC7, 0x30, 0x56, 0xB3
};

static unsigned char A5IT_RELMPK[] = {
	0x8B, 0xCB, 0x7F, 0x0C, 0x38, 0x29, 0x7A, 0x63, 0x22, 0x3F, // RelMPK
	0xB2, 0x61, 0x42, 0xBB, 0x05, 0x86, 0x72, 0x2D, 0xBE, 0x73,
	0x50, 0x55, 0xFD, 0x64, 0x1D, 0xCF, 0x67, 0x3B, 0x35, 0xDE,
	0xBC, 0xC9, 0x17, 0x2F, 0x63, 0xFA, 0x2A, 0x3E, 0xA2, 0x06,
	0x12, 0x45, 0x73, 0x89, 0x39, 0xF0, 0x08, 0x60, 0x6A, 0x29,
	0x6A, 0xB2, 0x7C, 0xFA, 0xAB, 0xC3, 0x9D, 0x82, 0xBD, 0x8B,
	0x64, 0xBF, 0x5C, 0x9B, 0xF3, 0xEE, 0xB5, 0xED, 0x8C, 0xF4,
	0x57, 0x7C, 0x95, 0xD1, 0x88, 0x40, 0xD4, 0x90, 0x1C, 0x70,
	0x0F, 0x91, 0x0D, 0x2B, 0xE9, 0x6E, 0xEF, 0x7C, 0x46, 0xE9,
	0xED, 0xBB, 0x5A, 0x61, 0x82, 0x84, 0xFA, 0x41, 0x4C, 0xA9,
	0x03, 0xEB, 0x96, 0xEC, 0x4E, 0x59, 0x69, 0x3B, 0xCF, 0xD4,
	0x73, 0xF3, 0xEF, 0x17, 0x2D, 0xDC, 0x55, 0x5A, 0x35, 0x2B,
	0xD6, 0x1F, 0xEF, 0xC1, 0x6E, 0xFB, 0xD5, 0xE3
};

static unsigned char A5IT_DEVMPK[] = {
	0x91, 0x6A, 0xE2, 0xD1, 0xD7, 0x51, 0x85, 0xBB, 0x0E, 0x0C, // DevMPK
	0x24, 0x99, 0x0D, 0x46, 0xBF, 0x43, 0x2F, 0xAB, 0xA1, 0x89,
	0xC2, 0x89, 0x88, 0x67, 0x2C, 0x5B, 0x63, 0x3B, 0x6F, 0x82,
	0x40, 0xBA, 0xE7, 0x66, 0x07, 0x21, 0xDF, 0x88, 0x7B, 0xFA,
	0xBC, 0x36, 0x7C, 0x2F, 0x51, 0x37, 0x8C, 0x40, 0xA2, 0x80,
	0xC2, 0xD0, 0xF6, 0x79, 0xDF, 0x99, 0xAE, 0x30, 0xB7, 0xDD,
	0x05, 0xAD, 0x14, 0x9A, 0x80, 0x84, 0x46, 0x0A, 0xA9, 0xD9,
	0x54, 0x67, 0xC0, 0x64, 0x23, 0x19, 0x52, 0x7E, 0x89, 0xC6,
	0x6B, 0xA2, 0x3E, 0x65, 0x96, 0x7B, 0x96, 0x61, 0x7C, 0x2D,
	0xF2, 0xE8, 0xAA, 0x95, 0x1E, 0x6B, 0x63, 0x9D, 0x78, 0xF7,
	0xFF, 0x4F, 0x11, 0xAD, 0x35, 0xA6, 0x20, 0xFE, 0x83, 0x6C,
	0x4B, 0xCA, 0xD4, 0x43, 0x52, 0x4A, 0x7B, 0xEC, 0xB6, 0xBD,
	0xEC, 0xC2, 0x9F, 0x15, 0x7E, 0x75, 0x40, 0xE7
};

static unsigned char A5IT_PLUGMPK[] = {
	0x9B, 0x63, 0xBC, 0xC6, 0x77, 0x36, 0xB5, 0xEA, 0xF0, 0x0F, // PlugMPK
	0x78, 0x45, 0xD0, 0x06, 0x83, 0xB1, 0x12, 0xD6, 0xB1, 0xA2,
	0x8C, 0x3E, 0xAA, 0xCF, 0x55, 0xDB, 0x11, 0x05, 0x60, 0x12,
	0x99, 0xCC, 0x92, 0x09, 0xFA, 0xE3, 0x05, 0x02, 0x33, 0x7F,
	0x6F, 0xD9, 0x5D, 0x8E, 0x32, 0xB2, 0xE3, 0x9F, 0xD6, 0x86,
	0xCB, 0xFB, 0x9D, 0x2A, 0x21, 0x61, 0x2B, 0x98, 0x1D, 0xF1,
	0x53, 0xB6, 0xD6, 0x0C, 0xE0, 0x3E, 0x57, 0x99, 0x52, 0x87,
	0xFD, 0x99, 0x4B, 0x9E, 0x2D, 0xC2, 0x66, 0x05, 0xB1, 0xE7,
	0xEE, 0x9C, 0x59, 0x1A, 0x79, 0xF3, 0x28, 0x17, 0xF6, 0xCE,
	0x80, 0x96, 0x12, 0xA2, 0xA7, 0xFB, 0xF0, 0xF7, 0xB6, 0x36,
	0xD0, 0x82, 0xC6, 0x32, 0x80, 0x62, 0x2D, 0x5A, 0x46, 0x6D,
	0x51, 0xB4, 0xE2, 0x8B, 0xA9, 0xEB, 0xFF, 0xF8, 0x95, 0xDC,
	0xD0, 0xBF, 0xCE, 0xE5, 0xFA, 0x99, 0x97, 0xED
};

static unsigned char A5IT_HDDMPK[] = {
	0x4B, 0xE6, 0x2B, 0x67, 0x6E, 0xFE, 0xAA, 0xBA, 0xBE, 0xD1, // HDDMPK
	0xDD, 0xEA, 0xF4, 0x3E, 0x24, 0x4B, 0xD5, 0xBC, 0xED, 0xC5,
	0xB3, 0xFE, 0x8D, 0x8D, 0x76, 0x6A, 0xDB, 0x19, 0x15, 0x5D,
	0xCB, 0xE2, 0x70, 0x08, 0x7E, 0xAA, 0x68, 0xE5, 0x56, 0x14,
	0x65, 0xF8, 0xB1, 0xBC, 0xEC, 0xB2, 0x38, 0xD1, 0xEB, 0x93,
	0x02, 0x43, 0x83, 0x56, 0xE0, 0xF9, 0x90, 0xB2, 0x78, 0x6E,
	0xAA, 0xB8, 0x8A, 0xBD, 0x1E, 0x81, 0x48, 0x2A, 0x90, 0xE6,
	0xCB, 0xBA, 0x6C, 0x71, 0x7B, 0x9A, 0x56, 0x56, 0xA6, 0x6D,
	0x5F, 0x52, 0x37, 0x1E, 0x4D, 0x28, 0x15, 0xEC, 0xD4, 0xB5,
	0x28, 0x15, 0xC0, 0x07, 0xC6, 0x85, 0x62, 0xE5, 0x3D, 0xDD,
	0xE8, 0xD2, 0x8A, 0x28, 0xE9, 0x3F, 0xFF, 0x5B, 0x28, 0x44,
	0x34, 0xE7, 0x83, 0x38, 0xC8, 0xF2, 0xE4, 0x20, 0x90, 0xE8,
	0xCE, 0xA0, 0xDF, 0x8B, 0x2A, 0x56, 0xC4, 0xA6
};

static char A5IT_GAMESMPK[] = {
	0x61, 0xED, 0xB2, 0xCB, 0xD6, 0x90, 0x3F, 0xC6, 0xE9, 0x52, // GamesMPK
	0x8F, 0x88, 0xD9, 0x61, 0xC4, 0x8C, 0x69, 0x61, 0x35, 0x5C,
	0x28, 0xC1, 0xC6, 0xDA, 0x51, 0x78, 0x65, 0x43, 0x4C, 0x68,
	0x6D, 0xAB, 0x57, 0xF1, 0xC7, 0xC7, 0xC5, 0x48, 0xC9, 0x42,
	0xCC, 0x9C, 0x47, 0x54, 0x74, 0x35, 0x20, 0xD1, 0xE3, 0xB5,
	0xA6, 0x58, 0x97, 0x52, 0x6F, 0x13, 0x34, 0xEA, 0xAB, 0xC0,
	0x6C, 0xE4, 0x29, 0xC9, 0x2B, 0x7E, 0x81, 0x57, 0x30, 0x94,
	0xC2, 0x4C, 0xC3, 0x23, 0xCA, 0xC7, 0x85, 0xE6, 0xF3, 0xA0,
	0x50, 0x7C, 0x00, 0xC5, 0x0B, 0xEE, 0xD4, 0x98, 0x6D, 0x4E,
	0x2B, 0x52, 0x06, 0xBF, 0xB0, 0xFE, 0x8D, 0xA5, 0x87, 0xCF,
	0x19, 0x19, 0xF1, 0xA7, 0x3E, 0xF4, 0x21, 0x27, 0xA6, 0xE8,
	0x28, 0xA3, 0x19, 0x10, 0x1B, 0x89, 0xE7, 0x33, 0x7A, 0xA3,
	0x17, 0xF1, 0x72, 0x7C, 0x1D, 0x51, 0xCA, 0xED
};

/* Archos Gen8 Internet Tablet Series */

static unsigned char G8A_AES[] = {
        0xCF,0xB7,0x81,0x70,0x22,0x19,0x72,0x93,
        0x32,0xC4,0x0C,0x2F,0xE9,0x58,0xD2,0x4A
};

static unsigned char G8A_BOOTLOADER[] = {
  0xA9, 0xDB, 0xED, 0xA9, 0x06, 0xF2, 0xAC, 0x43, 0x58, 0x7B,
  0xF5, 0x8E, 0x10, 0xD4, 0xEC, 0x08, 0xCF, 0x12, 0xFD, 0x0F,
  0xA4, 0x42, 0x1F, 0x62, 0x20, 0x10, 0xAF, 0x96, 0xE3, 0x14,
  0xA4, 0x6B, 0x18, 0x19, 0xAB, 0xF2, 0x26, 0x3C, 0x29, 0x80,
  0xD0, 0x19, 0x0D, 0x7D, 0x9B, 0xAF, 0x61, 0x9F, 0xEA, 0x79,
  0x5C, 0x14, 0x69, 0xF7, 0x46, 0x63, 0x67, 0xE5, 0xDE, 0xA3,
  0x66, 0x48, 0xC1, 0x33, 0x40, 0x34, 0x1D, 0x12, 0xC0, 0x9E,
  0xCD, 0x8E, 0x89, 0x94, 0xB5, 0xC2, 0x19, 0xFF, 0xEC, 0x5B,
  0x28, 0x9B, 0x74, 0x4A, 0xC4, 0xBF, 0x81, 0xAB, 0x21, 0xDD,
  0x34, 0xDF, 0x5B, 0xBF, 0x8E, 0xC9, 0x0F, 0x81, 0x92, 0xAA,
  0x3A, 0xA1, 0x8F, 0x29, 0x0C, 0xBB, 0x8A, 0xC0, 0xE0, 0x13,
  0x94, 0x77, 0x3D, 0x52, 0xFF, 0x28, 0xB9, 0xA1, 0x37, 0x87,
  0x35, 0x48, 0xC4, 0xB9, 0x2D, 0x25, 0x7F, 0xA5, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0xA8,
  0x63, 0xBA
};

static unsigned char G8A_RELMPK[] = {
  0x1B, 0xD6, 0xF1, 0x0D, 0x13, 0x66, 0x74, 0x16, 0x62, 0x86,
  0xA4, 0x1E, 0x27, 0x25, 0xAC, 0x99, 0x68, 0xDA, 0xF8, 0x18,
  0x39, 0x7C, 0x81, 0x20, 0x62, 0x53, 0x5A, 0x52, 0xE4, 0x04,
  0x52, 0xED, 0xCE, 0xAD, 0xB9, 0x08, 0xB2, 0xB3, 0x3B, 0x16,
  0xC9, 0xC4, 0x2F, 0x05, 0xA7, 0xEA, 0xB4, 0xE2, 0x19, 0x50,
  0x9A, 0x52, 0x35, 0x8B, 0x22, 0xDC, 0x3F, 0xBE, 0x18, 0x77,
  0xFE, 0xE5, 0x5B, 0x2A, 0xDA, 0x5A, 0x31, 0x55, 0x4D, 0x3E,
  0xF8, 0x24, 0x84, 0x8F, 0x66, 0xCA, 0x5B, 0xA2, 0x0E, 0xF4,
  0xD8, 0x60, 0x6F, 0xF4, 0x5B, 0x9B, 0x1A, 0xDC, 0x6A, 0x12,
  0xE5, 0x83, 0x80, 0x7E, 0x04, 0x73, 0x5A, 0x98, 0xD9, 0x64,
  0x4E, 0xFC, 0x5E, 0x11, 0x17, 0x1B, 0x0D, 0xB8, 0x4F, 0x18,
  0x88, 0xEA, 0xBC, 0x7E, 0xA5, 0x25, 0xAE, 0x56, 0x06, 0xD2,
  0x07, 0xA0, 0x2D, 0x77, 0x9B, 0x3A, 0x19, 0xCE, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x67,
  0xD8, 0xEC
};

static unsigned char G8A_DEVMPK[] = {
  0x49, 0x71, 0x94, 0x20, 0x20, 0xC8, 0x88, 0x6E, 0xE8, 0x58,
  0x5A, 0xFE, 0xA7, 0x52, 0x7D, 0xA2, 0x2F, 0x71, 0xB2, 0x25,
  0x40, 0xF1, 0x55, 0x78, 0x7F, 0x95, 0xF2, 0x54, 0x88, 0x14,
  0x0D, 0xF8, 0xD5, 0x4A, 0xB7, 0xA0, 0x70, 0x44, 0x07, 0xE2,
  0x5D, 0x7D, 0x74, 0x68, 0x7C, 0x90, 0x16, 0x32, 0x21, 0x46,
  0x7A, 0xCB, 0x91, 0xE7, 0xBE, 0xB0, 0x7B, 0x5A, 0x09, 0xEE,
  0x64, 0xE8, 0xC7, 0xA9, 0x02, 0x46, 0x6B, 0x18, 0x1C, 0x71,
  0xE1, 0x47, 0x4A, 0x9E, 0x80, 0x8E, 0x6F, 0x70, 0x4D, 0xAC,
  0x90, 0x7C, 0x6B, 0xAF, 0x28, 0xD5, 0x3C, 0xE5, 0x4C, 0x8D,
  0x7D, 0x14, 0x7D, 0x4F, 0x3D, 0xD1, 0x6A, 0xC4, 0xB1, 0x2D,
  0x50, 0xD9, 0x22, 0xE5, 0xCE, 0xE3, 0x14, 0x46, 0x96, 0x27,
  0x62, 0x09, 0x8B, 0xD6, 0x1A, 0xAB, 0xB3, 0x4E, 0xE7, 0xB0,
  0xF8, 0x59, 0x0D, 0xAC, 0x0E, 0x05, 0xD9, 0xCD, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4D, 0xBE,
  0x4B, 0x57
};

static unsigned char G8A_PLUGMPK[] = {
  0x79, 0x31, 0x9B, 0x90, 0xF0, 0xB2, 0x3D, 0xF2, 0xCE, 0x64,
  0x2E, 0x2F, 0x31, 0x40, 0xD4, 0xAD, 0xCC, 0x08, 0x4E, 0xA4,
  0x16, 0x94, 0x47, 0xD7, 0xD6, 0x2F, 0xB5, 0x02, 0xE6, 0x2D,
  0xB4, 0x43, 0xF9, 0x15, 0x92, 0x04, 0x3E, 0x89, 0x2F, 0x3A,
  0x8D, 0xA7, 0xDD, 0x2C, 0x20, 0xCD, 0x22, 0x4D, 0x54, 0x94,
  0xFE, 0x5B, 0x65, 0x27, 0x45, 0xCE, 0xC0, 0x6D, 0x9C, 0x90,
  0xBA, 0x56, 0x05, 0xB9, 0x63, 0xCE, 0x35, 0xDA, 0x80, 0x26,
  0x06, 0xE4, 0x56, 0xF1, 0x2C, 0x21, 0xBE, 0x27, 0x34, 0x1C,
  0x7F, 0xD6, 0xB7, 0x6D, 0x92, 0xBB, 0x00, 0x57, 0x36, 0x7A,
  0x6B, 0x71, 0xB7, 0x9C, 0xB9, 0x47, 0x7F, 0x7B, 0x25, 0x7C,
  0xDF, 0x2B, 0xFD, 0xBD, 0xC1, 0xEC, 0x65, 0xBB, 0xC1, 0x7F,
  0x2A, 0x03, 0x34, 0xE6, 0xC4, 0xD7, 0x99, 0xA2, 0x83, 0xA0,
  0xB6, 0xE4, 0xAF, 0xFD, 0x0E, 0x77, 0xF3, 0xC7, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x9E,
  0x6D, 0xEB
};

static unsigned char G8A_HDDMPK[] = {
  0x1F, 0x80, 0x02, 0x1B, 0xD9, 0x8F, 0x55, 0x4C, 0x11, 0x51,
  0xFA, 0x12, 0xA1, 0xFF, 0xCC, 0xD5, 0xC6, 0xB9, 0x82, 0xB5,
  0x72, 0x15, 0xA5, 0xC2, 0x27, 0x20, 0x3C, 0xC0, 0x60, 0x02,
  0x13, 0x27, 0x03, 0x26, 0xB3, 0xBC, 0x5B, 0xDD, 0xEE, 0x23,
  0x96, 0x52, 0x40, 0x05, 0x93, 0xB7, 0x7C, 0x05, 0x91, 0x63,
  0xB2, 0x7B, 0xBB, 0xBE, 0x94, 0xA0, 0x39, 0xE4, 0xE1, 0x94,
  0x96, 0xB1, 0x0D, 0xC1, 0x63, 0xAA, 0x8D, 0x7D, 0x84, 0xE2,
  0x4C, 0x57, 0xE7, 0xD7, 0xA4, 0xAD, 0xB3, 0x46, 0xD2, 0xA0,
  0x01, 0x04, 0x2B, 0xD1, 0x27, 0x0A, 0xCB, 0x31, 0x64, 0x75,
  0xA0, 0x13, 0xA9, 0xBE, 0x12, 0x4B, 0xAF, 0x30, 0x02, 0x0F,
  0x3D, 0x22, 0xA0, 0x78, 0x31, 0x66, 0xBD, 0xBA, 0xDA, 0xCC,
  0x4B, 0x7D, 0xC2, 0x2D, 0x21, 0xA6, 0x1F, 0x05, 0x60, 0x33,
  0x93, 0xEA, 0x02, 0x8D, 0x94, 0x32, 0x09, 0xB7, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x70,
  0x1A, 0xD2
};

static char G8A_GAMESMPK[] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00
};

/* Archos Gen8V2 Internet Tablet (A70ITV2) */

static unsigned char G8AV2_AES[] = {
        0x91,0x7E,0xC9,0x9C,0x98,0xE4,0x4B,0xEA,
        0x98,0x10,0x5F,0x9B,0x9C,0xD0,0xD0,0xAB,
};

static unsigned char G8AV2_BOOTLOADER[] = {
  0x09, 0xE0, 0xD3, 0x16, 0x96, 0xF3, 0x68, 0xAC, 0x88, 0xC4,
  0x0B, 0xD3, 0xBF, 0x76, 0x7D, 0x58, 0x74, 0x7C, 0xC2, 0xBA,
  0x85, 0xE5, 0xCE, 0x67, 0xFD, 0x5C, 0x65, 0xF3, 0x86, 0x13,
  0x2D, 0xAC, 0xAC, 0xB6, 0x22, 0x67, 0x68, 0x8E, 0x0D, 0x95,
  0x41, 0x2E, 0xF3, 0x66, 0x07, 0x00, 0x5C, 0x3A, 0x7C, 0x61,
  0xDD, 0xB9, 0x62, 0xBF, 0x35, 0xAF, 0xC6, 0x42, 0x74, 0xCC,
  0xDB, 0x04, 0x73, 0x7F, 0xA5, 0x13, 0x04, 0xFE, 0x87, 0x8A,
  0x57, 0x30, 0xCD, 0x27, 0x05, 0x13, 0x0F, 0x28, 0x4D, 0x7B,
  0x36, 0x5D, 0x04, 0x94, 0x1F, 0xD0, 0xC4, 0x5F, 0xF1, 0x8A,
  0x15, 0x58, 0xFB, 0x26, 0x38, 0xAE, 0x6D, 0x74, 0x7C, 0x9E,
  0x7F, 0xBF, 0xFC, 0xA2, 0xC3, 0x5E, 0x83, 0x5E, 0x03, 0x88,
  0x15, 0x1D, 0x27, 0x90, 0x5C, 0x93, 0x5E, 0x70, 0x74, 0xE8,
  0xBE, 0x9B, 0x6B, 0xC3, 0x8C, 0xF3, 0xD6, 0x96, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD3, 0xC7,
  0xCA, 0x97
};

static unsigned char G8AV2_RELMPK[] = {
  0x7F, 0x72, 0x00, 0x52, 0x09, 0x90, 0xB5, 0x72, 0x04, 0x21,
  0x86, 0x29, 0x2C, 0x0D, 0xF2, 0x64, 0x89, 0xB4, 0xF9, 0x7C,
  0x6E, 0x3E, 0x4F, 0xBE, 0x5A, 0xB2, 0x8A, 0xA0, 0x12, 0x5B,
  0x13, 0x11, 0x10, 0x7C, 0x8B, 0xD1, 0x89, 0xD3, 0xA1, 0x2C,
  0xE3, 0x87, 0x78, 0xFD, 0xF2, 0xDF, 0x65, 0x8A, 0xF7, 0x39,
  0xCE, 0x25, 0x66, 0x87, 0x24, 0x85, 0xAD, 0x8D, 0x7D, 0xC1,
  0x79, 0x71, 0x29, 0xE0, 0x49, 0xBA, 0xE8, 0x49, 0x1C, 0x52,
  0xDE, 0x11, 0xAB, 0xA6, 0x73, 0x85, 0x49, 0x15, 0xD3, 0xD2,
  0x16, 0x48, 0xAD, 0x21, 0x93, 0xAB, 0x5E, 0x7E, 0xF3, 0xCB,
  0x9A, 0xFF, 0xCD, 0x28, 0x04, 0xF9, 0x98, 0xF3, 0xFF, 0x8E,
  0x8B, 0x00, 0x18, 0x1E, 0xD2, 0x2E, 0xD5, 0xC6, 0x90, 0xC4,
  0xD0, 0x13, 0xD9, 0x50, 0x40, 0xEA, 0xE5, 0x9B, 0x66, 0xD7,
  0xDC, 0xF5, 0xA3, 0x6E, 0x40, 0x10, 0xA3, 0xD0, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x33, 0x94,
  0xCE, 0xC6
};

static unsigned char G8AV2_DEVMPK[] = {
  0x4B, 0xF2, 0xEA, 0x28, 0x12, 0xAB, 0x34, 0x0C, 0xFB, 0xBA,
  0x58, 0xE6, 0xD3, 0x50, 0xF3, 0xCA, 0x20, 0x32, 0x72, 0x85,
  0xCA, 0xC7, 0x53, 0xF8, 0xC8, 0x3D, 0x4A, 0x20, 0x6F, 0x14,
  0xAF, 0xFD, 0x1F, 0x9E, 0x91, 0x04, 0x8A, 0x86, 0xAC, 0x82,
  0x76, 0xE2, 0x27, 0xA8, 0x12, 0xBC, 0x39, 0x93, 0x96, 0xEA,
  0x81, 0xD6, 0x72, 0xDA, 0x08, 0x9B, 0xE8, 0x24, 0x46, 0x4F,
  0x6E, 0x99, 0xB2, 0xD5, 0xF1, 0xF4, 0xCE, 0x33, 0xC1, 0x49,
  0x19, 0x6D, 0x48, 0x99, 0xB5, 0x49, 0x9D, 0x69, 0x59, 0xC4,
  0xE9, 0xA8, 0x57, 0x78, 0x38, 0xE6, 0x78, 0xC9, 0x37, 0xCB,
  0xBA, 0xE9, 0x28, 0x31, 0x3A, 0xA7, 0x99, 0x5E, 0x13, 0x0D,
  0x9D, 0x2E, 0x45, 0x3B, 0x7C, 0x2F, 0xD2, 0x16, 0x32, 0x6B,
  0x67, 0xFE, 0xFB, 0xBC, 0xAA, 0xAE, 0x9A, 0x95, 0x6B, 0x00,
  0x4E, 0x3E, 0x24, 0x4E, 0x2F, 0x1E, 0x98, 0xCA, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E, 0x75,
  0x6D, 0xAF
};

static unsigned char G8AV2_PLUGMPK[] = {
  0x71, 0xCB, 0x8E, 0xAE, 0x3D, 0xEA, 0xF7, 0xB3, 0xF4, 0xA8,
  0xBE, 0x1C, 0x5D, 0xCE, 0x3A, 0xFC, 0x00, 0x20, 0x45, 0x6E,
  0xE9, 0x05, 0x8D, 0x66, 0x1C, 0x9E, 0xCC, 0x47, 0x75, 0x2E,
  0xEC, 0x18, 0x01, 0x1D, 0x2A, 0xEA, 0x6F, 0xC9, 0xEA, 0xD6,
  0x1F, 0xFF, 0xF0, 0xAD, 0x64, 0x72, 0xEC, 0x2E, 0x18, 0x81,
  0xDE, 0xED, 0xA0, 0x52, 0x7E, 0x17, 0xEB, 0xE1, 0x13, 0x53,
  0x2C, 0x58, 0x6E, 0xA4, 0xED, 0xB8, 0x77, 0xB9, 0x63, 0x71,
  0xD1, 0x52, 0xAD, 0xC3, 0x9F, 0x41, 0xFC, 0x6E, 0xF4, 0x6D,
  0x0A, 0xE7, 0xFE, 0xF3, 0xAB, 0xE0, 0x39, 0xBE, 0xBA, 0x73,
  0x17, 0x91, 0x30, 0x71, 0xE9, 0xBD, 0x54, 0x18, 0xF5, 0x11,
  0x94, 0xB8, 0x83, 0x67, 0x41, 0x8D, 0x43, 0xE5, 0xBC, 0xA9,
  0xA3, 0xB5, 0x72, 0x4A, 0xBB, 0xC9, 0x16, 0x7B, 0x2D, 0x6D,
  0xB3, 0x67, 0xAE, 0x13, 0xBB, 0xD2, 0x02, 0xB0, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA7, 0x4F,
  0xBA, 0xB5
};

static unsigned char G8AV2_HDDMPK[] = {
  0xD3, 0xE5, 0x47, 0x4E, 0xF5, 0x0D, 0xE9, 0x38, 0xE7, 0x27,
  0x0B, 0x98, 0xA5, 0x98, 0x50, 0x2D, 0xA8, 0x3B, 0x88, 0xBD,
  0x66, 0x53, 0x22, 0x06, 0x6E, 0x3B, 0xC7, 0xEA, 0xB0, 0xC1,
  0xBF, 0x14, 0x6F, 0x6F, 0x35, 0xE9, 0x83, 0x9A, 0xAA, 0x41,
  0xB8, 0x59, 0x78, 0xE4, 0xE8, 0x32, 0xB6, 0xE5, 0x0C, 0xC4,
  0x23, 0x16, 0xE1, 0x8B, 0x48, 0xD5, 0x50, 0x15, 0xDE, 0x85,
  0x57, 0xA3, 0xA6, 0x69, 0xC7, 0x07, 0x20, 0x34, 0x94, 0xF8,
  0x6E, 0x56, 0x76, 0x95, 0x41, 0x7F, 0x69, 0x5B, 0xAA, 0x4E,
  0xA9, 0xDB, 0x3B, 0xE7, 0xBB, 0xD7, 0x4E, 0x04, 0x18, 0x1C,
  0xCD, 0x93, 0xD4, 0xB7, 0x42, 0x2A, 0xE3, 0xE0, 0x2D, 0x26,
  0xD7, 0x72, 0x52, 0x73, 0xED, 0x71, 0x0C, 0xF3, 0x7D, 0x26,
  0xF8, 0x93, 0x5B, 0x3F, 0x2C, 0xFD, 0xAD, 0xC5, 0xE8, 0xDF,
  0x90, 0x51, 0x8A, 0x36, 0x81, 0x95, 0xFB, 0xC2, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA7, 0xD5,
  0x6B, 0x5C
};

/* Archos Gen9 Internet Tablet Series */

static unsigned char G9A_AES[] = {
        0x35,0x22,0x9A,0x0F,0xCA,0xA4,0xAC,0x22,
        0xC6,0x1B,0x73,0x4E,0x4F,0x57,0xBF,0xB0
};

static unsigned char G9A_BOOTLOADER[] = {
  0xFF, 0xDC, 0x6A, 0xB2, 0xF9, 0xBA, 0x42, 0xC2, 0x00, 0x58,
  0xFD, 0xE0, 0x88, 0xE8, 0x2B, 0x4C, 0xFD, 0xAA, 0x22, 0x90,
  0xF0, 0x4C, 0xD8, 0x8C, 0x5E, 0x67, 0xED, 0xAD, 0xFA, 0x5A,
  0x7B, 0x93, 0x90, 0x11, 0x2A, 0x8D, 0x0F, 0x98, 0xD6, 0x24,
  0x37, 0xF7, 0x0B, 0xDC, 0x83, 0x67, 0x0A, 0xF4, 0x0E, 0x7D,
  0xBB, 0xA9, 0x28, 0xFF, 0x7C, 0x56, 0xFB, 0x05, 0x39, 0x27,
  0xD2, 0xBA, 0x96, 0x0B, 0x8B, 0xF8, 0x58, 0x80, 0xC8, 0xAD,
  0xD5, 0xF9, 0xDF, 0x93, 0xBE, 0x46, 0x2F, 0x04, 0xA9, 0x98,
  0xF6, 0xE9, 0x61, 0xE9, 0xBC, 0x72, 0x27, 0xC7, 0xEA, 0xF4,
  0x1A, 0xCF, 0xED, 0x25, 0xEC, 0x93, 0xDB, 0x6F, 0x42, 0x8E,
  0x93, 0xC4, 0x12, 0x64, 0xBF, 0x40, 0xB7, 0xEA, 0xBE, 0xBC,
  0xE9, 0xE2, 0xE8, 0xD2, 0x29, 0xFB, 0xFD, 0x4E, 0x2C, 0x39,
  0x63, 0x1E, 0x60, 0x4B, 0xF2, 0xC7, 0x49, 0xEC, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xBB,
  0x42, 0xD2
};

static unsigned char G9A_RELMPK[] = {
  0x5D, 0x68, 0x13, 0xDB, 0x93, 0xDE, 0x2E, 0x1F, 0xEB, 0xD5,
  0xD2, 0x80, 0x57, 0x31, 0x4D, 0x60, 0xF6, 0x14, 0x15, 0xA0,
  0xAA, 0x4D, 0x6C, 0x2A, 0x24, 0xA1, 0x39, 0xB7, 0x99, 0x22,
  0xF6, 0x8E, 0x3C, 0x70, 0x91, 0x31, 0xD2, 0x01, 0xAE, 0xBE,
  0xFA, 0x71, 0x17, 0xF5, 0xDF, 0xF8, 0xD8, 0xCD, 0x62, 0x87,
  0xF8, 0x53, 0x1A, 0x5A, 0x5C, 0x37, 0x6C, 0xF0, 0xAD, 0xBA,
  0x20, 0xBE, 0xC7, 0x37, 0x0E, 0xF4, 0x98, 0xBE, 0x80, 0x6F,
  0x10, 0x54, 0xE8, 0xB9, 0x4A, 0x39, 0x86, 0x77, 0xC6, 0x4C,
  0x7C, 0xFC, 0xC5, 0xC2, 0x61, 0xE9, 0xAB, 0x81, 0xB5, 0xF3,
  0x2A, 0x30, 0x87, 0xEF, 0xB7, 0x3A, 0xD5, 0xD9, 0x11, 0x60,
  0x7E, 0xC8, 0xDD, 0x28, 0x9A, 0xB9, 0xF3, 0x97, 0x53, 0x97,
  0xD5, 0x26, 0xE3, 0x67, 0x09, 0xF3, 0xCC, 0x3D, 0x32, 0xDF,
  0x02, 0x66, 0xAA, 0xB1, 0x1C, 0x75, 0x13, 0xAF, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x18,
  0xC3, 0x2A
};

static unsigned char G9A_DEVMPK[] = {
  0xD3, 0x07, 0xA8, 0xC3, 0xF1, 0x02, 0x28, 0xB9, 0x9A, 0x37,
  0xEF, 0x06, 0xF1, 0x75, 0x93, 0xA3, 0x73, 0xBA, 0x2A, 0x60,
  0x25, 0x30, 0x33, 0x0D, 0x71, 0xAE, 0x4B, 0xF0, 0x07, 0xB0,
  0xD8, 0x35, 0xBF, 0x06, 0xB0, 0x16, 0x9C, 0x6B, 0x1A, 0x9E,
  0xC1, 0x80, 0xE7, 0xDA, 0xCC, 0x64, 0x61, 0x91, 0xF6, 0x1C,
  0xD8, 0xFE, 0x10, 0x70, 0x9E, 0x26, 0x60, 0xFF, 0x4E, 0x26,
  0xB8, 0x96, 0xE7, 0xB6, 0xDC, 0x01, 0x19, 0xE9, 0x43, 0xDB,
  0xC7, 0xB7, 0xF8, 0xBC, 0x38, 0xFB, 0x9C, 0x6F, 0xDE, 0x1C,
  0xF1, 0xA0, 0x68, 0xD7, 0x1F, 0x99, 0x4E, 0xBB, 0xC7, 0xCF,
  0x17, 0x63, 0xA5, 0xBC, 0x41, 0xA7, 0x23, 0xCA, 0x5E, 0xF4,
  0xF7, 0xE6, 0x2F, 0x0D, 0x0F, 0x36, 0x9F, 0x51, 0x56, 0x1E,
  0x30, 0xD5, 0xB5, 0x7C, 0x8C, 0x1D, 0x1D, 0xCC, 0x5F, 0xBF,
  0x12, 0xC8, 0xED, 0x4D, 0x28, 0xB2, 0x2D, 0xCC, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x7E,
  0x2F, 0x24
};

static unsigned char G9A_PLUGMPK[] = {
  0x37, 0xF9, 0x07, 0xB7, 0x38, 0xDD, 0xB1, 0x0A, 0x65, 0xFE,
  0x67, 0xC8, 0x64, 0xC5, 0x14, 0xE4, 0xF6, 0xAF, 0x8D, 0xD8,
  0xF3, 0x31, 0x37, 0x59, 0xEB, 0xEC, 0x23, 0x44, 0x84, 0xDD,
  0x8B, 0x68, 0xD6, 0xEC, 0x5D, 0xDD, 0x84, 0x3B, 0xE4, 0x67,
  0x45, 0x78, 0x56, 0x0F, 0x71, 0x91, 0xFB, 0xA2, 0x05, 0x54,
  0x8C, 0xB2, 0xB9, 0x61, 0x6C, 0xE0, 0x91, 0x41, 0xB0, 0x02,
  0xD5, 0x66, 0xA6, 0xC7, 0x81, 0x0E, 0x20, 0xBB, 0xD5, 0x85,
  0x43, 0xB2, 0x7E, 0x01, 0xC2, 0xC4, 0x28, 0x13, 0x20, 0xC3,
  0x75, 0xDF, 0xCB, 0x64, 0x66, 0x1E, 0xB9, 0x43, 0x92, 0xFD,
  0x12, 0x99, 0x31, 0xA3, 0x55, 0xBC, 0x25, 0x9F, 0x09, 0x46,
  0xE1, 0x1D, 0xD3, 0x5B, 0x12, 0xF7, 0xCB, 0x2C, 0x94, 0x05,
  0x57, 0x4D, 0xCA, 0x6B, 0xF4, 0xD2, 0xD8, 0x49, 0x0C, 0x71,
  0x39, 0x0E, 0x6D, 0xCC, 0xC9, 0x7E, 0x04, 0xDA, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0x97,
  0x29, 0x69
};

static unsigned char G9A_HDDMPK[] = {
  0x9D, 0x4A, 0x3A, 0xFF, 0x34, 0xAC, 0x47, 0x69, 0xEF, 0xB0,
  0xD9, 0xE6, 0x9C, 0xBF, 0x53, 0xFD, 0x35, 0x4A, 0xB8, 0x7B,
  0xF5, 0xE4, 0x48, 0x2A, 0x29, 0x62, 0xB5, 0x01, 0x9A, 0xF7,
  0x8D, 0xF8, 0xE3, 0x02, 0xDB, 0xEC, 0xAC, 0x45, 0xFA, 0x0D,
  0x03, 0xEC, 0x10, 0x39, 0xC9, 0x21, 0x51, 0x77, 0x95, 0x59,
  0x9B, 0x82, 0xBF, 0x85, 0x7D, 0x59, 0xFA, 0xD1, 0xD8, 0x8A,
  0x91, 0x4E, 0x01, 0xFE, 0x5E, 0xEE, 0x4D, 0x5B, 0xB8, 0x66,
  0xD6, 0x65, 0x92, 0x82, 0x3B, 0xFB, 0x0A, 0x3C, 0x1C, 0xF2,
  0xE4, 0x99, 0xB5, 0x57, 0xF8, 0x3F, 0x7B, 0x6C, 0x35, 0x1E,
  0x92, 0x07, 0x72, 0xE5, 0x73, 0x52, 0x70, 0x62, 0x5E, 0x17,
  0x1B, 0x5D, 0x07, 0x72, 0x21, 0x3E, 0xD8, 0x37, 0xC5, 0xC5,
  0x4E, 0x36, 0xCE, 0x16, 0x4E, 0x50, 0xC9, 0xE8, 0x4B, 0x99,
  0x04, 0x89, 0x91, 0x5F, 0x38, 0x82, 0xCD, 0xAB, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE5, 0xB1,
  0x4E, 0x10
};

/* Archos Gen10 Internet Tablet Series */

static unsigned char G10A_AES[] = {
	0x7A, 0xDD, 0xFA, 0xB4, 0xAF, 0x05, 0x18, 0xF4,
	0x02, 0x6E, 0xFE, 0x2E, 0x28, 0xFA, 0x0C, 0x71
};

static unsigned char G10A_BOOTLOADER[] = {
  0xFB, 0x28, 0x97, 0x50, 0x10, 0x90, 0x9B, 0x90, 0xDD, 0xD0,
  0x27, 0xC5, 0x15, 0xC5, 0xDD, 0xCE, 0xDB, 0x6E, 0xE1, 0x5C,
  0xB9, 0xAA, 0x15, 0x2F, 0xE2, 0x3E, 0xB0, 0x8A, 0xB5, 0x99,
  0xE1, 0x01, 0x06, 0x58, 0x0D, 0x00, 0xD3, 0xC6, 0x38, 0x67,
  0x34, 0x2D, 0x31, 0x22, 0x28, 0xD3, 0x09, 0x44, 0x3D, 0xBE,
  0xE8, 0x19, 0xC9, 0x23, 0x7A, 0x0A, 0x06, 0x1F, 0x5D, 0xCF,
  0xAA, 0xB3, 0xC2, 0x99, 0xDA, 0xA8, 0x20, 0x50, 0x6B, 0x7A,
  0x6D, 0x05, 0xFD, 0x80, 0x25, 0x52, 0x07, 0x54, 0xF5, 0xA6,
  0xA1, 0x6F, 0xF9, 0xC2, 0xB4, 0x7E, 0x03, 0x17, 0xB3, 0x66,
  0xA4, 0xA9, 0xBA, 0x11, 0x68, 0xC4, 0x56, 0xC3, 0x01, 0x7A,
  0x4B, 0x5A, 0x30, 0x3A, 0x5F, 0xB3, 0x7A, 0x5F, 0x91, 0x34,
  0xBD, 0xB1, 0x78, 0x10, 0x25, 0xE8, 0xDC, 0x59, 0x79, 0x61,
  0xE9, 0x58, 0xF8, 0x8F, 0x25, 0x58, 0x3F, 0xB3, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE1, 0x38,
  0x6C, 0xCB
};

static unsigned char G10A_RELMPK[] = {
  0x21, 0x54, 0x3D, 0x5F, 0x13, 0x85, 0xFC, 0xE2, 0x02, 0x75,
  0xFE, 0x46, 0xC1, 0xAF, 0xBF, 0xC3, 0x91, 0x94, 0xF0, 0x2D,
  0xAE, 0xF9, 0x6D, 0xEA, 0x2F, 0x2E, 0x24, 0xC7, 0x24, 0x8E,
  0x6E, 0x1A, 0xB8, 0x15, 0x26, 0x40, 0xD7, 0xB1, 0xFA, 0x79,
  0x60, 0xFB, 0x70, 0xEB, 0xE2, 0x77, 0x20, 0xCE, 0xAE, 0x99,
  0x33, 0x25, 0x8E, 0x74, 0xA6, 0x7A, 0xD2, 0x9C, 0x15, 0x35,
  0x03, 0xAF, 0xB6, 0xF9, 0x5A, 0xE2, 0xF8, 0x87, 0xF9, 0x22,
  0xC1, 0x86, 0x90, 0xAD, 0x81, 0x9B, 0x44, 0x74, 0x8B, 0xD6,
  0x82, 0x2E, 0x0B, 0x9F, 0x53, 0xC9, 0xD6, 0xC4, 0x03, 0xFE,
  0x4F, 0xF6, 0x70, 0x35, 0x8B, 0x11, 0xCD, 0x95, 0x14, 0xA0,
  0x81, 0x2A, 0x3C, 0x95, 0xC9, 0x48, 0xA0, 0x01, 0x2B, 0x99,
  0x1C, 0xE0, 0x91, 0x88, 0x3A, 0x07, 0x85, 0xEA, 0x04, 0xFA,
  0x3C, 0xB5, 0x76, 0x7C, 0xFF, 0xE0, 0xF0, 0xD5, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x55,
  0xB1, 0x69
};

static unsigned char G10A_DEVMPK[] = {
  0x33, 0x70, 0xFC, 0x74, 0x90, 0xCE, 0x2E, 0x88, 0x34, 0x8C,
  0xA0, 0xE7, 0x2A, 0x3C, 0xC0, 0x96, 0x93, 0x64, 0x21, 0x2E,
  0xA7, 0xB5, 0xD8, 0xB9, 0x78, 0xE7, 0xD5, 0x97, 0x9F, 0x2C,
  0x98, 0xCD, 0xA6, 0x4A, 0x1C, 0xE0, 0x0A, 0x07, 0xB4, 0xFB,
  0x04, 0x00, 0x93, 0xF2, 0xF4, 0xCE, 0xC2, 0x9C, 0xF5, 0xD3,
  0x95, 0x37, 0x01, 0x58, 0x2D, 0xEA, 0x4C, 0x96, 0xDD, 0xD9,
  0xAD, 0xA2, 0xA7, 0x7C, 0xDD, 0x69, 0x6F, 0xBA, 0xE4, 0xD5,
  0x04, 0x5C, 0xD9, 0xE2, 0x14, 0xC8, 0xFF, 0xE7, 0x4C, 0x49,
  0x9C, 0x0C, 0xA1, 0x92, 0x03, 0x50, 0xEE, 0x3D, 0x73, 0xED,
  0x02, 0x07, 0xEF, 0xBE, 0x43, 0xE4, 0x33, 0x32, 0xBF, 0x30,
  0x9E, 0xE8, 0xCD, 0xD1, 0x7C, 0x96, 0x31, 0x7C, 0xE4, 0xD0,
  0x74, 0xCF, 0xD8, 0x67, 0x5D, 0x5A, 0x67, 0x63, 0x13, 0xDF,
  0x71, 0x69, 0x54, 0x93, 0x2B, 0x0B, 0xA0, 0xB5, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x26,
  0xF4, 0xDC
};

static unsigned char G10A_PLUGMPK[] = {
  0x5F, 0x2E, 0x22, 0x66, 0x2A, 0x4F, 0x11, 0x6A, 0x9A, 0x64,
  0x5D, 0xB6, 0x26, 0x1D, 0x97, 0xA8, 0x81, 0x0F, 0x18, 0x4F,
  0x35, 0xC6, 0x7A, 0x6D, 0xBB, 0x80, 0x45, 0xC5, 0x61, 0x42,
  0x58, 0x43, 0xBE, 0xB5, 0x1D, 0x3E, 0x6B, 0x05, 0x7F, 0x72,
  0x74, 0xE4, 0x0A, 0xAF, 0x2F, 0xE0, 0xFA, 0x50, 0x84, 0xB7,
  0xC0, 0x13, 0x19, 0x61, 0x42, 0xC0, 0xE6, 0x09, 0xC7, 0x08,
  0xAE, 0xDB, 0x2E, 0x60, 0x72, 0xBE, 0x4C, 0x36, 0xCA, 0xA3,
  0xA0, 0x81, 0x14, 0x67, 0xF6, 0xBC, 0x14, 0xD3, 0xC9, 0x4B,
  0xB7, 0x03, 0x9F, 0x73, 0x20, 0xF5, 0x2F, 0x97, 0x0B, 0x41,
  0x84, 0x57, 0x59, 0xBD, 0xA7, 0x68, 0x7A, 0x57, 0x38, 0xC6,
  0x9C, 0x9D, 0xEC, 0x21, 0x24, 0x55, 0xAE, 0x6F, 0xF2, 0x92,
  0x48, 0x00, 0x41, 0x3B, 0x55, 0xFA, 0x9D, 0xA6, 0xA3, 0xB2,
  0x35, 0x0B, 0xC2, 0xF2, 0xC4, 0x11, 0x31, 0xC6, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6F, 0x96,
  0xB4, 0x17
};

static unsigned char G10A_HDDMPK[] = {
  0x43, 0x0A, 0x87, 0x99, 0x36, 0x79, 0xE8, 0x77, 0x4F, 0xD7,
  0x15, 0xFC, 0x65, 0x14, 0xA3, 0x2F, 0x17, 0x13, 0x05, 0xB6,
  0x82, 0x64, 0x40, 0x84, 0xF3, 0x16, 0xB3, 0xD1, 0x85, 0xCE,
  0x4D, 0xDF, 0x6A, 0x9E, 0x3A, 0x78, 0xD0, 0xD7, 0xED, 0x7C,
  0x59, 0xDC, 0x60, 0xE8, 0x99, 0x0D, 0x65, 0xE1, 0xA8, 0xFD,
  0x69, 0x5F, 0x71, 0xF7, 0xD8, 0xD1, 0xD7, 0x1B, 0x67, 0xD8,
  0x9C, 0xC1, 0x4B, 0x2D, 0x37, 0xFE, 0x5A, 0xDD, 0x65, 0x01,
  0x52, 0x38, 0xE6, 0xC0, 0x62, 0x54, 0x11, 0x09, 0x86, 0xFD,
  0x8D, 0x93, 0x1B, 0x81, 0x21, 0xB5, 0xCC, 0xE7, 0xAD, 0xBA,
  0x74, 0x2C, 0x81, 0x45, 0x23, 0xD2, 0x3D, 0x59, 0xED, 0x43,
  0xA8, 0x3E, 0x0C, 0x20, 0x92, 0x60, 0xF0, 0x43, 0x4B, 0x55,
  0x7F, 0xD9, 0x89, 0x98, 0x66, 0x43, 0x73, 0x9C, 0xD1, 0x14,
  0x7D, 0xA9, 0xE7, 0xC6, 0x94, 0x66, 0x43, 0xAA, 0x01, 0x00,
  0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0xA0,
  0x91, 0x08
};

#endif /* __KEYS_H */

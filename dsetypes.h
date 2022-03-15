#ifndef DSETYPES_H
#define DSETYPES_H 1

struct SaveSection {
	char* sectionName;
	unsigned int sectionLength;
	char* sectionData;
	unsigned long sectionMagic;
	unsigned long propertyMagic;
	unsigned int propertyLength;
	char* propertyData;
};

struct PropertyEntry {
	char* entryName;
	unsigned long magic;
	char** strings;
};

#define SECTION                             17844268254680716477ul
#define PROPERTYDICTIONARY                  15503515531834958317ul
#define MISSIONLOGENTRIESARRAY              17353175024720420070ul
#define GLOBALMAPICONSARRAY                 0xF058F869AB5A36F9
#define AREABOX                             0xBDAA54365AE550F4
#define ENABLEDOCCLUDERCOLLIDERSDICTIONARY  0x0C500CA1F3B54C26
#define LIQUIDVOLUMESDICTIONARY             0xC897DE38447F5CF2
#define ACTORTILESTATESDICTIONARY           0x1D492D17D698EA76
#define OCCLUDERVIGNETTESDICTIONARY         0xCADF3A163B607F5B
#define MINIMAPVISIBILITYARRAY              0x1792BC17AD716D8D
#define CHECKPOINTOFFSET                    0xBF8FE251F17EAD25
#define MINIMAPCUSTOMMARKERDICTIONARY       0xBF450D514E81EB1B
#define VECTOR2                             0xF46AD97DC54A9259
#define VECTOR3                             0xF99B092157337B0D
#define STRINGARRAY                         14945989973056479269ul
#define STRING256                           0x31B88BF33548DE26
#define STRINGID                            0xF6EA0DBA9BF734BF
#define STRING                              0xE0D4E713F7819779
#define MAPTUTORIALTYPESARRAY               0x7EC5E3B4F43F8724
#define FLOAT                               0x518AD65EBA597493
#define UINT32                              0xD6AC6CD794D87CB9
#define INT32                               0x1D4F060F133F1E29
#define DOORLIFECOMPONENTSTATE              0x2567850CE806D4F8
#define BOOLEANARRAY                        0x8873943D8EB9C629
#define BOOLEAN                             0x2B1A8B33DE7B0C6A

/*
#define SECTION                            "(char []){0xBD, 0x14, 0x06, 0x45, 0x6F, 0x93, 0xA3, 0xF7}"
#define PROPERTYDICTIONARY                 "(char []){0xED, 0x21, 0xC6, 0x2C, 0x3C, 0x8D, 0x27, 0xD7}"
#define MISSIONLOGENTRIESARRAY             "(char []){0x4D, 0xE6, 0x1C, 0xA4, 0x71, 0xBE, 0xDC, 0xD2}"
#define GLOBALMAPICONSARRAY                "(char []){0xF0, 0x58, 0xF8, 0x69, 0xAB, 0x5A, 0x36, 0xF9}"
#define AREABOX                            "(char []){0xBD, 0xAA, 0x54, 0x36, 0x5A, 0xE5, 0x50, 0xF4}"
#define ENABLEDOCCLUDERCOLLIDERSDICTIONARY "(char []){0x0C, 0x50, 0x0C, 0xA1, 0xF3, 0xB5, 0x4C, 0x26}"
#define LIQUIDVOLUMESDICTIONARY            "(char []){0xC8, 0x97, 0xDE, 0x38, 0x44, 0x7F, 0x5C, 0xF2}"
#define ACTORTILESTATESDICTIONARY          "(char []){0x1D, 0x49, 0x2D, 0x17, 0xD6, 0x98, 0xEA, 0x76}"
#define OCCLUDERVIGNETTESDICTIONARY        "(char []){0xCA, 0xDF, 0x3A, 0x16, 0x3B, 0x60, 0x7F, 0x5B}"
#define MINIMAPVISIBILITYARRAY             "(char []){0x17, 0x92, 0xBC, 0x17, 0xAD, 0x71, 0x6D, 0x8D}"
#define CHECKPOINTOFFSET                   "(char []){0xBF, 0x8F, 0xE2, 0x51, 0xF1, 0x7E, 0xAD, 0x25}"
#define MINIMAPCUSTOMMARKERDICTIONARY      "(char []){0xBF, 0x45, 0x0D, 0x51, 0x4E, 0x81, 0xEB, 0x1B}"
#define VECTOR2                            "(char []){0xF4, 0x6A, 0xD9, 0x7D, 0xC5, 0x4A, 0x92, 0x59}"
#define VECTOR3                            "(char []){0xF9, 0x9B, 0x09, 0x21, 0x57, 0x33, 0x7B, 0x0D}"
#define STRINGARRAY                        "(char []){0x25, 0xE0, 0x94, 0x78, 0xB1, 0xD2, 0x6A, 0xCF}"
#define STRING256                          "(char []){0x31, 0xB8, 0x8B, 0xF3, 0x35, 0x48, 0xDE, 0x26}"
#define STRINGID                           "(char []){0xF6, 0xEA, 0x0D, 0xBA, 0x9B, 0xF7, 0x34, 0xBF}"
#define STRING                             "(char []){0xE0, 0xD4, 0xE7, 0x13, 0xF7, 0x81, 0x97, 0x79}"
#define MAPTUTORIALTYPESARRAY              "(char []){0x7E, 0xC5, 0xE3, 0xB4, 0xF4, 0x3F, 0x87, 0x24}"
#define FLOAT                              "(char []){0x51, 0x8A, 0xD6, 0x5E, 0xBA, 0x59, 0x74, 0x93}"
#define UINT32                             "(char []){0xD6, 0xAC, 0x6C, 0xD7, 0x94, 0xD8, 0x7C, 0xB9}"
#define INT32                              "(char []){0x1D, 0x4F, 0x06, 0x0F, 0x13, 0x3F, 0x1E, 0x29}"
#define DOORLIFECOMPONENTSTATE             "(char []){0x25, 0x67, 0x85, 0x0C, 0xE8, 0x06, 0xD4, 0xF8}"
#define BOOLEANARRAY                       "(char []){0x88, 0x73, 0x94, 0x3D, 0x8E, 0xB9, 0xC6, 0x29}"
#define BOOLEAN                            "(char []){0x2B, 0x1A, 0x8B, 0x33, 0xDE, 0x7B, 0x0C, 0x6A}"
*/

#endif
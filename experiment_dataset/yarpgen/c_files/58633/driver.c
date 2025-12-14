#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1344720280;
unsigned short var_1 = (unsigned short)40558;
long long int var_2 = 4592418677311115671LL;
unsigned long long int var_3 = 9903939683566911091ULL;
unsigned char var_4 = (unsigned char)160;
short var_5 = (short)21378;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 14324577844898253383ULL;
int var_8 = -392748515;
unsigned long long int var_9 = 8930358773768067430ULL;
unsigned short var_10 = (unsigned short)35827;
unsigned char var_11 = (unsigned char)8;
int zero = 0;
long long int var_12 = 5235801721566762682LL;
unsigned short var_13 = (unsigned short)46296;
signed char var_14 = (signed char)-68;
unsigned long long int var_15 = 13773297134516337328ULL;
unsigned long long int var_16 = 17264617809552759067ULL;
unsigned short var_17 = (unsigned short)4833;
unsigned short var_18 = (unsigned short)34150;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)32428;
unsigned char var_21 = (unsigned char)169;
int var_22 = -385737979;
signed char var_23 = (signed char)36;
unsigned char var_24 = (unsigned char)139;
unsigned long long int var_25 = 2901962176182807756ULL;
unsigned int var_26 = 3056801944U;
int var_27 = 326160573;
unsigned int var_28 = 36477671U;
signed char var_29 = (signed char)-97;
unsigned long long int var_30 = 10827622632965096336ULL;
unsigned char var_31 = (unsigned char)11;
_Bool var_32 = (_Bool)0;
unsigned char var_33 = (unsigned char)26;
_Bool var_34 = (_Bool)0;
unsigned char arr_12 [14] ;
unsigned int arr_34 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_40 [16] ;
signed char arr_45 [16] [16] ;
_Bool arr_46 [16] [16] [16] ;
unsigned char arr_47 [16] ;
unsigned int arr_54 [16] [16] ;
unsigned char arr_55 [16] ;
unsigned short arr_56 [16] ;
unsigned int arr_57 [16] [16] ;
unsigned short arr_65 [22] ;
unsigned char arr_70 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? (unsigned char)187 : (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 953255251U : 3520313603U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)50 : (signed char)27;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_47 [i_0] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_54 [i_0] [i_1] = (i_1 % 2 == 0) ? 3808084789U : 858767168U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? (unsigned char)19 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_56 [i_0] = (unsigned short)43033;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_57 [i_0] [i_1] = 2385191691U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_65 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63895 : (unsigned short)61193;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = (unsigned char)229;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_57 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_65 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_70 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

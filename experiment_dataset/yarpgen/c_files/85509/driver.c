#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)231;
long long int var_1 = -760583999076819426LL;
unsigned int var_2 = 2791524017U;
unsigned long long int var_3 = 16909640982916153296ULL;
unsigned long long int var_4 = 8876453242356130334ULL;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-116;
int var_7 = 1173188398;
unsigned int var_8 = 730904806U;
long long int var_9 = 3535405436798035056LL;
signed char var_10 = (signed char)65;
unsigned short var_13 = (unsigned short)62980;
long long int var_14 = 6008239317472263418LL;
unsigned long long int var_15 = 14532789075814843290ULL;
unsigned long long int var_17 = 14700987482996346145ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)8489;
unsigned int var_19 = 2387539109U;
short var_20 = (short)24446;
_Bool var_21 = (_Bool)0;
short var_22 = (short)17081;
short var_23 = (short)23257;
signed char var_24 = (signed char)-24;
long long int var_25 = -7048222821786554627LL;
unsigned long long int var_26 = 3779438697743805211ULL;
unsigned int var_27 = 4075597530U;
int var_28 = 1668057100;
short var_29 = (short)-15969;
unsigned short var_30 = (unsigned short)32963;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)51256;
unsigned short var_33 = (unsigned short)64920;
unsigned int var_34 = 1573974097U;
unsigned int var_35 = 3398491183U;
unsigned long long int var_36 = 14482939231376989975ULL;
short var_37 = (short)27732;
unsigned int var_38 = 2091001960U;
long long int var_39 = 7915635696888344123LL;
signed char var_40 = (signed char)-126;
signed char var_41 = (signed char)97;
int var_42 = 1743029691;
long long int var_43 = 7449387204589468803LL;
unsigned char var_44 = (unsigned char)3;
long long int var_45 = -8664072722762714316LL;
unsigned long long int var_46 = 17818211226718772708ULL;
unsigned int var_47 = 359407153U;
short var_48 = (short)26312;
short var_49 = (short)-14969;
long long int var_50 = 2173084902451879922LL;
int var_51 = 2094179987;
_Bool var_52 = (_Bool)1;
long long int var_53 = -8442379228040373647LL;
unsigned long long int var_54 = 16008319152470139041ULL;
short var_55 = (short)-22122;
unsigned int var_56 = 4061351832U;
unsigned short var_57 = (unsigned short)18212;
unsigned long long int var_58 = 5152407018584221190ULL;
_Bool var_59 = (_Bool)1;
unsigned long long int var_60 = 12859183123620678780ULL;
long long int var_61 = 1231974031294363891LL;
unsigned int var_62 = 2918603526U;
signed char var_63 = (signed char)102;
_Bool var_64 = (_Bool)0;
unsigned short var_65 = (unsigned short)27901;
long long int arr_0 [24] ;
long long int arr_1 [24] ;
unsigned int arr_2 [11] ;
unsigned short arr_3 [11] [11] ;
int arr_4 [11] [11] ;
_Bool arr_8 [11] [11] [11] ;
unsigned int arr_9 [11] [11] [11] ;
_Bool arr_10 [11] [11] [11] [11] ;
long long int arr_11 [11] [11] [11] [11] ;
unsigned short arr_16 [11] ;
unsigned int arr_18 [11] ;
signed char arr_21 [11] [11] [11] ;
signed char arr_22 [11] ;
short arr_24 [11] [11] ;
long long int arr_29 [11] [11] [11] [11] ;
unsigned int arr_30 [11] [11] [11] [11] [11] [11] ;
signed char arr_32 [11] [11] [11] [11] [11] ;
unsigned short arr_33 [11] [11] [11] [11] [11] ;
int arr_34 [11] [11] ;
short arr_35 [11] [11] [11] ;
signed char arr_36 [11] [11] [11] [11] ;
_Bool arr_37 [11] [11] [11] [11] [11] ;
short arr_40 [11] [11] [11] [11] [11] [11] ;
unsigned int arr_52 [11] [11] [11] [11] [11] ;
long long int arr_53 [11] ;
_Bool arr_54 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5218391937685327182LL : 1493161553610678918LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 8783468468546343179LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1347115792U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)63400;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 1955880597;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1531787208U : 2501508205U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -8986350727290329519LL : 6348586411572210378LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_16 [i_0] = (unsigned short)62333;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 3095943981U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_22 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-28256;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -3981440097900787172LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1275525721U : 1209504748U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)35 : (signed char)-44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)48735;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_34 [i_0] [i_1] = (i_0 % 2 == 0) ? 391906579 : -1710043350;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (short)10750;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)16473;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_52 [i_0] [i_1] [i_2] [i_3] [i_4] = 2919303280U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_53 [i_0] = 4475607374993807040LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_54 [i_0] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

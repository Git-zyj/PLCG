#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)66;
unsigned short var_2 = (unsigned short)56814;
signed char var_3 = (signed char)113;
unsigned int var_4 = 3615541813U;
unsigned long long int var_5 = 3892564975701724653ULL;
unsigned int var_6 = 3961925750U;
signed char var_7 = (signed char)-4;
_Bool var_8 = (_Bool)0;
long long int var_9 = -2066375468407272634LL;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-14569;
int var_13 = 1976403710;
int zero = 0;
signed char var_15 = (signed char)-19;
unsigned char var_16 = (unsigned char)77;
unsigned int var_17 = 2940269098U;
int var_18 = 1062727233;
short var_19 = (short)3674;
signed char var_20 = (signed char)-115;
long long int var_21 = 3439835193128479644LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = 7299726319632912358LL;
long long int var_24 = -8574537222816175460LL;
unsigned char var_25 = (unsigned char)74;
signed char var_26 = (signed char)124;
unsigned long long int var_27 = 2089105647311750966ULL;
signed char var_28 = (signed char)-64;
short var_29 = (short)-28058;
unsigned char var_30 = (unsigned char)162;
unsigned int arr_0 [13] [13] ;
signed char arr_2 [13] ;
unsigned int arr_3 [13] [13] [13] ;
int arr_8 [13] [13] ;
short arr_12 [13] [13] [13] ;
long long int arr_19 [15] ;
signed char arr_20 [15] [15] ;
unsigned long long int arr_22 [20] ;
unsigned int arr_23 [20] [20] ;
unsigned int arr_24 [20] [20] ;
unsigned int arr_25 [15] [15] ;
unsigned char arr_26 [15] ;
short arr_28 [15] ;
unsigned short arr_29 [15] ;
int arr_30 [15] ;
long long int arr_32 [15] ;
signed char arr_42 [15] [15] [15] ;
unsigned long long int arr_5 [13] ;
long long int arr_6 [13] [13] [13] ;
short arr_10 [13] [13] [13] ;
int arr_17 [13] [13] ;
short arr_18 [13] [13] ;
int arr_21 [15] [15] ;
signed char arr_27 [15] ;
int arr_33 [15] [15] [15] ;
long long int arr_34 [15] ;
_Bool arr_37 [15] [15] [15] ;
unsigned short arr_38 [15] [15] [15] ;
unsigned long long int arr_41 [15] ;
unsigned short arr_45 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 1136736330U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 342092295U : 1610963482U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = -962439238;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (short)9765;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = -4689241418815461983LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 8072032370839787537ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_23 [i_0] [i_1] = 1272193813U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = 928627534U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_25 [i_0] [i_1] = 3285731035U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_26 [i_0] = (unsigned char)126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = (short)-229;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_29 [i_0] = (unsigned short)910;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = -595585503;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_32 [i_0] = 6409734901419211193LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1415584151901146808ULL : 1802892120922039526ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1230349981810340086LL : 3550941013973199961LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)-31687;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 403478600 : -116447224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-1103 : (short)24057;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = 1133668322;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_27 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -659362343;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = 4480415091623295124LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (unsigned short)4870;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_41 [i_0] = 4786624663784238864ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_45 [i_0] [i_1] = (unsigned short)62497;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_38 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

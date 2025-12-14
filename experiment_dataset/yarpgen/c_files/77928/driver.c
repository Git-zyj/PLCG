#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15677426490204583930ULL;
unsigned short var_3 = (unsigned short)64542;
signed char var_6 = (signed char)-85;
int var_8 = 780513774;
unsigned int var_10 = 4035635064U;
long long int var_13 = -3346320056958623220LL;
long long int var_14 = -4597642142800830822LL;
unsigned char var_18 = (unsigned char)157;
int zero = 0;
unsigned int var_20 = 2928762319U;
_Bool var_21 = (_Bool)0;
int var_22 = 1387340101;
unsigned char var_23 = (unsigned char)27;
unsigned long long int var_24 = 2280246178523507194ULL;
int var_25 = 1968068464;
int var_26 = -2128681904;
unsigned char var_27 = (unsigned char)123;
unsigned char var_28 = (unsigned char)186;
unsigned int var_29 = 2016857790U;
unsigned char var_30 = (unsigned char)197;
long long int arr_0 [11] [11] ;
unsigned short arr_1 [11] [11] ;
int arr_4 [21] ;
int arr_5 [21] ;
unsigned short arr_6 [21] ;
unsigned char arr_7 [21] [21] ;
int arr_20 [13] ;
int arr_29 [13] [13] [13] ;
unsigned char arr_2 [11] ;
unsigned int arr_3 [11] ;
unsigned char arr_8 [21] ;
_Bool arr_9 [21] [21] ;
int arr_15 [20] ;
unsigned char arr_23 [13] ;
int arr_24 [13] ;
signed char arr_27 [13] ;
int arr_31 [13] [13] [13] [13] ;
_Bool arr_32 [13] ;
unsigned int arr_33 [13] [13] ;
unsigned int arr_36 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = -3655710958054622329LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)12798;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 1354961528;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1295687372;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (unsigned short)21133;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_20 [i_0] = -1375923028;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = 758671054;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned char)249;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = 2864132842U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (unsigned char)108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_15 [i_0] = 1752325049;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_23 [i_0] = (unsigned char)57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = 541053430;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_27 [i_0] = (signed char)-2;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 462569908 : -25453281;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_33 [i_0] [i_1] = 4108487689U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_36 [i_0] = 2425055721U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

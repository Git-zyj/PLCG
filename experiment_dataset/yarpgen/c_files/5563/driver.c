#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)-69;
unsigned long long int var_2 = 3056319200811266520ULL;
int var_3 = 238592537;
unsigned char var_4 = (unsigned char)199;
unsigned char var_5 = (unsigned char)224;
int var_6 = 1660210713;
int var_7 = -1447942006;
long long int var_8 = -146680906837501043LL;
int var_10 = 202407951;
int var_11 = -574301062;
int var_12 = 177313205;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 8395711643685067030ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)189;
unsigned char var_18 = (unsigned char)74;
signed char var_19 = (signed char)-27;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)21022;
int var_22 = 1632089511;
signed char var_23 = (signed char)-34;
unsigned long long int var_24 = 13644293235526933212ULL;
unsigned long long int var_25 = 4055608755332675912ULL;
signed char var_26 = (signed char)72;
unsigned char arr_0 [19] ;
long long int arr_1 [19] ;
int arr_2 [19] ;
long long int arr_3 [19] [19] [19] ;
long long int arr_5 [19] [19] [19] ;
unsigned char arr_7 [19] ;
long long int arr_8 [19] [19] ;
_Bool arr_9 [19] [19] ;
unsigned long long int arr_10 [19] [19] [19] ;
signed char arr_11 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3315285504052969706LL : 888673252966320977LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -869737150;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 7926338041051720596LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 2712339545995472512LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)216 : (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = -7563221757931981322LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2209329458333254124ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-88 : (signed char)63;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

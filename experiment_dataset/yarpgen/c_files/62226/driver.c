#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -973209079;
short var_2 = (short)-2324;
short var_3 = (short)12896;
short var_4 = (short)-10898;
unsigned long long int var_5 = 4242606333289197431ULL;
unsigned short var_6 = (unsigned short)39365;
unsigned char var_7 = (unsigned char)29;
unsigned char var_8 = (unsigned char)131;
unsigned char var_9 = (unsigned char)33;
long long int var_10 = 268754729578452286LL;
signed char var_11 = (signed char)81;
int zero = 0;
int var_12 = -505920790;
short var_13 = (short)17983;
unsigned long long int var_14 = 587900704432307811ULL;
unsigned int var_15 = 3565190806U;
int var_16 = 878898823;
signed char var_17 = (signed char)95;
short var_18 = (short)7338;
int var_19 = 431945366;
unsigned char arr_0 [13] [13] ;
int arr_1 [13] ;
signed char arr_2 [15] ;
int arr_3 [15] ;
signed char arr_7 [15] [15] [15] ;
signed char arr_10 [15] [15] [15] ;
int arr_11 [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)91 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -1089667239;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-48 : (signed char)-104;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -826550093 : 1896487935;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)118 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 39507464 : -931692048;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

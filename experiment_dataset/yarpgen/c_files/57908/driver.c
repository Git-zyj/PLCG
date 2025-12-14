#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -558944026;
long long int var_2 = -1506729866216794417LL;
unsigned int var_3 = 1910753303U;
unsigned short var_4 = (unsigned short)58597;
unsigned long long int var_6 = 9832676296410177316ULL;
signed char var_7 = (signed char)-69;
signed char var_14 = (signed char)124;
unsigned short var_15 = (unsigned short)47657;
_Bool var_17 = (_Bool)0;
int var_18 = -468542807;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)12902;
unsigned long long int var_21 = 3674116890421577783ULL;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)1380;
unsigned short var_24 = (unsigned short)17168;
unsigned long long int arr_0 [23] ;
int arr_2 [23] ;
int arr_4 [23] [23] [23] ;
int arr_8 [23] [23] [23] ;
unsigned long long int arr_10 [23] ;
unsigned char arr_11 [23] [23] ;
unsigned short arr_21 [22] ;
unsigned char arr_6 [23] [23] ;
int arr_15 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 7117259844692154489ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -846112085;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 1790755848;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -954664755 : -1508466715;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 16640979369806248366ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_21 [i_0] = (unsigned short)15907;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)87 : (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 226142216 : 1461897044;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

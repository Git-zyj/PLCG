#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
_Bool var_1 = (_Bool)0;
int var_2 = 198458817;
unsigned long long int var_4 = 1756839676409124581ULL;
unsigned int var_7 = 1990692255U;
unsigned int var_8 = 515204524U;
unsigned short var_9 = (unsigned short)24291;
unsigned short var_11 = (unsigned short)10685;
int zero = 0;
signed char var_12 = (signed char)-83;
signed char var_13 = (signed char)-47;
int var_14 = 1000797374;
int var_15 = 679615447;
unsigned int var_16 = 2817255255U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)65212;
int var_19 = 1381524641;
unsigned char var_20 = (unsigned char)53;
signed char var_21 = (signed char)74;
unsigned long long int arr_0 [13] ;
short arr_4 [13] ;
_Bool arr_8 [13] [13] [13] [13] [13] [13] ;
unsigned char arr_12 [13] [13] [13] ;
long long int arr_18 [13] [13] [13] [13] ;
int arr_25 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 17328362860881402569ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)-32452;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = -7342375415051985575LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_25 [i_0] = 1361904155;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

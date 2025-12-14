#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4628477474692299980ULL;
signed char var_5 = (signed char)-13;
signed char var_6 = (signed char)8;
unsigned int var_7 = 1534819955U;
signed char var_8 = (signed char)-71;
_Bool var_10 = (_Bool)1;
int var_11 = 751398540;
unsigned long long int var_12 = 17192608414767630071ULL;
int zero = 0;
short var_14 = (short)9523;
unsigned int var_15 = 492349694U;
signed char var_16 = (signed char)-11;
unsigned int var_17 = 2000263530U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)50;
int var_20 = -1758018311;
unsigned int var_21 = 2259972570U;
unsigned long long int var_22 = 16955415453186898283ULL;
unsigned long long int var_23 = 18433223239117287942ULL;
signed char var_24 = (signed char)-84;
unsigned char var_25 = (unsigned char)231;
unsigned long long int var_26 = 6475839484315166669ULL;
unsigned char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] [16] ;
signed char arr_2 [16] ;
signed char arr_3 [23] ;
signed char arr_4 [23] ;
unsigned char arr_7 [15] ;
int arr_9 [15] ;
short arr_11 [18] ;
unsigned int arr_12 [18] [18] ;
unsigned long long int arr_13 [18] [18] ;
int arr_15 [18] [18] [18] ;
_Bool arr_5 [23] ;
unsigned int arr_6 [23] ;
int arr_10 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 5640564156782772048ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (signed char)-120;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)37;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)161 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 1036505969 : 26159878;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (short)7512;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = 1826774122U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 1901959463989762332ULL : 12336467527568855353ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -662961111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 1681876127U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -1969542831 : 1574524560;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

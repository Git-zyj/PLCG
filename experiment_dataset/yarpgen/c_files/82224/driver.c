#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17160;
int var_1 = 614850827;
int var_2 = -726881032;
int var_4 = 1187258023;
long long int var_5 = -8430977390438780878LL;
unsigned long long int var_6 = 12233251792164623663ULL;
unsigned short var_7 = (unsigned short)58386;
short var_9 = (short)-8194;
unsigned long long int var_11 = 11049179125652051003ULL;
int zero = 0;
signed char var_13 = (signed char)-87;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 5192360261217593222ULL;
unsigned short var_16 = (unsigned short)31619;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-96;
unsigned long long int arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
short arr_2 [20] ;
signed char arr_3 [20] ;
_Bool arr_4 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 1426242852924885741ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)28501;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

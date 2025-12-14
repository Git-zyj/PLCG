#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13581184370644122017ULL;
int var_4 = -1343290335;
_Bool var_5 = (_Bool)0;
unsigned int var_7 = 226860326U;
unsigned int var_8 = 1631776748U;
short var_9 = (short)-4725;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_14 = (short)-30420;
signed char var_15 = (signed char)94;
unsigned char var_16 = (unsigned char)210;
short var_17 = (short)13385;
long long int var_18 = -464878325294870255LL;
unsigned short var_19 = (unsigned short)6426;
short arr_0 [25] [25] ;
int arr_1 [25] ;
_Bool arr_3 [25] [25] ;
unsigned int arr_4 [25] [25] ;
long long int arr_5 [25] [25] [25] [25] ;
short arr_7 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (short)1388;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -403694542;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 3322622255U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -104477722208426837LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-32323;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1040529844U;
unsigned char var_1 = (unsigned char)169;
short var_3 = (short)-11918;
long long int var_4 = -8184899674233374259LL;
unsigned short var_5 = (unsigned short)49374;
unsigned long long int var_6 = 4052903876620057823ULL;
signed char var_7 = (signed char)20;
unsigned long long int var_12 = 12696413172115122164ULL;
int zero = 0;
unsigned long long int var_14 = 955997526772675476ULL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)61;
unsigned int var_18 = 3005560817U;
long long int var_19 = -4154475043847906115LL;
unsigned long long int var_20 = 15721480951793525393ULL;
unsigned int var_21 = 4185483331U;
short arr_2 [16] ;
unsigned short arr_6 [16] ;
long long int arr_7 [16] [16] [16] [16] ;
_Bool arr_8 [16] [16] [16] [16] [16] ;
unsigned long long int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)16596;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (unsigned short)1881;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -6867579203445473512LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 16880955718363525811ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

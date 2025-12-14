#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59479;
signed char var_2 = (signed char)-31;
unsigned long long int var_4 = 2983609050879891679ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -5275157169073247588LL;
unsigned char var_7 = (unsigned char)189;
unsigned long long int var_9 = 6189942318124208545ULL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)86;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 6015549508566855099ULL;
unsigned char var_18 = (unsigned char)22;
unsigned int var_19 = 216457472U;
unsigned short var_20 = (unsigned short)50802;
unsigned char var_21 = (unsigned char)246;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned long long int arr_3 [23] ;
unsigned int arr_5 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)42117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)63555;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 7418738085564603854ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 1094135332U : 948449617U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

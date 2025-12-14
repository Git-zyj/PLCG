#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_2 = 1814117264;
unsigned short var_3 = (unsigned short)13050;
unsigned char var_8 = (unsigned char)145;
unsigned char var_13 = (unsigned char)244;
int zero = 0;
unsigned short var_17 = (unsigned short)30229;
long long int var_18 = -848323491611202258LL;
unsigned long long int var_19 = 14455992881684263559ULL;
unsigned short var_20 = (unsigned short)55725;
unsigned int var_21 = 439869212U;
unsigned int arr_1 [10] ;
_Bool arr_5 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 65852660U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
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

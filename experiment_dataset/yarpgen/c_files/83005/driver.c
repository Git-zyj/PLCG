#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 5080879012908504321LL;
signed char var_10 = (signed char)-108;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)42073;
int var_13 = -752122997;
int zero = 0;
unsigned char var_14 = (unsigned char)30;
signed char var_15 = (signed char)-73;
short var_16 = (short)-9566;
unsigned int var_17 = 72336540U;
unsigned long long int arr_3 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = 11185585811158679549ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

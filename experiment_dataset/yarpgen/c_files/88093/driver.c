#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 2755994468U;
unsigned char var_13 = (unsigned char)186;
unsigned short var_17 = (unsigned short)2629;
int zero = 0;
unsigned char var_20 = (unsigned char)83;
unsigned short var_21 = (unsigned short)2590;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 821321504U;
int arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 801651561 : 194059048;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

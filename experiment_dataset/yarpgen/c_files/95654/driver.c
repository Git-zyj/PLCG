#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3149822412U;
short var_2 = (short)-6642;
int var_7 = -1605495574;
unsigned short var_9 = (unsigned short)63752;
short var_10 = (short)21274;
short var_13 = (short)-14710;
int zero = 0;
unsigned short var_16 = (unsigned short)21588;
int var_17 = 856818174;
int var_18 = 974847554;
int arr_4 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 1618557585;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

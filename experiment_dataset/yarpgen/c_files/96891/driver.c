#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)38813;
int var_9 = -247910595;
unsigned short var_10 = (unsigned short)47646;
unsigned char var_13 = (unsigned char)137;
int zero = 0;
unsigned int var_14 = 2467645455U;
unsigned int var_15 = 776711488U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1727872238U;
unsigned int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 1018261255U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

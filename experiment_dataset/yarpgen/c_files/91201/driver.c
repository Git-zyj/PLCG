#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)196;
unsigned int var_5 = 553684724U;
long long int var_7 = 2038286009676258210LL;
unsigned char var_9 = (unsigned char)19;
unsigned char var_13 = (unsigned char)42;
short var_16 = (short)2748;
int zero = 0;
unsigned char var_20 = (unsigned char)10;
unsigned char var_21 = (unsigned char)249;
long long int var_22 = 1199650799454043126LL;
long long int var_23 = -981761959231940313LL;
short arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (short)1833;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

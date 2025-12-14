#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-29643;
unsigned char var_7 = (unsigned char)252;
short var_15 = (short)12415;
unsigned long long int var_17 = 8817121493259101643ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)64884;
short var_20 = (short)345;
short var_21 = (short)7724;
unsigned char var_22 = (unsigned char)46;
short arr_0 [16] ;
short arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-25355 : (short)20950;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)6948;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

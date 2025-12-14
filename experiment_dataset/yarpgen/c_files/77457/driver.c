#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)25083;
unsigned char var_4 = (unsigned char)7;
long long int var_5 = 802201860391502763LL;
unsigned char var_10 = (unsigned char)134;
short var_16 = (short)-248;
unsigned int var_17 = 2686041783U;
unsigned short var_18 = (unsigned short)750;
int zero = 0;
unsigned short var_20 = (unsigned short)45287;
short var_21 = (short)27150;
unsigned char var_22 = (unsigned char)123;
unsigned long long int var_23 = 1623457877588310517ULL;
unsigned char var_24 = (unsigned char)251;
unsigned short var_25 = (unsigned short)953;
short arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)5960;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

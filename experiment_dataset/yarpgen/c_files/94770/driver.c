#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned short var_1 = (unsigned short)18292;
unsigned short var_7 = (unsigned short)15765;
unsigned long long int var_9 = 15222357120721803343ULL;
int zero = 0;
short var_13 = (short)24466;
unsigned long long int var_14 = 10075620263302983126ULL;
short var_15 = (short)-23872;
unsigned short var_16 = (unsigned short)970;
short var_17 = (short)-16621;
unsigned char var_18 = (unsigned char)39;
unsigned int var_19 = 1878433961U;
unsigned short arr_0 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)15069;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

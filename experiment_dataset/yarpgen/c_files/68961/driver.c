#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12455261804259972679ULL;
int var_4 = -427011672;
signed char var_7 = (signed char)-87;
unsigned char var_9 = (unsigned char)37;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
short var_14 = (short)10616;
signed char var_15 = (signed char)122;
signed char var_16 = (signed char)12;
short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (short)6997;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-5568;
int var_12 = -2112781259;
long long int var_15 = -7232582033824100328LL;
unsigned char var_16 = (unsigned char)195;
signed char var_17 = (signed char)-55;
int zero = 0;
unsigned char var_19 = (unsigned char)218;
int var_20 = -1165817957;
unsigned char var_21 = (unsigned char)205;
unsigned int arr_0 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 1273792607U;
}

void checksum() {
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

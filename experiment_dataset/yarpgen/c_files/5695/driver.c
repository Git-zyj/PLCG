#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6736120293363090940ULL;
short var_6 = (short)1020;
unsigned char var_10 = (unsigned char)103;
int zero = 0;
int var_12 = -1429169322;
signed char var_13 = (signed char)82;
unsigned short var_14 = (unsigned short)51637;
unsigned int var_15 = 2211441658U;
unsigned int var_16 = 907824101U;
unsigned char var_17 = (unsigned char)49;
short arr_0 [15] [15] ;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-15023;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-13872;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

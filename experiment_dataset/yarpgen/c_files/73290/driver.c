#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)19958;
unsigned short var_2 = (unsigned short)11153;
unsigned int var_4 = 3123895401U;
unsigned int var_6 = 3134870567U;
int var_9 = -909029158;
unsigned short var_10 = (unsigned short)15521;
unsigned short var_12 = (unsigned short)21347;
unsigned int var_14 = 3185251599U;
int zero = 0;
unsigned short var_16 = (unsigned short)46472;
unsigned char var_17 = (unsigned char)91;
unsigned short var_18 = (unsigned short)58615;
unsigned int var_19 = 364736596U;
unsigned int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2184794894U : 1670433487U;
}

void checksum() {
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

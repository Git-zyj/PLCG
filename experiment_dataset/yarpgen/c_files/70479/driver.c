#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1988293725U;
_Bool var_1 = (_Bool)0;
unsigned int var_5 = 3467665181U;
unsigned short var_6 = (unsigned short)259;
unsigned int var_9 = 2667949877U;
unsigned char var_10 = (unsigned char)247;
int var_11 = -758106248;
unsigned long long int var_12 = 17487186225585962495ULL;
int var_14 = -1036416942;
short var_15 = (short)-27143;
unsigned short var_16 = (unsigned short)2920;
int zero = 0;
unsigned short var_17 = (unsigned short)17983;
unsigned short var_18 = (unsigned short)37664;
long long int var_19 = 492269814311382224LL;
short var_20 = (short)31417;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

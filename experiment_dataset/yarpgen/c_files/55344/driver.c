#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 254012303U;
unsigned char var_1 = (unsigned char)248;
unsigned long long int var_3 = 18180196528235386638ULL;
unsigned short var_4 = (unsigned short)21163;
unsigned short var_6 = (unsigned short)48511;
long long int var_8 = 3058502835573722368LL;
unsigned short var_9 = (unsigned short)7424;
unsigned short var_11 = (unsigned short)34078;
int zero = 0;
unsigned int var_12 = 282022746U;
short var_13 = (short)-11677;
unsigned short var_14 = (unsigned short)53002;
unsigned char var_15 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

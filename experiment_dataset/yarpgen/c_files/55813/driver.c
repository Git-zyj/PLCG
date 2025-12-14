#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)45471;
short var_2 = (short)-28745;
signed char var_10 = (signed char)-26;
int zero = 0;
int var_14 = -1096573806;
long long int var_15 = -7410148007463738862LL;
unsigned short var_16 = (unsigned short)44899;
signed char var_17 = (signed char)7;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_6 = (unsigned char)100;
int var_9 = 967530053;
unsigned long long int var_10 = 11570101031562057609ULL;
unsigned char var_11 = (unsigned char)238;
int zero = 0;
unsigned char var_14 = (unsigned char)158;
short var_15 = (short)10672;
int var_16 = -2147194390;
void init() {
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

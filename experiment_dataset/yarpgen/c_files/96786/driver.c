#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)122;
int var_7 = 523553684;
unsigned int var_8 = 2967289679U;
unsigned short var_9 = (unsigned short)42635;
long long int var_10 = 7556031194414578330LL;
unsigned char var_11 = (unsigned char)83;
int zero = 0;
long long int var_12 = -7245352994853895870LL;
unsigned char var_13 = (unsigned char)124;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

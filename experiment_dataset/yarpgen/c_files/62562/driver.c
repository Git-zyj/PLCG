#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1751417771U;
signed char var_7 = (signed char)-106;
unsigned char var_14 = (unsigned char)7;
unsigned short var_15 = (unsigned short)41765;
long long int var_16 = -5010613354615946963LL;
int zero = 0;
unsigned short var_19 = (unsigned short)46651;
unsigned short var_20 = (unsigned short)38935;
void init() {
}

void checksum() {
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

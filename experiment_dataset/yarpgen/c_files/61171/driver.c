#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)227;
unsigned long long int var_5 = 12306804144603414360ULL;
signed char var_9 = (signed char)99;
unsigned char var_10 = (unsigned char)44;
signed char var_13 = (signed char)56;
unsigned long long int var_14 = 1902157266665789927ULL;
int zero = 0;
signed char var_15 = (signed char)97;
unsigned char var_16 = (unsigned char)202;
void init() {
}

void checksum() {
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

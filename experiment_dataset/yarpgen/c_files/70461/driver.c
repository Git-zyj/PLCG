#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)2066;
int var_7 = 287146901;
unsigned char var_10 = (unsigned char)103;
unsigned char var_13 = (unsigned char)191;
int zero = 0;
unsigned int var_14 = 52742549U;
unsigned int var_15 = 317262549U;
int var_16 = 1471281076;
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

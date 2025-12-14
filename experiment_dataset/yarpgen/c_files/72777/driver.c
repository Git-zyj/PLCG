#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)65;
unsigned long long int var_2 = 5000166112111332326ULL;
unsigned char var_10 = (unsigned char)187;
unsigned int var_11 = 2341972060U;
short var_13 = (short)-12758;
int zero = 0;
unsigned char var_14 = (unsigned char)43;
unsigned char var_15 = (unsigned char)72;
unsigned char var_16 = (unsigned char)158;
unsigned int var_17 = 2492316534U;
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

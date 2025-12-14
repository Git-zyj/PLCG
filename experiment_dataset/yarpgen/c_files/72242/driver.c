#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2118797113U;
unsigned char var_7 = (unsigned char)103;
unsigned char var_11 = (unsigned char)189;
int zero = 0;
unsigned int var_14 = 1487157058U;
unsigned char var_15 = (unsigned char)151;
short var_16 = (short)11579;
unsigned int var_17 = 525430708U;
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

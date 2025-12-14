#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-26772;
int var_7 = 1586459311;
int var_9 = 289401113;
unsigned int var_10 = 1418912790U;
int zero = 0;
unsigned short var_11 = (unsigned short)39635;
unsigned short var_12 = (unsigned short)1780;
unsigned char var_13 = (unsigned char)66;
unsigned char var_14 = (unsigned char)193;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2445571587786618262LL;
unsigned int var_11 = 644419049U;
unsigned short var_16 = (unsigned short)14444;
int zero = 0;
unsigned char var_19 = (unsigned char)236;
unsigned short var_20 = (unsigned short)45063;
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

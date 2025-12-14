#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)204;
int var_10 = -1887247533;
unsigned long long int var_11 = 11315760558040881173ULL;
int zero = 0;
unsigned long long int var_15 = 2975195341942500935ULL;
unsigned short var_16 = (unsigned short)48378;
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

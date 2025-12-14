#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3815;
unsigned char var_5 = (unsigned char)154;
unsigned int var_7 = 4235395576U;
unsigned char var_14 = (unsigned char)106;
int zero = 0;
signed char var_15 = (signed char)35;
unsigned long long int var_16 = 2563980417968765800ULL;
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

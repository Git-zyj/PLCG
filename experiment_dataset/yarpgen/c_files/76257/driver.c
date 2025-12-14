#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 672064341;
unsigned char var_7 = (unsigned char)107;
int var_9 = 339951687;
signed char var_10 = (signed char)-112;
unsigned char var_11 = (unsigned char)158;
int zero = 0;
signed char var_12 = (signed char)-123;
signed char var_13 = (signed char)-100;
unsigned char var_14 = (unsigned char)61;
void init() {
}

void checksum() {
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

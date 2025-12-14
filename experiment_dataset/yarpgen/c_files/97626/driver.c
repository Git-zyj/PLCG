#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)61;
unsigned char var_1 = (unsigned char)152;
unsigned int var_2 = 3665127713U;
int var_8 = 1102805186;
int zero = 0;
unsigned char var_10 = (unsigned char)25;
unsigned long long int var_11 = 3050544024504784927ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

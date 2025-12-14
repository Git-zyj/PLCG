#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)233;
unsigned int var_18 = 3952049696U;
unsigned char var_19 = (unsigned char)189;
int zero = 0;
unsigned long long int var_20 = 17243930801761393480ULL;
unsigned int var_21 = 4071702465U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

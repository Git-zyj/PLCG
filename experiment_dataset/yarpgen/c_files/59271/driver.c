#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3376408397099331210ULL;
signed char var_2 = (signed char)-117;
unsigned char var_5 = (unsigned char)165;
unsigned int var_9 = 1699712396U;
unsigned char var_16 = (unsigned char)249;
int zero = 0;
int var_20 = 1095015136;
unsigned int var_21 = 573618710U;
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

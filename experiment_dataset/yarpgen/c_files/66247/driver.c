#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49915;
short var_1 = (short)30037;
unsigned long long int var_3 = 541115293280423123ULL;
unsigned int var_7 = 3795886853U;
int zero = 0;
short var_12 = (short)-10209;
unsigned char var_13 = (unsigned char)70;
long long int var_14 = -5905187484854063298LL;
short var_15 = (short)-955;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

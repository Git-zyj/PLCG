#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22246;
_Bool var_8 = (_Bool)0;
unsigned long long int var_15 = 17316122707713131936ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)17;
unsigned int var_21 = 1800294221U;
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

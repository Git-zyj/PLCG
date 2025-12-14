#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)28;
signed char var_12 = (signed char)-78;
short var_17 = (short)13241;
int zero = 0;
unsigned short var_20 = (unsigned short)198;
unsigned long long int var_21 = 16516365894873708172ULL;
signed char var_22 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

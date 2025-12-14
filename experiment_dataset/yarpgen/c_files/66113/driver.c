#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)140;
short var_8 = (short)6006;
int zero = 0;
unsigned int var_15 = 38036059U;
long long int var_16 = -7988864603761985018LL;
long long int var_17 = 2187311198295170451LL;
signed char var_18 = (signed char)29;
unsigned char var_19 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

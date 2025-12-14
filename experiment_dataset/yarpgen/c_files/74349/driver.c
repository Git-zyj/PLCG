#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7158;
short var_3 = (short)-19614;
unsigned int var_5 = 2165824570U;
int var_7 = 1111211234;
unsigned int var_10 = 3536839303U;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)17183;
unsigned char var_16 = (unsigned char)88;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

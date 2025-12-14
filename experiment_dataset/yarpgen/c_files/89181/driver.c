#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)63073;
short var_9 = (short)-26536;
long long int var_12 = -6838741388812447236LL;
int zero = 0;
unsigned short var_16 = (unsigned short)54981;
int var_17 = 1601578565;
signed char var_18 = (signed char)-89;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

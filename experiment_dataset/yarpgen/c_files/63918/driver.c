#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)3286;
unsigned long long int var_3 = 9919298222920886415ULL;
unsigned short var_8 = (unsigned short)7214;
signed char var_10 = (signed char)33;
int zero = 0;
short var_11 = (short)-25724;
unsigned char var_12 = (unsigned char)197;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2072870926;
unsigned char var_7 = (unsigned char)30;
int var_14 = 2056432575;
int zero = 0;
short var_18 = (short)-16574;
short var_19 = (short)-20726;
unsigned short var_20 = (unsigned short)40753;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

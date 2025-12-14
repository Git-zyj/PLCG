#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2773966783U;
signed char var_6 = (signed char)119;
int var_8 = -1716479892;
short var_16 = (short)18876;
short var_18 = (short)-6265;
int zero = 0;
signed char var_20 = (signed char)118;
unsigned short var_21 = (unsigned short)53757;
unsigned short var_22 = (unsigned short)46982;
int var_23 = -211880067;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

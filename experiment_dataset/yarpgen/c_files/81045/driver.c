#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)213;
signed char var_17 = (signed char)126;
unsigned char var_18 = (unsigned char)221;
short var_19 = (short)4611;
int zero = 0;
unsigned int var_20 = 383579244U;
unsigned char var_21 = (unsigned char)58;
unsigned short var_22 = (unsigned short)48944;
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

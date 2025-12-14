#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)114;
unsigned short var_17 = (unsigned short)6961;
int zero = 0;
unsigned short var_18 = (unsigned short)4659;
short var_19 = (short)23134;
short var_20 = (short)-12928;
unsigned short var_21 = (unsigned short)26734;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-86;
short var_5 = (short)27978;
short var_8 = (short)-15799;
unsigned short var_12 = (unsigned short)24798;
int zero = 0;
unsigned short var_13 = (unsigned short)48641;
unsigned short var_14 = (unsigned short)58006;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)22;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

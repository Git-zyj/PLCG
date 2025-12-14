#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)21147;
long long int var_6 = -6912518828405381805LL;
long long int var_8 = 592743444873044369LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-15340;
int var_12 = -1918237066;
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

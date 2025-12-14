#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1308238022U;
unsigned long long int var_4 = 3611126392541825650ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)55440;
int zero = 0;
signed char var_14 = (signed char)44;
unsigned int var_15 = 3328537418U;
short var_16 = (short)-25984;
int var_17 = -1840258393;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

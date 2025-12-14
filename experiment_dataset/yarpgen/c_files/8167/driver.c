#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
short var_9 = (short)-13431;
long long int var_10 = -2673934740810834944LL;
unsigned char var_12 = (unsigned char)123;
int zero = 0;
int var_15 = -375578860;
unsigned short var_16 = (unsigned short)32249;
long long int var_17 = -511544718159744705LL;
void init() {
}

void checksum() {
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

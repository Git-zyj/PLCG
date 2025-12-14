#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1934105687U;
long long int var_5 = 3758176118348746068LL;
unsigned short var_9 = (unsigned short)45653;
short var_13 = (short)22059;
int zero = 0;
unsigned int var_14 = 2154187444U;
int var_15 = 690905031;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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

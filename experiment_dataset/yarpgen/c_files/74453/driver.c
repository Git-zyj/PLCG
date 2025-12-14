#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)20;
_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)34647;
unsigned int var_9 = 4095883187U;
int zero = 0;
unsigned int var_11 = 3340669168U;
short var_12 = (short)-9475;
int var_13 = -1608741244;
int var_14 = 1581943775;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1237909931;
unsigned int var_11 = 1730819635U;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_15 = (short)-15744;
signed char var_16 = (signed char)-88;
long long int var_17 = 4170855154837271082LL;
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

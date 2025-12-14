#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3965;
int var_5 = -1447132772;
unsigned int var_11 = 2365280539U;
signed char var_13 = (signed char)91;
int zero = 0;
unsigned long long int var_15 = 5878679853204026728ULL;
_Bool var_16 = (_Bool)0;
int var_17 = 100099253;
unsigned int var_18 = 3339040998U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

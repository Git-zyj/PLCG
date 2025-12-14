#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6428527296207183626LL;
unsigned int var_4 = 3296697249U;
short var_6 = (short)-9702;
int var_7 = -1170792350;
signed char var_8 = (signed char)74;
int zero = 0;
long long int var_12 = 1373086580581367129LL;
int var_13 = 51718028;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

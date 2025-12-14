#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1376833399U;
unsigned int var_3 = 4264201515U;
unsigned int var_12 = 139915162U;
int zero = 0;
short var_13 = (short)19423;
int var_14 = 1734061219;
unsigned int var_15 = 3307096685U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

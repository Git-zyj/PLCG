#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)59;
unsigned long long int var_1 = 9982136737515619276ULL;
unsigned short var_12 = (unsigned short)30705;
int zero = 0;
short var_17 = (short)32229;
unsigned short var_18 = (unsigned short)64595;
unsigned short var_19 = (unsigned short)24657;
unsigned int var_20 = 2101991490U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

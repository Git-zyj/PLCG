#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)24969;
long long int var_5 = -3925826650968720049LL;
unsigned int var_7 = 184462676U;
short var_12 = (short)-9603;
int zero = 0;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-31548;
long long int var_17 = -1755805269902432133LL;
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

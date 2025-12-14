#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 616724336;
short var_11 = (short)-13545;
_Bool var_14 = (_Bool)1;
short var_16 = (short)22065;
int zero = 0;
short var_18 = (short)-31747;
unsigned int var_19 = 501258449U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

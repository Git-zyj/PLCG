#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16466;
short var_2 = (short)9304;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_18 = (short)6505;
unsigned int var_19 = 2569725834U;
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

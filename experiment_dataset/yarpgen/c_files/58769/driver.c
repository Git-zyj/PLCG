#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)6;
_Bool var_8 = (_Bool)1;
short var_13 = (short)13611;
int zero = 0;
long long int var_16 = -5958943630379539773LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-14609;
void init() {
}

void checksum() {
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

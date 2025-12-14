#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-17769;
long long int var_8 = -3129295848745468952LL;
signed char var_12 = (signed char)(-127 - 1);
long long int var_13 = -1518931892162655283LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)5;
int var_20 = 622176023;
long long int var_21 = -2403005151377516291LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

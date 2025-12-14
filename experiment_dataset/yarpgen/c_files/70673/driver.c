#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 326115086;
short var_3 = (short)-25593;
short var_5 = (short)-11363;
_Bool var_8 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)-100;
short var_13 = (short)6239;
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

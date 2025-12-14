#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-20783;
signed char var_4 = (signed char)97;
_Bool var_8 = (_Bool)0;
signed char var_10 = (signed char)123;
int zero = 0;
unsigned int var_12 = 2827816935U;
long long int var_13 = -4606583151323783980LL;
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

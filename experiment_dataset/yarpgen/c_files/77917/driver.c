#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 12922001878440506761ULL;
unsigned int var_6 = 2387802196U;
_Bool var_10 = (_Bool)0;
int var_11 = 2099790207;
int zero = 0;
unsigned int var_13 = 2013327303U;
short var_14 = (short)-1704;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

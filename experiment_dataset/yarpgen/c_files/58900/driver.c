#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)161;
_Bool var_5 = (_Bool)1;
long long int var_6 = -1825621784227505069LL;
int zero = 0;
short var_10 = (short)-13558;
unsigned int var_11 = 2316977243U;
short var_12 = (short)-16660;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

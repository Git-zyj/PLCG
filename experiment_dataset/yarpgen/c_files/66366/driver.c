#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15071270471414343469ULL;
unsigned int var_6 = 1468581304U;
int var_13 = -706189748;
unsigned int var_16 = 452909912U;
int zero = 0;
long long int var_19 = 3403611505753778289LL;
short var_20 = (short)-7485;
void init() {
}

void checksum() {
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

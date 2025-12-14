#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 973069235;
short var_4 = (short)-13751;
long long int var_9 = -1898315769622155475LL;
long long int var_10 = 7600100953747464532LL;
unsigned short var_11 = (unsigned short)14385;
unsigned int var_12 = 1508272981U;
long long int var_14 = 1799989759184194884LL;
int zero = 0;
unsigned int var_15 = 637350755U;
unsigned long long int var_16 = 15779327735283896571ULL;
unsigned long long int var_17 = 6878643033302119540ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3472770908U;
unsigned int var_3 = 182170255U;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_14 = (short)-6474;
unsigned long long int var_15 = 113424633872224130ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 2781367227830739117LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

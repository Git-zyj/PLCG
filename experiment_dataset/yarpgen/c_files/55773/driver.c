#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-1;
long long int var_5 = -6178707984904440204LL;
long long int var_6 = -251716092254449135LL;
unsigned char var_11 = (unsigned char)88;
int zero = 0;
unsigned long long int var_20 = 828819820920295707ULL;
short var_21 = (short)29097;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

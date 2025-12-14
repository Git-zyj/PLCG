#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_8 = (_Bool)1;
unsigned int var_16 = 1565909995U;
unsigned long long int var_17 = 4972448371894682318ULL;
long long int var_19 = -6277437966083270035LL;
int zero = 0;
unsigned int var_20 = 4132751195U;
short var_21 = (short)-22351;
void init() {
}

void checksum() {
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

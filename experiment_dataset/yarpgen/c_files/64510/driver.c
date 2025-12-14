#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2517960374U;
long long int var_4 = -4924627310317012381LL;
unsigned long long int var_6 = 17948163632472674559ULL;
short var_7 = (short)1711;
unsigned int var_17 = 426323550U;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 1783996884U;
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

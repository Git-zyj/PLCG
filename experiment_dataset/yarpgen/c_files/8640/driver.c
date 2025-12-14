#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)23989;
_Bool var_6 = (_Bool)1;
short var_11 = (short)-820;
unsigned int var_15 = 2207293490U;
int zero = 0;
short var_17 = (short)10650;
long long int var_18 = -2441912561577131757LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

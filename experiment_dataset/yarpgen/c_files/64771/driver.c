#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 166608451U;
unsigned long long int var_4 = 14221253659008456999ULL;
short var_7 = (short)13179;
_Bool var_10 = (_Bool)0;
long long int var_15 = -1001218364143815532LL;
unsigned int var_16 = 3085657015U;
int zero = 0;
long long int var_17 = 100068688509646654LL;
unsigned int var_18 = 3360295957U;
short var_19 = (short)-18738;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

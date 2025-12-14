#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -551188401;
unsigned long long int var_5 = 6370275650324508735ULL;
unsigned short var_14 = (unsigned short)30628;
short var_16 = (short)-7707;
int zero = 0;
long long int var_17 = 8609954308591136659LL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 211172619U;
unsigned char var_20 = (unsigned char)116;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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

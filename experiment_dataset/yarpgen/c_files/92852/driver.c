#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 5693925979437579488ULL;
long long int var_10 = -7344932873259594566LL;
unsigned int var_14 = 1852503113U;
int zero = 0;
unsigned int var_16 = 4138424839U;
long long int var_17 = 3007547778673494524LL;
void init() {
}

void checksum() {
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

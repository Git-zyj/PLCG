#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 13985687949318426630ULL;
unsigned long long int var_11 = 18116071332630755576ULL;
long long int var_12 = 2832977100640875584LL;
int zero = 0;
int var_13 = -585456831;
unsigned int var_14 = 1529346022U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7637591894481403862LL;
unsigned short var_4 = (unsigned short)44415;
unsigned long long int var_10 = 4107296742864474136ULL;
int zero = 0;
unsigned long long int var_18 = 11691675726816817994ULL;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)58859;
unsigned long long int var_21 = 9214998165478427599ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

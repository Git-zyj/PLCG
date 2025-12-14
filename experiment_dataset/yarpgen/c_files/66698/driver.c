#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29822;
long long int var_8 = 8016664288353838028LL;
unsigned long long int var_10 = 6957957552908655014ULL;
long long int var_16 = 1710608374486810763LL;
int zero = 0;
unsigned int var_17 = 3135546094U;
unsigned long long int var_18 = 7102813732762578226ULL;
_Bool var_19 = (_Bool)1;
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

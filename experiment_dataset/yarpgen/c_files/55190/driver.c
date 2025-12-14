#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6393845267221572429LL;
signed char var_2 = (signed char)-71;
signed char var_10 = (signed char)61;
short var_11 = (short)5341;
signed char var_13 = (signed char)109;
int zero = 0;
unsigned long long int var_14 = 12931668665969126572ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

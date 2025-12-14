#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2596154960846711943ULL;
unsigned long long int var_1 = 10929711512198880876ULL;
int var_3 = -1801062397;
int var_8 = 1658239207;
int var_11 = 1821999636;
unsigned long long int var_13 = 15992739824916686059ULL;
int zero = 0;
unsigned long long int var_14 = 5368023380735138135ULL;
int var_15 = -1767901003;
int var_16 = 2064631115;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

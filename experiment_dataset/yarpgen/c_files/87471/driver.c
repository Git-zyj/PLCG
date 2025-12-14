#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -982108921;
unsigned long long int var_13 = 13650581960253746966ULL;
signed char var_17 = (signed char)-88;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 14538316646901052169ULL;
unsigned long long int var_20 = 18380379478299950156ULL;
void init() {
}

void checksum() {
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

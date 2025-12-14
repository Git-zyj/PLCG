#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -68896782;
unsigned int var_1 = 2131325446U;
unsigned long long int var_3 = 12414173543703414213ULL;
signed char var_4 = (signed char)65;
unsigned int var_7 = 3178626362U;
int zero = 0;
unsigned long long int var_13 = 6896039026651947396ULL;
unsigned long long int var_14 = 12420767063485590563ULL;
int var_15 = 727039565;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

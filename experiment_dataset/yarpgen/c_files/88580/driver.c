#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16392010424033255253ULL;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_11 = -645037645631041910LL;
long long int var_12 = -4479120263274094074LL;
int zero = 0;
long long int var_14 = -6448186237524355993LL;
_Bool var_15 = (_Bool)1;
long long int var_16 = -7232034643587953659LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 12997168035759431229ULL;
int var_6 = 712066004;
int var_7 = 1097844239;
unsigned int var_8 = 3362642915U;
int zero = 0;
int var_10 = 118780117;
short var_11 = (short)8183;
int var_12 = 1276215829;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 730443737;
unsigned long long int var_6 = 13228325444089160754ULL;
unsigned int var_9 = 1604060140U;
long long int var_11 = -1379414567263889446LL;
int zero = 0;
unsigned long long int var_14 = 15252054279721676689ULL;
int var_15 = 179353142;
unsigned int var_16 = 1453047793U;
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

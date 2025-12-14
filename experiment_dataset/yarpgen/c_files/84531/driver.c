#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)107;
unsigned short var_6 = (unsigned short)37028;
long long int var_7 = -5562930286173894258LL;
int zero = 0;
unsigned long long int var_13 = 2236755114964946727ULL;
unsigned long long int var_14 = 6271618184355628228ULL;
unsigned int var_15 = 3288824088U;
unsigned int var_16 = 1825468477U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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

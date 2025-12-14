#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -874957025;
unsigned int var_5 = 3316469862U;
int var_11 = -874682094;
unsigned long long int var_12 = 1599866438014768646ULL;
int zero = 0;
unsigned int var_16 = 3946789509U;
long long int var_17 = 8198719102264082608LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

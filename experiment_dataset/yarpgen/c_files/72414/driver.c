#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1051453845U;
unsigned int var_9 = 2563921403U;
unsigned int var_16 = 1391922529U;
int zero = 0;
unsigned int var_19 = 3687431411U;
unsigned int var_20 = 2954875541U;
void init() {
}

void checksum() {
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

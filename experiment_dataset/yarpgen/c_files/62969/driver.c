#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1207669594;
int var_10 = -1221016248;
signed char var_11 = (signed char)-69;
int var_18 = -759407975;
int zero = 0;
signed char var_19 = (signed char)-69;
unsigned long long int var_20 = 16392623404494237986ULL;
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

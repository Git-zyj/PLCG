#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8846524573040938986ULL;
unsigned int var_2 = 2289711962U;
unsigned long long int var_12 = 6975868129436185820ULL;
int zero = 0;
unsigned int var_14 = 3014446919U;
unsigned int var_15 = 4175647691U;
unsigned int var_16 = 3977769349U;
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

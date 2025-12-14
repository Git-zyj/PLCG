#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1648871065U;
unsigned long long int var_8 = 15340512265711981680ULL;
unsigned int var_12 = 1011143285U;
unsigned long long int var_17 = 1032970623139869780ULL;
int zero = 0;
int var_19 = 696151955;
unsigned long long int var_20 = 5829376119665607615ULL;
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

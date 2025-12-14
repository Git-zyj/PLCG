#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2759336083U;
long long int var_8 = 5709295936929744415LL;
long long int var_13 = 7603467853052640429LL;
unsigned char var_16 = (unsigned char)42;
int zero = 0;
unsigned char var_19 = (unsigned char)154;
unsigned long long int var_20 = 3538195732694334616ULL;
unsigned char var_21 = (unsigned char)135;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

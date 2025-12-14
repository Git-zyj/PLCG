#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5273845429817136006ULL;
unsigned long long int var_1 = 16478778758964597889ULL;
short var_9 = (short)-20357;
unsigned long long int var_14 = 4566093576764039444ULL;
unsigned int var_17 = 3250632870U;
int zero = 0;
unsigned int var_20 = 379333422U;
long long int var_21 = 6207034319978778630LL;
unsigned int var_22 = 4049094497U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2708863666800951323ULL;
unsigned int var_4 = 2929514495U;
long long int var_6 = 7602008961966763108LL;
unsigned long long int var_8 = 4975210805416454550ULL;
unsigned int var_9 = 3487361688U;
int zero = 0;
unsigned char var_13 = (unsigned char)160;
unsigned char var_14 = (unsigned char)46;
long long int var_15 = 8146482274704026051LL;
unsigned long long int var_16 = 10249543015996037136ULL;
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

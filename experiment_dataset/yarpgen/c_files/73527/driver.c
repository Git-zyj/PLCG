#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1925631072;
long long int var_1 = -4135627001879568430LL;
unsigned long long int var_11 = 17575239851699370372ULL;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)153;
int zero = 0;
unsigned int var_19 = 4148838271U;
unsigned char var_20 = (unsigned char)239;
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

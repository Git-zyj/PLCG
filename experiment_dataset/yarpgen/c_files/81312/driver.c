#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1609673531;
unsigned int var_5 = 3654556768U;
signed char var_8 = (signed char)44;
unsigned short var_10 = (unsigned short)14397;
signed char var_13 = (signed char)7;
int zero = 0;
unsigned int var_14 = 551871393U;
long long int var_15 = 5177963126309702424LL;
long long int var_16 = -4439721295394538344LL;
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

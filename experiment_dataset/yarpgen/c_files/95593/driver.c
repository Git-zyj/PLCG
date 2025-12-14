#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)200;
unsigned short var_8 = (unsigned short)40867;
short var_12 = (short)-28763;
unsigned long long int var_16 = 6855427387992840497ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2146269145U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

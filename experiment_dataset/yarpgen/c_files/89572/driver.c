#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3768569449U;
unsigned short var_12 = (unsigned short)42617;
unsigned short var_13 = (unsigned short)17448;
unsigned int var_14 = 2450771638U;
int zero = 0;
unsigned long long int var_16 = 15429075800292423117ULL;
unsigned char var_17 = (unsigned char)139;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1663187378U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

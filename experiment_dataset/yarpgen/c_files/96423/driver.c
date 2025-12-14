#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-31197;
unsigned char var_1 = (unsigned char)9;
unsigned char var_2 = (unsigned char)198;
signed char var_3 = (signed char)-73;
long long int var_4 = 7425106320817376416LL;
long long int var_7 = 4784224824866940376LL;
long long int var_9 = -5657375615518440747LL;
long long int var_11 = 6606734410952781529LL;
int zero = 0;
unsigned int var_13 = 105951274U;
long long int var_14 = 360970484004298036LL;
signed char var_15 = (signed char)-70;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

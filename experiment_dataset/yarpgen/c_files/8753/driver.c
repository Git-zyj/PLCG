#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1788831369U;
unsigned long long int var_1 = 8041247298544026114ULL;
unsigned int var_2 = 1538497986U;
unsigned char var_3 = (unsigned char)53;
unsigned int var_4 = 1825272067U;
unsigned short var_6 = (unsigned short)12973;
unsigned long long int var_8 = 2118475097637765811ULL;
int zero = 0;
unsigned short var_11 = (unsigned short)53797;
short var_12 = (short)29808;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

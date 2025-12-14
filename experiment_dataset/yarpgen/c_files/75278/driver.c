#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3976395103U;
unsigned char var_1 = (unsigned char)148;
unsigned int var_3 = 326291913U;
unsigned int var_4 = 112006788U;
short var_6 = (short)-8126;
unsigned long long int var_7 = 16149932013741640890ULL;
unsigned char var_8 = (unsigned char)173;
int zero = 0;
unsigned char var_14 = (unsigned char)33;
short var_15 = (short)31733;
long long int var_16 = 5412863469488392814LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1161271532U;
unsigned short var_5 = (unsigned short)2671;
unsigned int var_8 = 2191399247U;
unsigned char var_10 = (unsigned char)67;
short var_11 = (short)23825;
long long int var_12 = -6502163850719810439LL;
short var_13 = (short)30010;
unsigned char var_16 = (unsigned char)90;
int zero = 0;
short var_18 = (short)19947;
unsigned char var_19 = (unsigned char)252;
unsigned long long int var_20 = 16941437296580275869ULL;
long long int var_21 = -6438452903154659820LL;
int var_22 = 1011267528;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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

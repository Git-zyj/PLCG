#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3333846310U;
unsigned int var_2 = 3242943184U;
short var_3 = (short)21122;
short var_4 = (short)-23713;
short var_5 = (short)-15560;
unsigned int var_6 = 243289350U;
unsigned int var_7 = 656102291U;
short var_8 = (short)-32747;
unsigned int var_9 = 2212441105U;
unsigned int var_11 = 2106709819U;
unsigned int var_16 = 2416703511U;
int zero = 0;
short var_19 = (short)31809;
unsigned int var_20 = 1562829686U;
unsigned int var_21 = 2941385841U;
short var_22 = (short)28321;
short var_23 = (short)5823;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

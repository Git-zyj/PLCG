#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31558;
int var_1 = 525873296;
int var_2 = 1063699579;
unsigned int var_3 = 3805013083U;
short var_4 = (short)11918;
unsigned char var_5 = (unsigned char)119;
short var_6 = (short)29654;
short var_7 = (short)-31973;
short var_9 = (short)1135;
short var_10 = (short)1431;
short var_11 = (short)25851;
int zero = 0;
short var_12 = (short)14141;
short var_13 = (short)-28836;
int var_14 = -2005846820;
short var_15 = (short)-3997;
short var_16 = (short)-1827;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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

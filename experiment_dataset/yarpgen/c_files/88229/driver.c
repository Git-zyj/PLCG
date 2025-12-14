#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27300;
unsigned short var_2 = (unsigned short)266;
unsigned char var_4 = (unsigned char)125;
short var_5 = (short)-3135;
int var_6 = -1027503509;
unsigned int var_7 = 456182913U;
long long int var_12 = -654007334821139175LL;
short var_13 = (short)4443;
unsigned long long int var_15 = 1186022062862529433ULL;
unsigned short var_16 = (unsigned short)34820;
int zero = 0;
short var_17 = (short)23650;
short var_18 = (short)27580;
long long int var_19 = 6232412027345832507LL;
void init() {
}

void checksum() {
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

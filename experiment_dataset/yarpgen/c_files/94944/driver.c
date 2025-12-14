#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2633313619525150558LL;
short var_1 = (short)25006;
int var_2 = -264623440;
unsigned char var_3 = (unsigned char)232;
short var_6 = (short)-20084;
unsigned char var_7 = (unsigned char)80;
unsigned char var_8 = (unsigned char)63;
unsigned char var_9 = (unsigned char)117;
long long int var_11 = -2025549244593140825LL;
int zero = 0;
int var_14 = -479145906;
unsigned int var_15 = 1854584143U;
int var_16 = 527212434;
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

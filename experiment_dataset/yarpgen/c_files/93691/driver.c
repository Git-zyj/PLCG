#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2429106502709282542LL;
unsigned short var_4 = (unsigned short)64262;
unsigned char var_5 = (unsigned char)56;
unsigned short var_7 = (unsigned short)33997;
long long int var_10 = 2210573062345301598LL;
short var_11 = (short)-19073;
long long int var_12 = 4007913655548103242LL;
long long int var_14 = -5943282551079888427LL;
unsigned short var_15 = (unsigned short)38142;
int zero = 0;
unsigned long long int var_16 = 14657561949897235963ULL;
short var_17 = (short)-1515;
int var_18 = 1360071718;
long long int var_19 = 4756626842220231252LL;
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

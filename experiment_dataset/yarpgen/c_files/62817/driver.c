#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3173993772131840740LL;
signed char var_1 = (signed char)97;
unsigned int var_2 = 3735795033U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)11332;
int var_5 = 612437873;
short var_7 = (short)13641;
unsigned long long int var_9 = 7838519969814812160ULL;
int var_10 = -864618378;
unsigned short var_11 = (unsigned short)23844;
int zero = 0;
short var_13 = (short)17292;
unsigned int var_14 = 1546828302U;
unsigned char var_15 = (unsigned char)157;
int var_16 = 1641666952;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

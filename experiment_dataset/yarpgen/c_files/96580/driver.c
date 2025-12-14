#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 1954171913975631099ULL;
short var_3 = (short)8830;
unsigned short var_6 = (unsigned short)41763;
long long int var_12 = 5758684216403256248LL;
unsigned int var_13 = 2847135393U;
int zero = 0;
unsigned short var_16 = (unsigned short)17530;
signed char var_17 = (signed char)34;
unsigned long long int var_18 = 4203958603202619888ULL;
signed char var_19 = (signed char)-54;
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

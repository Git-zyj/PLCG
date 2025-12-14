#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
long long int var_1 = -816975505451312428LL;
unsigned char var_2 = (unsigned char)29;
int var_4 = 1250485872;
int var_5 = -860924064;
unsigned int var_6 = 2226645626U;
unsigned char var_7 = (unsigned char)252;
unsigned int var_12 = 2808260080U;
signed char var_14 = (signed char)42;
int zero = 0;
long long int var_15 = 820875108130945211LL;
unsigned short var_16 = (unsigned short)30631;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 1150082632779401058ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1054705843U;
unsigned int var_2 = 66796135U;
unsigned short var_3 = (unsigned short)3231;
long long int var_5 = 6654342771229154958LL;
unsigned char var_8 = (unsigned char)128;
int var_10 = 838770819;
long long int var_12 = -8289235710479343781LL;
long long int var_13 = 3442834588595452719LL;
long long int var_14 = -2771269797370186471LL;
long long int var_15 = -5155937283046472840LL;
long long int var_16 = -6346433897324360146LL;
long long int var_17 = 2106566931850514586LL;
unsigned short var_18 = (unsigned short)15786;
int zero = 0;
unsigned int var_19 = 3409369700U;
long long int var_20 = -5039394195244741036LL;
long long int var_21 = 5347500411903536841LL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
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

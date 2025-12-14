#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8680825621707531070LL;
int var_2 = -257752648;
long long int var_5 = -1914429899937863465LL;
long long int var_7 = -2877141240616075264LL;
int var_9 = 1039234473;
unsigned long long int var_10 = 14411378078896763470ULL;
signed char var_11 = (signed char)17;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-61;
int zero = 0;
unsigned int var_16 = 2666761007U;
_Bool var_17 = (_Bool)1;
int var_18 = 2041511920;
void init() {
}

void checksum() {
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

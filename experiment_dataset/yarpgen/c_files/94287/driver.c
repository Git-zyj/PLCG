#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)2873;
_Bool var_5 = (_Bool)1;
unsigned char var_12 = (unsigned char)75;
unsigned short var_15 = (unsigned short)34130;
long long int var_16 = 6525403942809314025LL;
unsigned int var_17 = 2187210629U;
long long int var_18 = -3325024622825988646LL;
int zero = 0;
unsigned long long int var_19 = 11013955545234723727ULL;
long long int var_20 = -3572392513159173965LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

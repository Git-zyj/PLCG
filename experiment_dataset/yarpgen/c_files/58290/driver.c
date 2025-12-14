#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)15396;
long long int var_3 = -7536502377715387246LL;
int var_4 = 372395675;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = -1670523057;
signed char var_11 = (signed char)26;
long long int var_12 = -8533338048847948209LL;
int var_14 = 790133135;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8486166881277777915ULL;
_Bool var_17 = (_Bool)0;
long long int var_18 = 2465993703327488354LL;
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

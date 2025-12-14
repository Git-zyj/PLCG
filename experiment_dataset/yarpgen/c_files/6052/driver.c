#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3448120870U;
short var_8 = (short)3590;
int zero = 0;
long long int var_11 = -1941373989085215748LL;
unsigned int var_12 = 1575548574U;
unsigned int var_13 = 1248474560U;
long long int var_14 = 6761587629102022478LL;
short var_15 = (short)-10264;
unsigned int var_16 = 1549338732U;
short var_17 = (short)5324;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 313697498U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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

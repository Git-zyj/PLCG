#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)135;
int var_1 = 1297436230;
long long int var_2 = 568262558491731798LL;
unsigned int var_7 = 2737846892U;
unsigned short var_8 = (unsigned short)25672;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 105893444803195992ULL;
signed char var_14 = (signed char)59;
int var_15 = 2000515282;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

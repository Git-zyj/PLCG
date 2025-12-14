#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8274333786346136568LL;
signed char var_5 = (signed char)65;
unsigned long long int var_7 = 12434976607231651498ULL;
unsigned long long int var_8 = 7368187859048659744ULL;
unsigned int var_9 = 459490193U;
unsigned short var_10 = (unsigned short)55046;
int zero = 0;
unsigned long long int var_11 = 15396586897700997216ULL;
unsigned long long int var_12 = 4749455878191398957ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

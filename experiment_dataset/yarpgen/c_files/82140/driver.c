#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2880887338444929206ULL;
_Bool var_1 = (_Bool)0;
unsigned short var_6 = (unsigned short)16599;
long long int var_7 = 2952296484108910082LL;
signed char var_8 = (signed char)76;
long long int var_9 = -1979230711390193910LL;
unsigned short var_12 = (unsigned short)40946;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)64070;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

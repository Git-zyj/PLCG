#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63165;
signed char var_4 = (signed char)84;
unsigned long long int var_9 = 18191545639787992850ULL;
long long int var_12 = 2184799676014618974LL;
int zero = 0;
unsigned short var_13 = (unsigned short)8968;
unsigned char var_14 = (unsigned char)151;
_Bool var_15 = (_Bool)0;
int var_16 = -1088639440;
unsigned long long int var_17 = 11373815973196011462ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

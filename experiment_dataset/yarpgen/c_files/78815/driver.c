#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 329270292879322797ULL;
unsigned char var_3 = (unsigned char)212;
unsigned char var_8 = (unsigned char)165;
int zero = 0;
signed char var_13 = (signed char)126;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)43160;
void init() {
}

void checksum() {
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

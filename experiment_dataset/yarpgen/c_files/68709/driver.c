#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18126;
long long int var_3 = 2486601121923139445LL;
_Bool var_4 = (_Bool)1;
signed char var_11 = (signed char)96;
int zero = 0;
unsigned char var_16 = (unsigned char)228;
unsigned short var_17 = (unsigned short)50136;
void init() {
}

void checksum() {
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

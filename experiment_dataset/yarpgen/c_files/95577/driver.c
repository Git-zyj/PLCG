#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7984038448398969326LL;
short var_5 = (short)581;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_14 = (short)24275;
int zero = 0;
signed char var_16 = (signed char)69;
unsigned char var_17 = (unsigned char)244;
unsigned long long int var_18 = 2396184835480331432ULL;
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

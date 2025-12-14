#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6504992945392722438LL;
long long int var_10 = -7098730339961844570LL;
unsigned short var_11 = (unsigned short)57491;
int zero = 0;
unsigned char var_14 = (unsigned char)243;
long long int var_15 = -7509944784243032818LL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

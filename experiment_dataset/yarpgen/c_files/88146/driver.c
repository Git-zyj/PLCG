#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 112320472U;
long long int var_3 = 2012667531927990980LL;
long long int var_4 = 4402395278467314555LL;
short var_6 = (short)8609;
unsigned long long int var_7 = 13938173399322097287ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)65;
long long int var_11 = -8079557267805574891LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -2026965380573387380LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

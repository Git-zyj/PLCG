#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = 8990149094053630662LL;
unsigned char var_5 = (unsigned char)220;
unsigned char var_8 = (unsigned char)112;
long long int var_11 = -7627775859010808720LL;
int var_13 = 726181304;
int zero = 0;
unsigned char var_14 = (unsigned char)186;
unsigned char var_15 = (unsigned char)30;
void init() {
}

void checksum() {
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

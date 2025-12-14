#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
unsigned long long int var_3 = 9427145508478688239ULL;
unsigned int var_6 = 2105700983U;
unsigned int var_8 = 572713968U;
unsigned int var_9 = 3982249966U;
unsigned short var_11 = (unsigned short)39875;
unsigned char var_14 = (unsigned char)241;
unsigned char var_19 = (unsigned char)154;
int zero = 0;
unsigned char var_20 = (unsigned char)218;
long long int var_21 = -7274640047362594452LL;
unsigned char var_22 = (unsigned char)161;
long long int var_23 = 3386669606829389578LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

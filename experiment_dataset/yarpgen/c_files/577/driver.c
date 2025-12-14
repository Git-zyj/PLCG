#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7670838794716578013LL;
long long int var_1 = 2258837606924113278LL;
unsigned long long int var_2 = 12220742795510236847ULL;
unsigned long long int var_4 = 15983906034870877811ULL;
unsigned long long int var_5 = 12266201182532782436ULL;
unsigned long long int var_10 = 2223680752360276931ULL;
unsigned long long int var_12 = 9418575333170172595ULL;
unsigned int var_15 = 4046842828U;
int zero = 0;
unsigned short var_16 = (unsigned short)64758;
unsigned long long int var_17 = 12840003769143903099ULL;
unsigned char var_18 = (unsigned char)128;
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

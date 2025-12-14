#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1662855937292454908LL;
short var_1 = (short)22120;
unsigned short var_4 = (unsigned short)19885;
unsigned long long int var_5 = 2105476058253917296ULL;
unsigned long long int var_6 = 9307024422535240312ULL;
short var_13 = (short)17187;
int zero = 0;
unsigned int var_14 = 580996618U;
unsigned long long int var_15 = 13106640321121523227ULL;
long long int var_16 = 7356129906980616197LL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 162126052663795657ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

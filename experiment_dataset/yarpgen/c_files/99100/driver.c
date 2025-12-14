#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned long long int var_3 = 7673328901179888660ULL;
long long int var_5 = -221970774696265828LL;
unsigned int var_8 = 1931195209U;
unsigned char var_10 = (unsigned char)3;
unsigned short var_11 = (unsigned short)59994;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 4832467106931872541ULL;
void init() {
}

void checksum() {
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

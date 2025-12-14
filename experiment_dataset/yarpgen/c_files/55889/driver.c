#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8228239168175278971ULL;
unsigned char var_1 = (unsigned char)253;
unsigned char var_2 = (unsigned char)42;
unsigned char var_3 = (unsigned char)112;
_Bool var_4 = (_Bool)0;
int zero = 0;
unsigned int var_10 = 1692802301U;
unsigned long long int var_11 = 5621934058696829622ULL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

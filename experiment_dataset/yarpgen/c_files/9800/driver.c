#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 660056490722018287ULL;
unsigned short var_2 = (unsigned short)31864;
int var_3 = -569115160;
unsigned long long int var_5 = 1962291746159395028ULL;
long long int var_7 = 7685880801003725758LL;
unsigned short var_9 = (unsigned short)35298;
long long int var_15 = -1374818549171616318LL;
int zero = 0;
unsigned char var_20 = (unsigned char)172;
long long int var_21 = -6353991294468709432LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

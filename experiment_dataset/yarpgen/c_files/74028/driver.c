#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8055275576277778830LL;
unsigned int var_10 = 1724698688U;
unsigned short var_12 = (unsigned short)55093;
long long int var_15 = 1058854523119024321LL;
int zero = 0;
int var_17 = 2017504528;
unsigned int var_18 = 4113386457U;
unsigned short var_19 = (unsigned short)9229;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

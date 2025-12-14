#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53804;
unsigned long long int var_3 = 14315938645664227334ULL;
unsigned short var_11 = (unsigned short)10122;
unsigned long long int var_15 = 12731913741319315229ULL;
unsigned short var_17 = (unsigned short)48844;
int zero = 0;
unsigned int var_20 = 1205352168U;
long long int var_21 = -7915270712964641202LL;
long long int var_22 = -2997394623052388083LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5524559600383073196LL;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
unsigned long long int var_20 = 11955595353455986849ULL;
long long int var_21 = 647709425936850627LL;
unsigned int var_22 = 2696706393U;
unsigned char var_23 = (unsigned char)8;
long long int var_24 = -8907891474982644959LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

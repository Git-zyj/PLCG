#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)86;
_Bool var_2 = (_Bool)1;
long long int var_3 = -9125877718839569790LL;
unsigned int var_6 = 589800562U;
unsigned int var_8 = 630712036U;
int zero = 0;
unsigned long long int var_10 = 17638142351336560361ULL;
unsigned char var_11 = (unsigned char)54;
long long int var_12 = 1879145353084292378LL;
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

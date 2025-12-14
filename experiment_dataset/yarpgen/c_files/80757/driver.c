#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7794225843905822858LL;
unsigned char var_5 = (unsigned char)192;
int var_7 = -1429889098;
int zero = 0;
int var_12 = 2132519320;
short var_13 = (short)22531;
long long int var_14 = -3362404016622621316LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

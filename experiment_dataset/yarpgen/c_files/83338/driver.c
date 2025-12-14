#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 12370719849336756587ULL;
long long int var_10 = 1437617680930776715LL;
int zero = 0;
unsigned char var_11 = (unsigned char)135;
unsigned short var_12 = (unsigned short)19502;
unsigned short var_13 = (unsigned short)6438;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

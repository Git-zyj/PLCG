#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)211;
long long int var_9 = -7455757520285543596LL;
unsigned int var_13 = 1733316241U;
signed char var_14 = (signed char)-30;
long long int var_19 = 3860850154283473903LL;
int zero = 0;
unsigned char var_20 = (unsigned char)135;
unsigned long long int var_21 = 3346204457773426871ULL;
unsigned long long int var_22 = 15254056376531404740ULL;
long long int var_23 = -938106275491653836LL;
short var_24 = (short)27111;
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

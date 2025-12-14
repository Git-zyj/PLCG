#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 24794314;
long long int var_8 = 7467702829847238205LL;
unsigned char var_11 = (unsigned char)170;
unsigned long long int var_14 = 15542662584777333188ULL;
int zero = 0;
long long int var_16 = -8656018857785621667LL;
unsigned short var_17 = (unsigned short)51735;
unsigned int var_18 = 2991053433U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

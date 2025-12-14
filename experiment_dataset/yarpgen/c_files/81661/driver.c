#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)59204;
unsigned long long int var_9 = 15302744136313361449ULL;
long long int var_10 = 8723119053479288443LL;
int zero = 0;
unsigned char var_16 = (unsigned char)39;
unsigned char var_17 = (unsigned char)62;
unsigned long long int var_18 = 18023952243678554389ULL;
unsigned int var_19 = 3892704079U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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

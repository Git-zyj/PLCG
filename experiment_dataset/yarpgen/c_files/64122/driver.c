#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)12153;
unsigned int var_8 = 1076592611U;
long long int var_9 = -5004995600822820906LL;
unsigned long long int var_10 = 8740580461406188762ULL;
unsigned char var_13 = (unsigned char)43;
int var_15 = 364481359;
int zero = 0;
unsigned long long int var_18 = 7926354037703648510ULL;
unsigned int var_19 = 469081842U;
void init() {
}

void checksum() {
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

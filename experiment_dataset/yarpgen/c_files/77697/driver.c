#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6010348193645082230ULL;
unsigned int var_3 = 2944974217U;
unsigned short var_15 = (unsigned short)63847;
int zero = 0;
unsigned char var_16 = (unsigned char)131;
unsigned long long int var_17 = 9951711761357612811ULL;
long long int var_18 = -7949123142185539989LL;
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

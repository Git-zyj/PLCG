#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8959742428694789ULL;
long long int var_5 = 2907730441548152566LL;
unsigned short var_6 = (unsigned short)19484;
unsigned char var_8 = (unsigned char)114;
short var_9 = (short)-32158;
short var_10 = (short)30729;
short var_14 = (short)16013;
int zero = 0;
unsigned int var_15 = 2051179597U;
short var_16 = (short)19269;
unsigned long long int var_17 = 12376128861336500691ULL;
long long int var_18 = -3166654268046576842LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

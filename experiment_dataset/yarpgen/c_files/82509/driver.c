#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3861254923U;
unsigned char var_5 = (unsigned char)94;
int var_6 = -2036396209;
long long int var_8 = 7927434390026876445LL;
long long int var_9 = -764855450521657061LL;
unsigned int var_12 = 1880406657U;
unsigned long long int var_14 = 13906275161655078392ULL;
int zero = 0;
long long int var_15 = 5545789406518899515LL;
unsigned int var_16 = 364159890U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

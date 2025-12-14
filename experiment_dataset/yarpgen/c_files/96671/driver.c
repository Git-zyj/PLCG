#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)18376;
short var_4 = (short)-10528;
unsigned char var_5 = (unsigned char)225;
unsigned short var_7 = (unsigned short)39838;
signed char var_9 = (signed char)-22;
unsigned int var_12 = 2389881121U;
unsigned long long int var_13 = 7735433951834318542ULL;
int zero = 0;
unsigned int var_14 = 764867944U;
long long int var_15 = 129247703175316229LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

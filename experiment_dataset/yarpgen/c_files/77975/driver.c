#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)16468;
unsigned int var_8 = 877701071U;
long long int var_9 = -2395716718967556422LL;
unsigned char var_11 = (unsigned char)227;
int zero = 0;
unsigned int var_16 = 1942451686U;
unsigned int var_17 = 4030988552U;
short var_18 = (short)5729;
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

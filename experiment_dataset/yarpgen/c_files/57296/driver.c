#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)29999;
unsigned long long int var_1 = 2907919088187728443ULL;
unsigned char var_2 = (unsigned char)61;
unsigned long long int var_5 = 10819646821910801394ULL;
signed char var_6 = (signed char)67;
signed char var_7 = (signed char)121;
unsigned long long int var_8 = 9279754486660753882ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)39;
unsigned long long int var_11 = 18068513227368160807ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

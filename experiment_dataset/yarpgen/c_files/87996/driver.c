#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)180;
unsigned long long int var_4 = 1959676509785581828ULL;
short var_7 = (short)-23646;
unsigned long long int var_8 = 13601836734694125319ULL;
long long int var_12 = 1308203459106091396LL;
unsigned long long int var_13 = 2872977010492939168ULL;
unsigned int var_14 = 190871204U;
unsigned int var_15 = 1634657444U;
unsigned int var_17 = 1688141856U;
int zero = 0;
unsigned int var_18 = 3733790154U;
unsigned int var_19 = 2919032631U;
unsigned char var_20 = (unsigned char)117;
unsigned int var_21 = 32312060U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

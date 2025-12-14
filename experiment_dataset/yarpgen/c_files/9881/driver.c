#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5398;
unsigned short var_6 = (unsigned short)56612;
long long int var_10 = -6979445716805465817LL;
short var_11 = (short)-22553;
short var_13 = (short)-12431;
unsigned char var_16 = (unsigned char)132;
int zero = 0;
unsigned char var_17 = (unsigned char)215;
unsigned int var_18 = 2576123832U;
unsigned char var_19 = (unsigned char)221;
void init() {
}

void checksum() {
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

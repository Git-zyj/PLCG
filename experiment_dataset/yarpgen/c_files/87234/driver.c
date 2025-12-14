#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23452;
short var_1 = (short)-30727;
short var_2 = (short)-12785;
int zero = 0;
unsigned char var_10 = (unsigned char)241;
unsigned long long int var_11 = 6696712442634094389ULL;
unsigned char var_12 = (unsigned char)109;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

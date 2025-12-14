#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61581;
short var_2 = (short)-32180;
unsigned int var_3 = 1790004004U;
int var_4 = -1513456430;
unsigned long long int var_7 = 5497159010374888173ULL;
long long int var_14 = -586376344350320665LL;
int zero = 0;
unsigned int var_16 = 137587531U;
unsigned char var_17 = (unsigned char)215;
unsigned int var_18 = 1242483931U;
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

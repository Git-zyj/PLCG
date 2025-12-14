#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)54;
unsigned long long int var_6 = 6784264299468261243ULL;
unsigned int var_7 = 1920115686U;
unsigned long long int var_8 = 18344053225897900389ULL;
unsigned long long int var_10 = 13237155044250381484ULL;
unsigned short var_12 = (unsigned short)60598;
unsigned int var_16 = 410809905U;
int zero = 0;
signed char var_18 = (signed char)-31;
unsigned long long int var_19 = 11172337055270556718ULL;
short var_20 = (short)-18134;
unsigned int var_21 = 641683226U;
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

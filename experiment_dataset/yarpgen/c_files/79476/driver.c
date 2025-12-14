#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1228306154U;
unsigned long long int var_2 = 2630050215806587895ULL;
unsigned long long int var_3 = 54737536847186654ULL;
unsigned short var_5 = (unsigned short)59901;
short var_8 = (short)-14326;
int zero = 0;
unsigned int var_11 = 1861967778U;
short var_12 = (short)-7982;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8983651187068559323ULL;
unsigned long long int var_3 = 8653922552262808568ULL;
long long int var_6 = 6733662307195581396LL;
long long int var_13 = 3840318699475825397LL;
int zero = 0;
short var_15 = (short)17028;
short var_16 = (short)5548;
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

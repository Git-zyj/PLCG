#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3379186200U;
int var_1 = -1102384722;
long long int var_3 = 3768227164611259315LL;
unsigned long long int var_4 = 5418459298769899643ULL;
unsigned char var_7 = (unsigned char)84;
unsigned char var_10 = (unsigned char)214;
int zero = 0;
unsigned char var_12 = (unsigned char)78;
unsigned char var_13 = (unsigned char)170;
unsigned short var_14 = (unsigned short)56428;
unsigned long long int var_15 = 9882424014338958283ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

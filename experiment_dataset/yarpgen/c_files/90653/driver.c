#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9372339243571252416ULL;
unsigned char var_4 = (unsigned char)173;
unsigned short var_6 = (unsigned short)40269;
unsigned long long int var_10 = 10445656262975974744ULL;
signed char var_11 = (signed char)37;
int zero = 0;
unsigned int var_16 = 3834301289U;
long long int var_17 = -7471198625284099307LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

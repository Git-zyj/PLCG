#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11275;
unsigned int var_1 = 1655466191U;
long long int var_3 = -7479642970163310591LL;
long long int var_4 = -5912314615434699373LL;
long long int var_5 = 1819587352359710875LL;
int var_6 = -325307394;
long long int var_7 = -9177918628525068769LL;
long long int var_8 = -2335328655431800266LL;
unsigned long long int var_10 = 951317900159597200ULL;
unsigned short var_11 = (unsigned short)6621;
int zero = 0;
int var_12 = -1744410373;
unsigned long long int var_13 = 11791737567276788113ULL;
long long int var_14 = 8351634092926765092LL;
unsigned short var_15 = (unsigned short)54619;
unsigned long long int var_16 = 6821292927610400761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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

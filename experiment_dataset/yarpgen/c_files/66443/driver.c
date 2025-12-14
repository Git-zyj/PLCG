#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2061607711427678972ULL;
unsigned long long int var_2 = 10650522011753350699ULL;
unsigned long long int var_3 = 17138375906847271652ULL;
unsigned long long int var_4 = 15541420885916279483ULL;
unsigned long long int var_6 = 12356378134671640927ULL;
unsigned char var_7 = (unsigned char)179;
unsigned long long int var_8 = 1581611386073154027ULL;
int zero = 0;
unsigned long long int var_11 = 11780193405823066074ULL;
unsigned char var_12 = (unsigned char)229;
unsigned long long int var_13 = 10036751306640939107ULL;
unsigned long long int var_14 = 1824929415732131428ULL;
unsigned long long int var_15 = 11305698913496253273ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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

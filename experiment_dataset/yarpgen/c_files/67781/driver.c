#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -4395431158597390386LL;
int var_3 = -1721571452;
unsigned long long int var_4 = 12749321711790145700ULL;
unsigned short var_6 = (unsigned short)51324;
int var_10 = 328753708;
int zero = 0;
signed char var_12 = (signed char)-18;
unsigned short var_13 = (unsigned short)48367;
int var_14 = 1823731581;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

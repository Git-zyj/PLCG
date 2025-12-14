#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1710456536;
unsigned long long int var_1 = 9369467425774710889ULL;
unsigned long long int var_2 = 15860362158662689756ULL;
long long int var_9 = -5051375094267931765LL;
unsigned int var_10 = 2930831324U;
unsigned long long int var_12 = 5328328273921403078ULL;
signed char var_16 = (signed char)14;
unsigned long long int var_17 = 16433502062730143180ULL;
int zero = 0;
short var_19 = (short)22311;
unsigned long long int var_20 = 9080133204609675457ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

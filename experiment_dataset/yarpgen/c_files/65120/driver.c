#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14572493220968273068ULL;
unsigned long long int var_1 = 16606375716726464882ULL;
unsigned char var_4 = (unsigned char)30;
unsigned char var_7 = (unsigned char)65;
int var_8 = -1177165007;
unsigned short var_13 = (unsigned short)60223;
int zero = 0;
unsigned long long int var_14 = 12383404061145905299ULL;
unsigned char var_15 = (unsigned char)3;
unsigned char var_16 = (unsigned char)142;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 18066444150222155680ULL;
int var_10 = -1617448459;
short var_12 = (short)22632;
unsigned int var_16 = 2301833252U;
unsigned int var_17 = 1930198071U;
int zero = 0;
unsigned char var_18 = (unsigned char)225;
unsigned short var_19 = (unsigned short)26968;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

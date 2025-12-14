#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1991891349U;
unsigned short var_2 = (unsigned short)30839;
int var_3 = -603340283;
int var_4 = 1594352701;
unsigned char var_8 = (unsigned char)170;
int zero = 0;
unsigned long long int var_10 = 16179418490757387819ULL;
signed char var_11 = (signed char)-31;
signed char var_12 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 2628041188U;
unsigned int var_8 = 2541329126U;
unsigned char var_9 = (unsigned char)140;
unsigned char var_12 = (unsigned char)199;
int zero = 0;
unsigned long long int var_13 = 5511576605043421105ULL;
int var_14 = 1590242119;
unsigned int var_15 = 148059431U;
short var_16 = (short)-10198;
void init() {
}

void checksum() {
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

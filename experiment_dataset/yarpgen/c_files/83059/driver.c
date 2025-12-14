#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)125;
int var_1 = 1307521342;
long long int var_8 = 3838065315059637463LL;
unsigned char var_9 = (unsigned char)52;
long long int var_10 = -1900787799551666835LL;
unsigned long long int var_12 = 9158308866604054055ULL;
int zero = 0;
int var_13 = 1435795067;
unsigned int var_14 = 2596748042U;
unsigned int var_15 = 772481485U;
short var_16 = (short)22965;
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

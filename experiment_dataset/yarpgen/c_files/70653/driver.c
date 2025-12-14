#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)59802;
long long int var_7 = 3636067655026514357LL;
unsigned long long int var_9 = 339409510029677080ULL;
int zero = 0;
signed char var_12 = (signed char)-51;
unsigned char var_13 = (unsigned char)45;
short var_14 = (short)-9495;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5327336626858724518LL;
unsigned int var_2 = 3402349810U;
unsigned int var_3 = 4072018513U;
signed char var_4 = (signed char)-85;
unsigned char var_7 = (unsigned char)246;
unsigned short var_16 = (unsigned short)51872;
int zero = 0;
short var_19 = (short)-2308;
short var_20 = (short)-31992;
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

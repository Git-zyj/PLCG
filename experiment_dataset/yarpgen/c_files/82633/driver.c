#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-30;
short var_1 = (short)-5646;
int var_4 = 1975230936;
short var_11 = (short)-18982;
long long int var_15 = 5250799373405291167LL;
int zero = 0;
int var_19 = 1322625049;
unsigned short var_20 = (unsigned short)64935;
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

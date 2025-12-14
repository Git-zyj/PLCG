#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-54;
unsigned char var_5 = (unsigned char)212;
short var_11 = (short)-26930;
unsigned int var_12 = 513430914U;
short var_18 = (short)-30114;
int zero = 0;
unsigned int var_19 = 3699446230U;
unsigned long long int var_20 = 4074573053618184116ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -7683585075900044772LL;
short var_8 = (short)-5291;
int var_11 = -400197956;
unsigned int var_12 = 1160662871U;
unsigned int var_13 = 1995988422U;
int zero = 0;
short var_19 = (short)-20412;
int var_20 = -1292399341;
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

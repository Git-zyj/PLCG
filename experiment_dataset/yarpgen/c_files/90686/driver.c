#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_10 = 12392437604440226496ULL;
unsigned int var_11 = 502589485U;
short var_13 = (short)-21964;
int zero = 0;
unsigned int var_18 = 3569203698U;
unsigned int var_19 = 2285065777U;
unsigned long long int var_20 = 12532604757082810761ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

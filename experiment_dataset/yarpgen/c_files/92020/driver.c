#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29664;
unsigned long long int var_4 = 6623144008841357891ULL;
int var_8 = -1308201773;
int var_11 = -143273794;
unsigned long long int var_15 = 1961083257117186697ULL;
int zero = 0;
long long int var_18 = -7441092229797281197LL;
unsigned int var_19 = 2246535028U;
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

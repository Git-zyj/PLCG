#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1831597258;
long long int var_3 = 2385222602361943438LL;
unsigned long long int var_5 = 10064402466648797564ULL;
short var_6 = (short)-2471;
long long int var_7 = -4827886248687750244LL;
short var_10 = (short)20739;
int var_11 = 2101931812;
unsigned long long int var_12 = 2822292793978752556ULL;
int var_13 = -423522624;
int zero = 0;
long long int var_14 = 5804411297861576831LL;
unsigned long long int var_15 = 6361000931317088345ULL;
short var_16 = (short)523;
short var_17 = (short)-13604;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

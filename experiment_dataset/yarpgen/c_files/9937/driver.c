#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-22969;
long long int var_7 = 5825153644537425944LL;
int var_10 = -1006934259;
long long int var_15 = 7993504928336777229LL;
int zero = 0;
long long int var_16 = -7068138244354321990LL;
long long int var_17 = -2472500151273876104LL;
unsigned char var_18 = (unsigned char)235;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2536189147U;
long long int var_6 = -520680969285683823LL;
long long int var_7 = -2856008356396878626LL;
unsigned long long int var_11 = 10256084338654670832ULL;
int zero = 0;
unsigned long long int var_18 = 3460401980276083293ULL;
short var_19 = (short)-12108;
long long int var_20 = -8349459938619203231LL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10127337150183479618ULL;
long long int var_9 = 7294607038346182415LL;
short var_13 = (short)-20678;
unsigned long long int var_16 = 14947288710679005889ULL;
unsigned long long int var_18 = 9448734816735063104ULL;
int zero = 0;
long long int var_19 = 7091275510942068201LL;
unsigned long long int var_20 = 9700967140885962285ULL;
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

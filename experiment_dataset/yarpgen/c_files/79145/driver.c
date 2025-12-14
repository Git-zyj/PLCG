#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7390;
int var_1 = -1420192814;
unsigned long long int var_3 = 273479214698345601ULL;
unsigned int var_8 = 1429157078U;
long long int var_9 = 2300667690375790013LL;
long long int var_15 = 7256009486664034891LL;
int zero = 0;
unsigned long long int var_17 = 15701356719647875206ULL;
long long int var_18 = -8808881744382115316LL;
unsigned long long int var_19 = 14673927864290504205ULL;
unsigned long long int var_20 = 2066662272252761605ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

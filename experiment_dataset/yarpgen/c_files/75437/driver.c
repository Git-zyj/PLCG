#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8702451001987209787LL;
short var_3 = (short)-14799;
unsigned long long int var_5 = 14940134313975560630ULL;
long long int var_9 = 237776023783655710LL;
short var_13 = (short)-29268;
int zero = 0;
unsigned int var_16 = 2012484900U;
long long int var_17 = 5564429853248046033LL;
unsigned int var_18 = 3254092758U;
unsigned int var_19 = 4149482660U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

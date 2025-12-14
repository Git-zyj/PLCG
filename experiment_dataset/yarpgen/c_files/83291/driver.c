#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 131590309;
short var_5 = (short)-22708;
long long int var_8 = 2019625130345487020LL;
unsigned int var_11 = 711886186U;
short var_18 = (short)-29707;
int zero = 0;
unsigned long long int var_20 = 13351580403962210106ULL;
signed char var_21 = (signed char)80;
unsigned int var_22 = 372505861U;
short var_23 = (short)-17068;
signed char var_24 = (signed char)116;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7544;
long long int var_5 = -3998657584103113977LL;
unsigned int var_16 = 1358980662U;
int zero = 0;
unsigned int var_18 = 2673641698U;
long long int var_19 = -2452630254204978976LL;
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

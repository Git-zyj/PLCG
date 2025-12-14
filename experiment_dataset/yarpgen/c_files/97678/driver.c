#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-13882;
unsigned int var_7 = 3758296295U;
short var_9 = (short)-30227;
long long int var_18 = -459298445938114391LL;
int zero = 0;
int var_20 = 840458440;
int var_21 = 323656278;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

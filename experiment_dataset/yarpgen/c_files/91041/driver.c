#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-15158;
short var_5 = (short)-22346;
short var_6 = (short)-30791;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = 1883894419;
unsigned int var_13 = 1833725464U;
short var_14 = (short)-14028;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

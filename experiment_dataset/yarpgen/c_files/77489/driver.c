#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1827466688U;
_Bool var_4 = (_Bool)0;
short var_7 = (short)-9431;
unsigned int var_9 = 396273897U;
signed char var_13 = (signed char)20;
int zero = 0;
unsigned int var_20 = 2782853116U;
unsigned int var_21 = 753444052U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)32;
long long int var_9 = 2421567177384294246LL;
short var_12 = (short)23014;
_Bool var_15 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)88;
unsigned int var_21 = 2325332815U;
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

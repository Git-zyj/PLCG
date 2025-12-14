#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3376255009993947662LL;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)20877;
short var_7 = (short)32731;
unsigned int var_9 = 2287222330U;
signed char var_11 = (signed char)-67;
int zero = 0;
int var_16 = 565318015;
signed char var_17 = (signed char)92;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

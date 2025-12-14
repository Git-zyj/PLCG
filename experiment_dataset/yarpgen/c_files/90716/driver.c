#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)67;
long long int var_4 = -292440032693516969LL;
unsigned char var_6 = (unsigned char)76;
long long int var_9 = 8246899587959613120LL;
long long int var_11 = 2069205478278874474LL;
int zero = 0;
unsigned char var_12 = (unsigned char)127;
long long int var_13 = -220705785004557183LL;
short var_14 = (short)1829;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

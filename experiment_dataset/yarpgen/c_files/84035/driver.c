#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)64769;
int zero = 0;
unsigned long long int var_10 = 4108670017079361397ULL;
unsigned long long int var_11 = 18316583235271717504ULL;
long long int var_12 = 8663356672745680834LL;
short var_13 = (short)-31630;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

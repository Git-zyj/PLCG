#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_5 = (short)-26986;
unsigned long long int var_10 = 14059695847701434922ULL;
short var_12 = (short)19294;
int zero = 0;
short var_15 = (short)-29296;
long long int var_16 = -5599705386564970389LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

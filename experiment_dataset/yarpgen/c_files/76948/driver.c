#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20587;
int var_5 = 1084758692;
short var_6 = (short)10919;
unsigned long long int var_14 = 14136681934743321684ULL;
int zero = 0;
signed char var_17 = (signed char)9;
short var_18 = (short)-15749;
int var_19 = 325730114;
int var_20 = -2025937326;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

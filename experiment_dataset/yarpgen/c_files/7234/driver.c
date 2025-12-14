#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 625890803246624377LL;
int var_4 = 1979648267;
_Bool var_5 = (_Bool)1;
int var_7 = 1434241998;
short var_10 = (short)-13653;
int zero = 0;
long long int var_11 = -2140128141753627098LL;
long long int var_12 = 7933205670351035059LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

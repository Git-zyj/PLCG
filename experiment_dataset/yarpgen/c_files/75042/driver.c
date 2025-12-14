#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6883591610183132126ULL;
unsigned int var_4 = 3768280528U;
unsigned int var_7 = 876761206U;
unsigned short var_10 = (unsigned short)31713;
int zero = 0;
short var_11 = (short)27499;
unsigned int var_12 = 2551889425U;
long long int var_13 = -1675446855558406417LL;
void init() {
}

void checksum() {
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

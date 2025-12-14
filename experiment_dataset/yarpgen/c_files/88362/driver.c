#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1099707017U;
short var_2 = (short)17615;
unsigned short var_4 = (unsigned short)15028;
int var_5 = 1597839909;
short var_7 = (short)24709;
unsigned short var_9 = (unsigned short)4181;
signed char var_10 = (signed char)-13;
signed char var_12 = (signed char)-30;
int zero = 0;
unsigned int var_14 = 238543228U;
unsigned short var_15 = (unsigned short)38010;
long long int var_16 = 2297435188872725376LL;
unsigned short var_17 = (unsigned short)35789;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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

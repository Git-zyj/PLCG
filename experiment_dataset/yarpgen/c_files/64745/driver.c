#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43090;
short var_4 = (short)-6693;
unsigned long long int var_7 = 5798757309401249585ULL;
signed char var_10 = (signed char)123;
long long int var_11 = 2396540163215448080LL;
int zero = 0;
unsigned short var_17 = (unsigned short)54282;
long long int var_18 = -5117331621547088924LL;
long long int var_19 = -171453429844964478LL;
unsigned int var_20 = 358696656U;
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

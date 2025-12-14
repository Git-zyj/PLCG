#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 1319263228701588403ULL;
long long int var_3 = 5385515480252964433LL;
unsigned long long int var_5 = 15288175873018727519ULL;
short var_7 = (short)7014;
int var_8 = 1356766765;
int zero = 0;
unsigned char var_10 = (unsigned char)110;
unsigned short var_11 = (unsigned short)6415;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

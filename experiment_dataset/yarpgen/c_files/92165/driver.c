#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1489224518;
int var_2 = -1607306985;
_Bool var_6 = (_Bool)1;
long long int var_7 = 8635597646703906821LL;
int var_13 = -635941831;
int zero = 0;
int var_14 = 1098524128;
int var_15 = 562054251;
int var_16 = -1665217950;
long long int var_17 = -3862856012164785268LL;
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

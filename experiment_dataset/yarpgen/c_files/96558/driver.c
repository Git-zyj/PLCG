#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36035;
unsigned short var_3 = (unsigned short)20027;
long long int var_7 = -3129749325754748990LL;
long long int var_10 = -950511412702799308LL;
int var_12 = 750583426;
long long int var_13 = -941241296160580949LL;
int var_14 = -751341715;
int zero = 0;
unsigned int var_16 = 2034473065U;
unsigned int var_17 = 2701928917U;
int var_18 = 1640492965;
long long int var_19 = 2198472837712012075LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

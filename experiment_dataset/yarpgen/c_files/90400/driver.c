#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1197041749;
unsigned long long int var_1 = 7012446774098635837ULL;
unsigned char var_2 = (unsigned char)138;
long long int var_5 = -3663615984324013193LL;
_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)59;
long long int var_10 = 4475655220214558433LL;
long long int var_12 = -939778760399022202LL;
int zero = 0;
unsigned char var_15 = (unsigned char)187;
short var_16 = (short)27263;
int var_17 = 959341077;
long long int var_18 = -1621601744067939837LL;
int var_19 = 574486050;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

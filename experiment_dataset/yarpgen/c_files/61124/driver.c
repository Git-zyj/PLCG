#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-103;
unsigned long long int var_3 = 9927066810176036469ULL;
unsigned short var_4 = (unsigned short)27596;
short var_6 = (short)-4708;
long long int var_7 = -560557185190368621LL;
int var_9 = -1625513066;
int var_12 = 1265200065;
long long int var_13 = -2432855810979613870LL;
long long int var_14 = -5439079541305024936LL;
unsigned short var_15 = (unsigned short)40659;
int zero = 0;
unsigned short var_16 = (unsigned short)14214;
unsigned long long int var_17 = 3866793796832793628ULL;
signed char var_18 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

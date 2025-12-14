#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 24514142U;
unsigned long long int var_2 = 9831426110788875865ULL;
long long int var_3 = -1092872092434148570LL;
unsigned long long int var_5 = 2729269511676414954ULL;
unsigned long long int var_11 = 14587236602353946541ULL;
unsigned short var_12 = (unsigned short)22690;
short var_13 = (short)-12955;
int var_17 = 105104947;
unsigned long long int var_18 = 7872114182716514441ULL;
int zero = 0;
signed char var_20 = (signed char)100;
unsigned int var_21 = 288502587U;
unsigned long long int var_22 = 123573427688004148ULL;
long long int var_23 = 6110816684107770908LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

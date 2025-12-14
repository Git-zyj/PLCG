#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 10993385014028444226ULL;
unsigned long long int var_3 = 4421265314554125697ULL;
long long int var_4 = -5339067729009638155LL;
int var_5 = -2109936388;
unsigned int var_6 = 498246749U;
unsigned int var_7 = 46967507U;
long long int var_8 = -4590801813791759631LL;
long long int var_9 = -2432032698036551132LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = -4726465517084015797LL;
unsigned short var_12 = (unsigned short)17526;
long long int var_13 = 5665073858969800275LL;
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

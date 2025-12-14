#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3449963652530158066LL;
_Bool var_1 = (_Bool)1;
int var_2 = 749463685;
unsigned short var_3 = (unsigned short)57636;
long long int var_4 = -9112864431216400018LL;
long long int var_5 = -8692297555486933621LL;
short var_6 = (short)11637;
long long int var_7 = 7567148494140378665LL;
unsigned char var_8 = (unsigned char)19;
unsigned long long int var_9 = 4421639326297154544ULL;
unsigned long long int var_10 = 15247082890738831282ULL;
int zero = 0;
unsigned int var_11 = 4152891059U;
signed char var_12 = (signed char)55;
unsigned int var_13 = 1446258379U;
short var_14 = (short)11746;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

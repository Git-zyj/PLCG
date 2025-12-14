#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 27225803285557649ULL;
unsigned int var_2 = 746458105U;
int var_3 = -788457668;
unsigned short var_4 = (unsigned short)11652;
_Bool var_5 = (_Bool)1;
long long int var_6 = 5131920619428626287LL;
long long int var_8 = 4224478821613886520LL;
signed char var_9 = (signed char)124;
int zero = 0;
short var_10 = (short)-5986;
long long int var_11 = -5288276221778873999LL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)29601;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

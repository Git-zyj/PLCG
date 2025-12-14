#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1283259859;
short var_1 = (short)12153;
_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)5323;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)19484;
_Bool var_10 = (_Bool)1;
short var_11 = (short)-14538;
int zero = 0;
unsigned short var_13 = (unsigned short)61852;
unsigned long long int var_14 = 4447032275130013229ULL;
unsigned long long int var_15 = 17623871318856955059ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

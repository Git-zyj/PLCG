#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8310;
long long int var_5 = -6365149431669005164LL;
unsigned short var_7 = (unsigned short)58931;
long long int var_9 = -2278627074008959674LL;
unsigned long long int var_10 = 5716925143891457346ULL;
short var_11 = (short)-16194;
unsigned short var_14 = (unsigned short)54395;
int zero = 0;
long long int var_16 = -8797471217928584640LL;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)32224;
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

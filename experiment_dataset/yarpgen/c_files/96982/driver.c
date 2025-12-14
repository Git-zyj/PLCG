#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
long long int var_1 = 4658468869993721657LL;
short var_5 = (short)20374;
short var_6 = (short)18459;
unsigned int var_7 = 2241596183U;
unsigned int var_9 = 1602149960U;
long long int var_10 = 8327029205118763736LL;
unsigned int var_11 = 972347518U;
signed char var_12 = (signed char)-41;
unsigned int var_13 = 2394006323U;
signed char var_14 = (signed char)-85;
unsigned short var_15 = (unsigned short)61141;
short var_16 = (short)13421;
int zero = 0;
long long int var_18 = -6447340085429462054LL;
short var_19 = (short)-1135;
unsigned int var_20 = 4292699303U;
unsigned short var_21 = (unsigned short)50483;
short var_22 = (short)11418;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

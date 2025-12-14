#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2128520853U;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 3424539261U;
unsigned long long int var_6 = 14968483687132469369ULL;
signed char var_7 = (signed char)-83;
long long int var_8 = 5796037118138594567LL;
unsigned short var_10 = (unsigned short)47831;
signed char var_11 = (signed char)-98;
signed char var_12 = (signed char)84;
unsigned short var_13 = (unsigned short)25113;
int var_14 = -1705324624;
unsigned long long int var_15 = 11765951478885867998ULL;
int zero = 0;
int var_16 = 2055100309;
unsigned long long int var_17 = 13953961649017000741ULL;
unsigned int var_18 = 2856734938U;
short var_19 = (short)-6134;
short var_20 = (short)-26682;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

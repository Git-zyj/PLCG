#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1776746358;
int var_4 = -484140607;
int var_5 = -1533197357;
unsigned short var_6 = (unsigned short)49260;
int var_9 = -438223254;
int var_10 = 2037085679;
int var_11 = 410304713;
signed char var_13 = (signed char)-38;
short var_14 = (short)-27607;
long long int var_17 = -2555528730202905223LL;
int zero = 0;
long long int var_18 = 8843776790443983108LL;
int var_19 = -401784725;
long long int var_20 = 5389016948961948357LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

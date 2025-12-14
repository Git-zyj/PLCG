#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1328;
long long int var_2 = -7051964593522787245LL;
_Bool var_4 = (_Bool)0;
unsigned int var_8 = 3585849443U;
unsigned int var_11 = 3116225758U;
short var_12 = (short)-31339;
unsigned long long int var_13 = 13096460663294670367ULL;
signed char var_14 = (signed char)-64;
unsigned long long int var_16 = 13644890976988492215ULL;
int var_17 = 1052438154;
int zero = 0;
long long int var_20 = -2631158587423339662LL;
long long int var_21 = 5883333403373772105LL;
void init() {
}

void checksum() {
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

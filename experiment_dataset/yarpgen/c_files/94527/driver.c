#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_4 = 5555667748886458197LL;
short var_5 = (short)2776;
short var_9 = (short)715;
short var_11 = (short)6122;
signed char var_13 = (signed char)-33;
short var_14 = (short)30230;
signed char var_16 = (signed char)84;
unsigned int var_17 = 2197542281U;
int zero = 0;
long long int var_18 = 8718305430663138716LL;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 11739940988736467670ULL;
signed char var_21 = (signed char)-73;
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

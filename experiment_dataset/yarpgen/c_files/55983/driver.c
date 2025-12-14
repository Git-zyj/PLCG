#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5655971312987565574LL;
int var_1 = 292755019;
short var_3 = (short)-28507;
long long int var_5 = -2106881904397868600LL;
long long int var_6 = 562939952401473412LL;
int var_8 = -1996769963;
int var_9 = -316472335;
long long int var_10 = -8596236731397497412LL;
_Bool var_12 = (_Bool)0;
signed char var_17 = (signed char)77;
int zero = 0;
unsigned long long int var_18 = 12746105106537167252ULL;
short var_19 = (short)10985;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

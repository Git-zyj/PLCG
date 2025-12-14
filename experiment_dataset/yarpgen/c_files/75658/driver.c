#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -406555943;
long long int var_3 = 5648196411147398709LL;
unsigned int var_5 = 1833616609U;
_Bool var_6 = (_Bool)0;
long long int var_11 = -6306532085921468710LL;
signed char var_12 = (signed char)36;
unsigned int var_16 = 480075330U;
unsigned short var_17 = (unsigned short)3014;
int zero = 0;
unsigned int var_19 = 3226292810U;
short var_20 = (short)-11757;
void init() {
}

void checksum() {
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

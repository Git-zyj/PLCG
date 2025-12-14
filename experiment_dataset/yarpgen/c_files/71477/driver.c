#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-33;
unsigned short var_2 = (unsigned short)26343;
unsigned int var_3 = 3551886963U;
long long int var_6 = -7296050235293595725LL;
long long int var_8 = -3590099050804132534LL;
unsigned short var_10 = (unsigned short)42023;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2892489823448387501LL;
long long int var_14 = -8181952204764364924LL;
int zero = 0;
short var_15 = (short)-24376;
int var_16 = -2001589217;
signed char var_17 = (signed char)-22;
unsigned long long int var_18 = 8068967755039697997ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21470;
unsigned short var_2 = (unsigned short)4441;
short var_3 = (short)-7062;
long long int var_6 = -30288815284066860LL;
short var_7 = (short)-13694;
signed char var_8 = (signed char)-48;
short var_12 = (short)-29581;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3034530941U;
int zero = 0;
short var_17 = (short)21850;
_Bool var_18 = (_Bool)0;
long long int var_19 = -2301513566072034911LL;
unsigned short var_20 = (unsigned short)59807;
void init() {
}

void checksum() {
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

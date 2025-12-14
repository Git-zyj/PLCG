#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned char var_1 = (unsigned char)80;
long long int var_2 = -4830248084253003308LL;
short var_4 = (short)24539;
unsigned char var_5 = (unsigned char)109;
unsigned int var_6 = 1626412461U;
long long int var_7 = -5980052193721034924LL;
short var_8 = (short)-9430;
signed char var_9 = (signed char)-108;
int var_10 = -1681987839;
signed char var_12 = (signed char)67;
unsigned char var_13 = (unsigned char)82;
int var_14 = 1103641632;
signed char var_15 = (signed char)114;
int zero = 0;
short var_16 = (short)-14470;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

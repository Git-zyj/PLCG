#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1872925316U;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)169;
long long int var_5 = 1837158637334937235LL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)38;
unsigned char var_9 = (unsigned char)86;
short var_10 = (short)18263;
unsigned short var_11 = (unsigned short)60991;
unsigned char var_13 = (unsigned char)39;
unsigned int var_14 = 3385674962U;
unsigned char var_15 = (unsigned char)142;
unsigned int var_16 = 3785885018U;
long long int var_17 = 7341785047504687319LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)12053;
unsigned char var_20 = (unsigned char)59;
void init() {
}

void checksum() {
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

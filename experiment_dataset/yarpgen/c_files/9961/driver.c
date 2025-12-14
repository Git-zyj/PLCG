#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3658940799U;
short var_1 = (short)-1525;
short var_4 = (short)-23323;
int var_6 = 9195615;
_Bool var_7 = (_Bool)1;
long long int var_8 = 6035420701340425415LL;
int var_11 = 1688759296;
short var_12 = (short)-10593;
unsigned short var_15 = (unsigned short)19723;
unsigned int var_18 = 114636746U;
int zero = 0;
unsigned long long int var_20 = 11510838535695244074ULL;
unsigned short var_21 = (unsigned short)18846;
short var_22 = (short)16888;
unsigned int var_23 = 1715317437U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

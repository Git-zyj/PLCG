#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)175;
int zero = 0;
unsigned short var_10 = (unsigned short)39389;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)8254;
long long int var_13 = -6937224490810435209LL;
unsigned short var_14 = (unsigned short)41452;
short var_15 = (short)4542;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

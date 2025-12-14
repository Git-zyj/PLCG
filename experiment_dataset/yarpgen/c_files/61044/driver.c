#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21662;
unsigned short var_2 = (unsigned short)37012;
unsigned short var_7 = (unsigned short)38942;
int var_8 = 698060299;
unsigned short var_10 = (unsigned short)52775;
short var_11 = (short)-13112;
_Bool var_12 = (_Bool)1;
unsigned int var_15 = 860621556U;
unsigned short var_16 = (unsigned short)16756;
int var_18 = -1248175561;
int var_19 = -1287628970;
int zero = 0;
short var_20 = (short)25489;
int var_21 = -516857367;
short var_22 = (short)20446;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)5953;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

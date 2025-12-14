#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1036945239;
_Bool var_2 = (_Bool)0;
short var_3 = (short)16198;
short var_7 = (short)16032;
short var_9 = (short)16954;
unsigned char var_12 = (unsigned char)81;
short var_16 = (short)-13890;
int zero = 0;
unsigned char var_17 = (unsigned char)178;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)6162;
short var_20 = (short)26217;
int var_21 = -786406740;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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

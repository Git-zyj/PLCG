#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
signed char var_1 = (signed char)120;
int var_2 = -591755764;
unsigned short var_3 = (unsigned short)60369;
long long int var_4 = 1221781435727605191LL;
signed char var_5 = (signed char)-1;
unsigned short var_7 = (unsigned short)48037;
short var_8 = (short)-2313;
short var_9 = (short)-1002;
short var_10 = (short)26753;
short var_13 = (short)10316;
unsigned char var_14 = (unsigned char)7;
unsigned long long int var_15 = 15283169061307763812ULL;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1548501451U;
signed char var_18 = (signed char)-99;
int var_19 = 1678826273;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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

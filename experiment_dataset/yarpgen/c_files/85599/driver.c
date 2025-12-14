#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)169;
int var_3 = 702435940;
short var_5 = (short)17189;
unsigned long long int var_6 = 6420881351548841901ULL;
_Bool var_8 = (_Bool)1;
signed char var_12 = (signed char)120;
short var_14 = (short)7198;
unsigned int var_18 = 1853354331U;
int zero = 0;
short var_19 = (short)22394;
unsigned int var_20 = 2060988583U;
signed char var_21 = (signed char)-92;
unsigned short var_22 = (unsigned short)52703;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

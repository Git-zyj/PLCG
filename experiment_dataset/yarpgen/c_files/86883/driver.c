#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)15;
unsigned char var_4 = (unsigned char)8;
signed char var_5 = (signed char)76;
signed char var_6 = (signed char)-115;
_Bool var_7 = (_Bool)0;
long long int var_8 = -3391337255383594919LL;
int var_9 = 1730746747;
unsigned short var_10 = (unsigned short)7914;
unsigned int var_11 = 395961287U;
unsigned short var_13 = (unsigned short)26965;
unsigned char var_15 = (unsigned char)143;
int var_16 = 964595537;
int zero = 0;
long long int var_17 = 7370253578105521832LL;
long long int var_18 = 1814778691327527671LL;
signed char var_19 = (signed char)101;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)26929;
unsigned int var_4 = 557126695U;
unsigned char var_5 = (unsigned char)225;
unsigned short var_8 = (unsigned short)42128;
signed char var_9 = (signed char)-112;
unsigned int var_10 = 423496595U;
unsigned int var_11 = 1524223782U;
short var_12 = (short)-7961;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 3706067726U;
unsigned int var_20 = 1004016691U;
unsigned short var_21 = (unsigned short)56563;
_Bool var_22 = (_Bool)0;
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

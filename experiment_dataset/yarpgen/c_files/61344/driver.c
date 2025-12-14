#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_3 = 1084669401093683994LL;
signed char var_5 = (signed char)-42;
short var_6 = (short)20702;
unsigned long long int var_10 = 16722447523521058001ULL;
_Bool var_12 = (_Bool)1;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 7727345689854063844ULL;
unsigned short var_19 = (unsigned short)37343;
int zero = 0;
long long int var_20 = -7003565464998482121LL;
unsigned int var_21 = 4228903040U;
unsigned char var_22 = (unsigned char)203;
signed char var_23 = (signed char)-26;
unsigned long long int var_24 = 15768993405500792595ULL;
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

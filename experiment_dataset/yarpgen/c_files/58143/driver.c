#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -2346824358676042972LL;
unsigned short var_7 = (unsigned short)38939;
unsigned long long int var_8 = 4884616440259503800ULL;
short var_10 = (short)8303;
long long int var_11 = -4239825942582300159LL;
int var_12 = -852812267;
unsigned short var_15 = (unsigned short)37159;
short var_16 = (short)14361;
int zero = 0;
short var_17 = (short)-20007;
signed char var_18 = (signed char)121;
unsigned char var_19 = (unsigned char)179;
unsigned short var_20 = (unsigned short)62441;
signed char var_21 = (signed char)115;
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

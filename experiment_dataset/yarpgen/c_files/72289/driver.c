#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8701;
short var_1 = (short)-11879;
unsigned long long int var_3 = 10343163814179536901ULL;
unsigned char var_4 = (unsigned char)213;
int var_5 = -1252434121;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 293829495825700588ULL;
unsigned char var_11 = (unsigned char)211;
unsigned long long int var_12 = 13327626646159184287ULL;
int var_14 = -930845585;
unsigned short var_16 = (unsigned short)48941;
unsigned char var_17 = (unsigned char)244;
int zero = 0;
unsigned char var_18 = (unsigned char)3;
short var_19 = (short)26545;
unsigned long long int var_20 = 17383714330020378373ULL;
unsigned long long int var_21 = 12678282595631537600ULL;
unsigned char var_22 = (unsigned char)240;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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

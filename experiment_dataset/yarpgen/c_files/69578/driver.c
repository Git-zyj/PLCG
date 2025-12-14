#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -131117652;
unsigned short var_2 = (unsigned short)45110;
int var_4 = -1602199391;
unsigned long long int var_5 = 6501587679287596916ULL;
int var_6 = -1646660581;
unsigned short var_8 = (unsigned short)48658;
int var_10 = -163824535;
signed char var_11 = (signed char)-44;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 12343007871187559790ULL;
unsigned short var_15 = (unsigned short)13567;
int zero = 0;
unsigned char var_18 = (unsigned char)132;
unsigned char var_19 = (unsigned char)99;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)2885;
unsigned short var_22 = (unsigned short)10337;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)51;
_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)254;
_Bool var_3 = (_Bool)0;
long long int var_5 = 5509056693564905141LL;
long long int var_6 = -5805023213049889075LL;
short var_7 = (short)26002;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)32758;
unsigned int var_10 = 889231513U;
long long int var_11 = 3635687460895531838LL;
unsigned short var_12 = (unsigned short)30764;
_Bool var_14 = (_Bool)1;
int var_15 = -75592317;
int zero = 0;
long long int var_16 = 5370945568139963198LL;
short var_17 = (short)-26598;
short var_18 = (short)-413;
unsigned int var_19 = 737661555U;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

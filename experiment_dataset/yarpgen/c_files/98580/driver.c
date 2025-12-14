#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)85;
_Bool var_2 = (_Bool)1;
short var_4 = (short)-15421;
unsigned int var_5 = 3118271061U;
long long int var_6 = -1843110408805319839LL;
_Bool var_7 = (_Bool)0;
short var_8 = (short)29855;
int var_9 = -113027478;
unsigned int var_10 = 1285902765U;
int zero = 0;
unsigned int var_12 = 934527475U;
unsigned short var_13 = (unsigned short)65219;
int var_14 = -706490343;
unsigned char var_15 = (unsigned char)10;
short var_16 = (short)23272;
unsigned long long int var_17 = 9292226816828643017ULL;
long long int var_18 = -1064224677922641210LL;
unsigned long long int var_19 = 6698412113294472313ULL;
unsigned short var_20 = (unsigned short)25692;
unsigned int var_21 = 4206181474U;
unsigned int var_22 = 592315728U;
unsigned long long int var_23 = 7944873398876083702ULL;
int var_24 = 1126602772;
signed char var_25 = (signed char)56;
int var_26 = -7322292;
short var_27 = (short)-17624;
short var_28 = (short)4248;
unsigned int var_29 = 2366022290U;
short var_30 = (short)-9435;
unsigned int var_31 = 2019374467U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

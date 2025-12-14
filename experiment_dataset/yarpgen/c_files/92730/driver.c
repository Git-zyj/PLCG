#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
signed char var_1 = (signed char)-114;
short var_2 = (short)20012;
unsigned long long int var_3 = 93277998047808329ULL;
signed char var_5 = (signed char)55;
short var_6 = (short)7069;
unsigned short var_7 = (unsigned short)9275;
unsigned short var_8 = (unsigned short)34909;
unsigned char var_9 = (unsigned char)243;
int zero = 0;
unsigned long long int var_11 = 14808308752555539166ULL;
_Bool var_12 = (_Bool)1;
long long int var_13 = -8558746290548907364LL;
int var_14 = 653684896;
unsigned short var_15 = (unsigned short)61064;
unsigned int var_16 = 355738529U;
long long int var_17 = 3303166226062631668LL;
unsigned long long int var_18 = 14162537066748150378ULL;
unsigned char var_19 = (unsigned char)156;
long long int var_20 = 5792546066663877656LL;
unsigned short var_21 = (unsigned short)3131;
unsigned short var_22 = (unsigned short)50581;
unsigned long long int var_23 = 17373023910766044694ULL;
unsigned char var_24 = (unsigned char)127;
unsigned short var_25 = (unsigned short)15832;
short var_26 = (short)1212;
long long int var_27 = 4873801510980011014LL;
unsigned short var_28 = (unsigned short)11097;
short var_29 = (short)-206;
unsigned int var_30 = 1490591158U;
signed char var_31 = (signed char)58;
long long int var_32 = -1899829738938543792LL;
unsigned long long int var_33 = 1190639495864365187ULL;
short var_34 = (short)-5113;
long long int var_35 = -8600750224419793555LL;
unsigned short var_36 = (unsigned short)24614;
short var_37 = (short)1783;
unsigned short var_38 = (unsigned short)15725;
unsigned short var_39 = (unsigned short)56757;
long long int var_40 = -622689594262579121LL;
long long int var_41 = 3742210744460158175LL;
unsigned long long int var_42 = 17207562897850369378ULL;
unsigned long long int var_43 = 15377252656437110380ULL;
signed char var_44 = (signed char)99;
unsigned int var_45 = 1490353536U;
short var_46 = (short)-17480;
long long int var_47 = -7190207970347125753LL;
unsigned long long int var_48 = 4669272729146797946ULL;
signed char var_49 = (signed char)-34;
unsigned long long int var_50 = 6133365550680239244ULL;
unsigned long long int var_51 = 3159013848836220131ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2294765749U;
unsigned char var_1 = (unsigned char)115;
long long int var_2 = -530436150418318410LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)64254;
unsigned char var_5 = (unsigned char)88;
unsigned char var_6 = (unsigned char)100;
unsigned char var_7 = (unsigned char)168;
unsigned char var_8 = (unsigned char)167;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)52897;
unsigned char var_11 = (unsigned char)4;
_Bool var_12 = (_Bool)0;
long long int var_13 = 8276498795903262332LL;
unsigned char var_14 = (unsigned char)161;
unsigned int var_16 = 3541037605U;
long long int var_17 = -7275583255312579673LL;
unsigned short var_18 = (unsigned short)13986;
int zero = 0;
unsigned char var_19 = (unsigned char)69;
unsigned char var_20 = (unsigned char)117;
unsigned short var_21 = (unsigned short)55377;
unsigned short var_22 = (unsigned short)47951;
unsigned char var_23 = (unsigned char)68;
unsigned char var_24 = (unsigned char)164;
unsigned char var_25 = (unsigned char)83;
unsigned short var_26 = (unsigned short)21039;
unsigned char var_27 = (unsigned char)214;
long long int var_28 = 5900588200632756064LL;
unsigned char var_29 = (unsigned char)123;
long long int var_30 = 4178161063206968615LL;
unsigned char var_31 = (unsigned char)18;
long long int var_32 = 4740583056633598574LL;
_Bool var_33 = (_Bool)0;
unsigned char var_34 = (unsigned char)106;
unsigned long long int var_35 = 17211592015820835220ULL;
long long int var_36 = -1994497706252421744LL;
unsigned char var_37 = (unsigned char)224;
unsigned char var_38 = (unsigned char)193;
unsigned short var_39 = (unsigned short)45125;
unsigned char var_40 = (unsigned char)126;
unsigned char var_41 = (unsigned char)122;
unsigned short var_42 = (unsigned short)5806;
unsigned char var_43 = (unsigned char)33;
long long int var_44 = 6838882862828329754LL;
unsigned char var_45 = (unsigned char)142;
void init() {
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

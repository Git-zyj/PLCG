#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1062943672;
unsigned short var_1 = (unsigned short)10462;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 16592401822318470771ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)39708;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 16411699560303691733ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)41548;
_Bool var_12 = (_Bool)0;
int var_13 = -587762530;
unsigned short var_14 = (unsigned short)33540;
int var_15 = -444729071;
int zero = 0;
unsigned long long int var_16 = 5926243011045276757ULL;
unsigned short var_17 = (unsigned short)55725;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)21255;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)59740;
int var_23 = -1289948025;
int var_24 = -741717382;
unsigned short var_25 = (unsigned short)42590;
unsigned short var_26 = (unsigned short)12308;
signed char var_27 = (signed char)30;
int var_28 = 851799689;
_Bool var_29 = (_Bool)0;
int var_30 = 2024341434;
unsigned short var_31 = (unsigned short)31773;
_Bool var_32 = (_Bool)1;
signed char var_33 = (signed char)-125;
unsigned short var_34 = (unsigned short)39487;
unsigned short var_35 = (unsigned short)42204;
_Bool var_36 = (_Bool)1;
_Bool var_37 = (_Bool)1;
int var_38 = -212344508;
unsigned long long int var_39 = 16316708317211091922ULL;
_Bool var_40 = (_Bool)1;
unsigned short var_41 = (unsigned short)44560;
_Bool var_42 = (_Bool)1;
unsigned short var_43 = (unsigned short)26173;
_Bool var_44 = (_Bool)1;
signed char var_45 = (signed char)83;
_Bool var_46 = (_Bool)0;
unsigned short var_47 = (unsigned short)9581;
unsigned short var_48 = (unsigned short)64515;
int var_49 = -1905648389;
signed char var_50 = (signed char)-120;
signed char var_51 = (signed char)-31;
int var_52 = -1466633030;
unsigned long long int var_53 = 16098116278054803928ULL;
_Bool var_54 = (_Bool)1;
signed char var_55 = (signed char)-33;
unsigned long long int var_56 = 10017436940284248231ULL;
signed char var_57 = (signed char)-23;
int var_58 = -392788331;
signed char var_59 = (signed char)-9;
_Bool var_60 = (_Bool)1;
_Bool var_61 = (_Bool)1;
unsigned short var_62 = (unsigned short)22303;
signed char var_63 = (signed char)-99;
_Bool var_64 = (_Bool)1;
_Bool var_65 = (_Bool)1;
void init() {
}

void checksum() {
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
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

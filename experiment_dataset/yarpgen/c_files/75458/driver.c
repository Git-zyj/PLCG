#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7056217085053976559ULL;
signed char var_1 = (signed char)-41;
short var_2 = (short)-8057;
unsigned int var_3 = 156341981U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)14457;
unsigned char var_6 = (unsigned char)82;
long long int var_7 = 4229805481097854836LL;
long long int var_8 = -8118274576484715787LL;
unsigned int var_9 = 1025960395U;
int zero = 0;
int var_11 = 1330582745;
long long int var_12 = 6659197459107589703LL;
short var_13 = (short)-1875;
signed char var_14 = (signed char)-74;
short var_15 = (short)-25863;
unsigned long long int var_16 = 7849330581138923425ULL;
short var_17 = (short)-16744;
long long int var_18 = 6585829848218834520LL;
unsigned char var_19 = (unsigned char)105;
signed char var_20 = (signed char)-116;
unsigned int var_21 = 339922203U;
unsigned long long int var_22 = 12603642310675813120ULL;
long long int var_23 = -4386896130117589497LL;
int var_24 = 1228136310;
short var_25 = (short)25956;
unsigned long long int var_26 = 15622924475959436451ULL;
unsigned short var_27 = (unsigned short)17691;
unsigned char var_28 = (unsigned char)37;
long long int var_29 = -2144917733004276873LL;
unsigned char var_30 = (unsigned char)147;
unsigned int var_31 = 4110941398U;
int var_32 = 1535797054;
unsigned int var_33 = 3495943422U;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)180;
unsigned char var_36 = (unsigned char)242;
unsigned short var_37 = (unsigned short)38080;
int var_38 = -1308383869;
int var_39 = 436467092;
long long int var_40 = 6289720417979483876LL;
int var_41 = 47696680;
int var_42 = -476953498;
unsigned long long int var_43 = 8942719621497536924ULL;
unsigned char var_44 = (unsigned char)164;
unsigned short var_45 = (unsigned short)9150;
unsigned char var_46 = (unsigned char)29;
int var_47 = -1853116288;
unsigned short var_48 = (unsigned short)2693;
unsigned long long int var_49 = 7221180143822815403ULL;
short var_50 = (short)25721;
int var_51 = 228730425;
short var_52 = (short)32584;
unsigned char var_53 = (unsigned char)83;
signed char var_54 = (signed char)-106;
int var_55 = 264252708;
short var_56 = (short)18234;
unsigned char var_57 = (unsigned char)66;
int var_58 = 41334991;
int var_59 = 1580003258;
_Bool arr_0 [18] ;
long long int arr_1 [18] ;
unsigned int arr_3 [18] ;
long long int arr_4 [18] ;
short arr_5 [18] [18] [18] [18] ;
unsigned int arr_6 [18] [18] [18] [18] ;
long long int arr_7 [18] [18] [18] ;
_Bool arr_8 [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] ;
long long int arr_12 [18] [18] ;
unsigned int arr_13 [18] [18] [18] [18] ;
unsigned int arr_14 [18] ;
short arr_15 [18] ;
unsigned short arr_17 [18] [18] [18] [18] [18] [18] [18] ;
signed char arr_20 [18] ;
int arr_23 [18] ;
unsigned int arr_24 [18] [18] [18] [18] [18] [18] ;
int arr_25 [18] [18] [18] [18] ;
unsigned char arr_26 [18] [18] ;
long long int arr_27 [18] [18] [18] [18] ;
long long int arr_28 [18] [18] [18] [18] [18] ;
long long int arr_32 [18] [18] [18] [18] [18] [18] [18] ;
unsigned char arr_35 [18] [18] [18] [18] [18] ;
signed char arr_48 [24] ;
unsigned long long int arr_49 [24] [24] ;
_Bool arr_51 [24] ;
long long int arr_54 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_59 [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = -2597686657858248736LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 354202215U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = 7743592711788238972LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (short)-4884;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1932808264U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -3264320423129593194LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 8435062236973880536ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = -7527717943363900431LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2498706675U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? 4284236816U : 2005034065U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (short)-3116 : (short)30926;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (unsigned short)64849 : (unsigned short)1672;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_23 [i_0] = -1468388492;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1648727664U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 1555916766;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = 6899582105828981937LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = -8135585199676326799LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = -8454951475457619836LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_48 [i_0] = (i_0 % 2 == 0) ? (signed char)61 : (signed char)55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_49 [i_0] [i_1] = 16203352580708829607ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_51 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 24446101026453546LL : -3694594199799592616LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)158;
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
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

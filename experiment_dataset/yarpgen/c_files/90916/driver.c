#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
long long int var_2 = -8859097996738732547LL;
long long int var_3 = 1408412037948973968LL;
unsigned char var_4 = (unsigned char)207;
unsigned int var_5 = 740073954U;
long long int var_6 = 912477723727837833LL;
unsigned char var_7 = (unsigned char)133;
int var_8 = -1817810156;
unsigned char var_9 = (unsigned char)145;
long long int var_10 = 1742183573048480468LL;
unsigned int var_11 = 1670428667U;
long long int var_12 = 2060948376423666370LL;
unsigned char var_13 = (unsigned char)82;
int var_14 = 2013358061;
long long int var_15 = -8453167682611580354LL;
int zero = 0;
unsigned char var_16 = (unsigned char)188;
long long int var_17 = -6299714731445980550LL;
int var_18 = -2105849789;
unsigned short var_19 = (unsigned short)42681;
long long int var_20 = -5981725574915833044LL;
int var_21 = -1106393759;
long long int var_22 = 4643106670224006738LL;
unsigned char var_23 = (unsigned char)194;
short var_24 = (short)7681;
unsigned char var_25 = (unsigned char)134;
int var_26 = 1386329982;
int var_27 = 1522074337;
short var_28 = (short)-14821;
long long int var_29 = 9078686572345685923LL;
long long int var_30 = 7126860143356952104LL;
unsigned char var_31 = (unsigned char)63;
unsigned char var_32 = (unsigned char)252;
unsigned short var_33 = (unsigned short)15211;
short var_34 = (short)4064;
unsigned int var_35 = 1866792950U;
unsigned int var_36 = 1083712162U;
int var_37 = -434588375;
unsigned char var_38 = (unsigned char)11;
unsigned char var_39 = (unsigned char)101;
int var_40 = -1461914940;
int var_41 = 2063728421;
unsigned char arr_1 [12] ;
short arr_7 [15] [15] ;
long long int arr_9 [15] ;
long long int arr_14 [15] [15] [15] [15] ;
int arr_16 [15] [15] [15] ;
long long int arr_17 [15] [15] [15] [15] ;
unsigned int arr_18 [15] [15] [15] ;
unsigned short arr_20 [15] [15] [15] [15] ;
unsigned char arr_21 [15] ;
unsigned char arr_23 [15] ;
short arr_24 [15] ;
unsigned char arr_27 [15] [15] [15] [15] [15] ;
unsigned char arr_29 [15] [15] ;
int arr_33 [15] ;
int arr_35 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_5 [12] [12] ;
long long int arr_8 [15] ;
short arr_22 [15] [15] [15] [15] ;
int arr_25 [15] [15] [15] ;
short arr_30 [15] ;
long long int arr_38 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-24805;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = -3819163029062271268LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = -3336099298277688464LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 53655175;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 6190683944965792393LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3869369580U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned short)47427;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_24 [i_0] = (short)31232;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)38;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_33 [i_0] = 320763158;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2043105488;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3450712504U : 4162437796U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -8304316957489332916LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)-14440;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = -1864033790;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? (short)4319 : (short)-1937;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? -4033365922097929421LL : 2341373876698338287LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_22 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

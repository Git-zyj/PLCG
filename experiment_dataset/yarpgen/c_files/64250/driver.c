#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)54439;
unsigned int var_3 = 3465857507U;
unsigned long long int var_4 = 16622813076932032126ULL;
signed char var_5 = (signed char)34;
signed char var_8 = (signed char)-32;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)45773;
long long int var_16 = -7113758648054117106LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
short var_20 = (short)17824;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 7603675259249282899ULL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)36487;
unsigned int var_25 = 280766953U;
_Bool var_26 = (_Bool)1;
unsigned long long int var_27 = 9419083676554965514ULL;
unsigned long long int var_28 = 17764599493318331036ULL;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 1497249826U;
signed char var_31 = (signed char)36;
unsigned int var_32 = 2073903919U;
_Bool var_33 = (_Bool)1;
unsigned char var_34 = (unsigned char)180;
signed char var_35 = (signed char)105;
unsigned int var_36 = 1703885967U;
unsigned short var_37 = (unsigned short)48065;
signed char var_38 = (signed char)-93;
short var_39 = (short)-4011;
unsigned long long int var_40 = 4185541918318907910ULL;
unsigned short var_41 = (unsigned short)38716;
long long int var_42 = 4286543623934248246LL;
signed char var_43 = (signed char)-44;
_Bool var_44 = (_Bool)1;
unsigned char var_45 = (unsigned char)4;
short var_46 = (short)17408;
long long int var_47 = 9053478541460616804LL;
_Bool var_48 = (_Bool)0;
unsigned char var_49 = (unsigned char)54;
unsigned char var_50 = (unsigned char)168;
unsigned long long int var_51 = 6098104930807545361ULL;
unsigned int var_52 = 1057801385U;
_Bool var_53 = (_Bool)0;
unsigned char var_54 = (unsigned char)35;
int var_55 = -1447762802;
unsigned int arr_0 [15] ;
_Bool arr_1 [15] ;
unsigned int arr_2 [15] [15] ;
unsigned int arr_3 [15] ;
_Bool arr_4 [15] [15] ;
signed char arr_5 [15] [15] [15] [15] ;
unsigned long long int arr_6 [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] ;
unsigned long long int arr_11 [15] [15] [15] [15] ;
_Bool arr_13 [15] [15] [15] [15] [15] ;
_Bool arr_14 [15] [15] [15] [15] [15] [15] [15] ;
short arr_15 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_16 [15] [15] ;
long long int arr_17 [15] [15] [15] ;
_Bool arr_19 [15] [15] [15] ;
_Bool arr_25 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 493448601U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 799548395U : 3525607358U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 433502727U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-106 : (signed char)-6;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 15491490858323355870ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 14149436308368493586ULL : 7647680194159295672ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 8963444810025925505ULL : 803928836602490381ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-24196;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)31290 : (unsigned short)51326;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 7462556154176310866LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

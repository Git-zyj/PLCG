#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3417942389U;
signed char var_2 = (signed char)77;
unsigned long long int var_3 = 18063914755340790831ULL;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-102;
int var_8 = 1944866981;
int var_9 = -1523113629;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
long long int var_13 = 7608535358760713745LL;
signed char var_14 = (signed char)104;
int zero = 0;
unsigned char var_15 = (unsigned char)231;
unsigned char var_16 = (unsigned char)72;
unsigned short var_17 = (unsigned short)37932;
unsigned long long int var_18 = 1363861065126499050ULL;
unsigned long long int var_19 = 7503188553961526204ULL;
unsigned int var_20 = 3144939227U;
unsigned long long int var_21 = 16460015246612561598ULL;
unsigned short var_22 = (unsigned short)47464;
int var_23 = 308953265;
unsigned long long int var_24 = 784727160401307913ULL;
short var_25 = (short)-12387;
int var_26 = 1407869487;
unsigned int var_27 = 2164665435U;
_Bool var_28 = (_Bool)0;
long long int var_29 = -8734593637995542090LL;
int var_30 = -216345599;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 2709698642U;
unsigned short var_33 = (unsigned short)46402;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 3427939445U;
unsigned long long int var_36 = 17561792065646010647ULL;
_Bool var_37 = (_Bool)1;
unsigned long long int var_38 = 6236250301625609999ULL;
int var_39 = -1865901201;
_Bool var_40 = (_Bool)1;
int var_41 = -1938462569;
int var_42 = -2082258928;
unsigned long long int var_43 = 9454167777607219796ULL;
_Bool var_44 = (_Bool)0;
int var_45 = 1984216457;
_Bool var_46 = (_Bool)0;
unsigned short var_47 = (unsigned short)3183;
unsigned char var_48 = (unsigned char)205;
unsigned long long int var_49 = 11133248996979979816ULL;
long long int var_50 = 8664981120174663784LL;
short var_51 = (short)10701;
long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
_Bool arr_2 [17] [17] ;
signed char arr_3 [17] [17] ;
unsigned short arr_4 [17] ;
unsigned char arr_5 [17] [17] [17] ;
unsigned long long int arr_7 [17] [17] ;
long long int arr_8 [17] [17] ;
long long int arr_9 [17] [17] [17] [17] [17] ;
long long int arr_10 [17] [17] [17] [17] [17] [17] ;
unsigned long long int arr_11 [17] [17] [17] [17] [17] [17] ;
unsigned int arr_12 [17] [17] [17] [17] [17] [17] [17] ;
unsigned int arr_13 [17] [17] [17] [17] [17] ;
unsigned int arr_16 [14] [14] ;
unsigned int arr_18 [14] [14] [14] ;
short arr_19 [14] ;
unsigned long long int arr_21 [14] ;
long long int arr_32 [14] ;
unsigned char arr_34 [14] [14] [14] [14] [14] [14] ;
signed char arr_37 [14] ;
_Bool arr_38 [14] [14] [14] [14] [14] [14] ;
unsigned char arr_39 [14] [14] ;
signed char arr_42 [14] [14] [14] ;
long long int arr_43 [14] [14] [14] [14] [14] ;
short arr_44 [14] ;
unsigned long long int arr_48 [14] [14] [14] [14] ;
unsigned short arr_49 [14] ;
unsigned char arr_52 [21] ;
signed char arr_54 [21] [21] ;
long long int arr_6 [17] ;
_Bool arr_24 [14] [14] [14] ;
long long int arr_25 [14] [14] [14] [14] [14] ;
unsigned short arr_28 [14] ;
unsigned short arr_35 [14] [14] [14] [14] [14] [14] [14] ;
short arr_46 [14] ;
int arr_51 [14] ;
unsigned short arr_58 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 4020103107536532754LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)12470;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = 4115226728372823700ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = -3740379180757972643LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = -2181502780960788312LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -154466004212579244LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 10732180329048767663ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 3547554306U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = 1600332859U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_16 [i_0] [i_1] = 2160498462U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 3207158382U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (short)-19125;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_21 [i_0] = 12646162432353190091ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_32 [i_0] = 2268820200347185358LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)72;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_37 [i_0] = (signed char)96;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = 3900785732212542776LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_44 [i_0] = (short)-15769;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = 10809942478262593885ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_49 [i_0] = (unsigned short)50816;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_52 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_54 [i_0] [i_1] = (signed char)56;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 3523363506539998053LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = -7077362247490697604LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_28 [i_0] = (unsigned short)41025;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_4 % 2 == 0) ? (unsigned short)49742 : (unsigned short)57708;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_46 [i_0] = (i_0 % 2 == 0) ? (short)8371 : (short)30211;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_51 [i_0] = -1303471131;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_58 [i_0] = (unsigned short)38104;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 14; ++i_6) 
                                hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_58 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3455059103U;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)1006;
unsigned char var_5 = (unsigned char)162;
unsigned int var_6 = 655563983U;
long long int var_7 = 1645536549838982476LL;
unsigned char var_8 = (unsigned char)140;
unsigned short var_9 = (unsigned short)58083;
unsigned char var_10 = (unsigned char)48;
short var_12 = (short)23645;
unsigned short var_14 = (unsigned short)65501;
short var_15 = (short)-14545;
short var_16 = (short)-9412;
int zero = 0;
short var_18 = (short)3186;
unsigned char var_19 = (unsigned char)134;
long long int var_20 = -819662358746454801LL;
short var_21 = (short)28556;
long long int var_22 = -6684453418965400436LL;
unsigned char var_23 = (unsigned char)170;
unsigned int var_24 = 564557295U;
unsigned char var_25 = (unsigned char)37;
unsigned char var_26 = (unsigned char)137;
unsigned char var_27 = (unsigned char)141;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)83;
signed char var_30 = (signed char)-74;
short var_31 = (short)-9443;
unsigned char var_32 = (unsigned char)166;
unsigned short var_33 = (unsigned short)3504;
long long int var_34 = 86905949055516615LL;
unsigned short var_35 = (unsigned short)46939;
unsigned int var_36 = 1641264163U;
short var_37 = (short)18796;
long long int var_38 = -6937263237886612053LL;
unsigned int var_39 = 3576976869U;
unsigned char var_40 = (unsigned char)21;
unsigned char var_41 = (unsigned char)74;
unsigned int var_42 = 1218054314U;
signed char var_43 = (signed char)-111;
long long int var_44 = -6518317319707862336LL;
unsigned char var_45 = (unsigned char)161;
long long int var_46 = 3423433306877837740LL;
signed char var_47 = (signed char)16;
long long int var_48 = 8456195632857978910LL;
short var_49 = (short)13264;
signed char var_50 = (signed char)69;
signed char var_51 = (signed char)98;
unsigned int var_52 = 100845504U;
long long int var_53 = -7371089061898147945LL;
signed char var_54 = (signed char)-27;
unsigned char var_55 = (unsigned char)147;
long long int var_56 = 6545608141089728212LL;
unsigned short var_57 = (unsigned short)35410;
unsigned short var_58 = (unsigned short)7501;
long long int var_59 = -7828130434579614200LL;
unsigned int var_60 = 3485192081U;
short var_61 = (short)5026;
short var_62 = (short)17526;
unsigned int var_63 = 3849885238U;
unsigned char var_64 = (unsigned char)2;
long long int var_65 = 971571738837072976LL;
unsigned char var_66 = (unsigned char)98;
unsigned short var_67 = (unsigned short)61600;
signed char var_68 = (signed char)-8;
long long int var_69 = -8679581839935511084LL;
unsigned char var_70 = (unsigned char)142;
unsigned char arr_0 [20] ;
unsigned char arr_1 [20] [20] ;
long long int arr_2 [20] [20] ;
unsigned char arr_3 [20] [20] ;
unsigned char arr_5 [20] [20] ;
short arr_6 [20] ;
short arr_7 [20] [20] [20] [20] ;
long long int arr_8 [20] [20] [20] [20] [20] [20] ;
short arr_9 [20] [20] [20] [20] [20] ;
long long int arr_10 [20] [20] ;
unsigned short arr_12 [20] [20] [20] ;
unsigned char arr_13 [20] [20] [20] [20] [20] [20] ;
long long int arr_14 [20] [20] ;
long long int arr_16 [20] [20] ;
signed char arr_18 [20] [20] [20] ;
unsigned short arr_20 [20] [20] [20] [20] [20] [20] ;
unsigned int arr_22 [20] ;
_Bool arr_26 [20] [20] [20] ;
signed char arr_28 [20] [20] [20] ;
long long int arr_29 [20] [20] [20] [20] [20] ;
long long int arr_39 [20] [20] [20] [20] [20] ;
unsigned short arr_40 [20] [20] [20] [20] [20] [20] [20] ;
long long int arr_45 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)91;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = 6646433066813217943LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = (short)618;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (short)28325;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 988623845911692247LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)27980;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = -7068519065754581451LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)4502;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)47;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_14 [i_0] [i_1] = 4019354635809264141LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_16 [i_0] [i_1] = (i_1 % 2 == 0) ? -3893350270631242408LL : -8088509374717328044LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)94 : (signed char)51;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)49372;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = 3257069549U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] = 3788795805911080550LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = 7229507029738732553LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 20; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? (unsigned short)26056 : (unsigned short)27597;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? 5248269174140817572LL : -6268035099438611166LL;
}

void checksum() {
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
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

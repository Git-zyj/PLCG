#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 783559401193855543ULL;
int var_1 = -1822660511;
unsigned char var_2 = (unsigned char)243;
signed char var_5 = (signed char)98;
int var_6 = -2009032864;
unsigned long long int var_8 = 11034653778564100603ULL;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)37315;
int zero = 0;
signed char var_11 = (signed char)109;
signed char var_12 = (signed char)-35;
unsigned short var_13 = (unsigned short)58327;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)40598;
unsigned short var_16 = (unsigned short)11261;
short var_17 = (short)25367;
int var_18 = -571775559;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2191662835U;
unsigned long long int var_21 = 13061450042247084176ULL;
int var_22 = 1475233486;
short var_23 = (short)14895;
unsigned int var_24 = 3279146248U;
unsigned short var_25 = (unsigned short)60457;
int var_26 = -1878343360;
signed char var_27 = (signed char)79;
long long int var_28 = 6038090823091545240LL;
unsigned char var_29 = (unsigned char)128;
unsigned int var_30 = 1015108739U;
unsigned int var_31 = 2534049018U;
unsigned short var_32 = (unsigned short)40234;
signed char var_33 = (signed char)-99;
unsigned short var_34 = (unsigned short)296;
signed char var_35 = (signed char)-59;
signed char var_36 = (signed char)66;
int var_37 = 1120582173;
unsigned short var_38 = (unsigned short)6476;
unsigned short var_39 = (unsigned short)39377;
signed char var_40 = (signed char)4;
unsigned char var_41 = (unsigned char)132;
int var_42 = 1854686967;
unsigned int var_43 = 3459369805U;
unsigned long long int arr_0 [17] ;
unsigned short arr_1 [17] ;
unsigned short arr_4 [17] [17] [17] ;
signed char arr_8 [17] ;
unsigned short arr_9 [17] [17] [17] ;
unsigned char arr_10 [17] [17] ;
unsigned int arr_15 [17] [17] [17] [17] ;
unsigned int arr_20 [17] [17] [17] [17] [17] [17] [17] ;
unsigned short arr_22 [17] [17] [17] ;
unsigned short arr_35 [25] ;
long long int arr_36 [25] [25] ;
unsigned int arr_37 [25] [25] ;
unsigned char arr_39 [20] ;
unsigned int arr_41 [20] ;
unsigned short arr_42 [20] ;
long long int arr_43 [20] [20] ;
_Bool arr_44 [20] ;
unsigned short arr_46 [20] [20] [20] [20] ;
signed char arr_47 [20] [20] [20] ;
unsigned int arr_48 [20] ;
_Bool arr_49 [20] [20] ;
unsigned short arr_54 [20] [20] ;
unsigned short arr_55 [20] ;
unsigned long long int arr_60 [23] [23] ;
_Bool arr_66 [23] ;
signed char arr_6 [17] [17] [17] ;
unsigned int arr_13 [17] [17] [17] ;
unsigned long long int arr_14 [17] [17] [17] ;
unsigned char arr_23 [17] ;
long long int arr_28 [17] [17] [17] [17] [17] ;
unsigned short arr_31 [17] ;
unsigned int arr_34 [17] [17] ;
unsigned short arr_38 [25] ;
unsigned int arr_45 [20] [20] ;
short arr_51 [20] ;
unsigned short arr_52 [20] ;
unsigned char arr_53 [20] ;
long long int arr_56 [20] [20] ;
long long int arr_57 [20] ;
unsigned short arr_64 [23] ;
unsigned short arr_65 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3687268736517747083ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)23985;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)35455;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (signed char)78 : (signed char)-69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)20133;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2642874496U : 1116076570U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? 2005365660U : 964940399U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)55892;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = (unsigned short)18214;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_36 [i_0] [i_1] = -343936167610900092LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_37 [i_0] [i_1] = 1705411519U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = 3428133333U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = (i_0 % 2 == 0) ? (unsigned short)24190 : (unsigned short)26075;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_43 [i_0] [i_1] = -4938943709493254174LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_44 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)40610 : (unsigned short)15479;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_48 [i_0] = 3859664916U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_49 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_54 [i_0] [i_1] = (unsigned short)11494;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_55 [i_0] = (unsigned short)64394;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_60 [i_0] [i_1] = 13272996075222974372ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_66 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 2875969907U : 3573510648U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 17995122225743282299ULL : 3737203123472497305ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (unsigned char)124 : (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -1923551629480815636LL : 4207037252860403394LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (unsigned short)63950 : (unsigned short)9276;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_34 [i_0] [i_1] = 3989776417U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_38 [i_0] = (unsigned short)18527;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_45 [i_0] [i_1] = (i_0 % 2 == 0) ? 1931688738U : 1162879980U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_51 [i_0] = (short)-25994;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_52 [i_0] = (unsigned short)28963;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_53 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_56 [i_0] [i_1] = -7357080705960166470LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_57 [i_0] = -4235758597573013819LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_64 [i_0] = (unsigned short)17080;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_65 [i_0] [i_1] [i_2] = (unsigned short)9043;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_34 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_45 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_53 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_57 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_64 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_65 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

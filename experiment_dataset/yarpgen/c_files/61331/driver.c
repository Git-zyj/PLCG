#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2025503524U;
signed char var_1 = (signed char)-110;
unsigned long long int var_2 = 11981972687831485003ULL;
int var_3 = -1588109437;
int var_4 = 1237822064;
unsigned int var_5 = 2287205816U;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 4151115599U;
signed char var_8 = (signed char)6;
signed char var_9 = (signed char)13;
unsigned short var_10 = (unsigned short)50051;
int var_11 = 577983241;
unsigned short var_12 = (unsigned short)36138;
unsigned long long int var_13 = 12873772818215280341ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1475633794U;
int zero = 0;
unsigned int var_16 = 1762855200U;
int var_17 = -116386014;
signed char var_18 = (signed char)16;
unsigned int var_19 = 2190642069U;
unsigned int var_20 = 2852073920U;
unsigned int var_21 = 642025301U;
unsigned long long int var_22 = 3051425070831925806ULL;
short var_23 = (short)13988;
_Bool var_24 = (_Bool)1;
unsigned long long int var_25 = 4376276109204406897ULL;
unsigned long long int var_26 = 10590840843064202271ULL;
short var_27 = (short)-26580;
unsigned int var_28 = 3452402943U;
unsigned int var_29 = 2456227032U;
int var_30 = 1478490396;
unsigned short var_31 = (unsigned short)27045;
_Bool var_32 = (_Bool)1;
unsigned int var_33 = 4187535058U;
unsigned char var_34 = (unsigned char)226;
signed char var_35 = (signed char)-57;
int var_36 = 1108822223;
int var_37 = 90330488;
unsigned int var_38 = 301428808U;
unsigned long long int var_39 = 6332249990506254674ULL;
int var_40 = 1016490676;
unsigned char var_41 = (unsigned char)97;
int var_42 = 1072120336;
_Bool var_43 = (_Bool)0;
int var_44 = -2081286731;
short var_45 = (short)-7906;
unsigned int var_46 = 2983917790U;
int var_47 = 1139840781;
unsigned long long int var_48 = 6701949226269908952ULL;
int var_49 = -1383186877;
int var_50 = 1350150429;
unsigned long long int var_51 = 1581804149613198416ULL;
unsigned short var_52 = (unsigned short)31572;
signed char var_53 = (signed char)-4;
unsigned int var_54 = 2040293257U;
unsigned int var_55 = 3259790128U;
signed char var_56 = (signed char)-107;
signed char var_57 = (signed char)112;
int var_58 = 208654422;
int var_59 = -662071804;
int var_60 = -882512781;
int var_61 = -1302025565;
signed char var_62 = (signed char)55;
int var_63 = -1605275318;
_Bool var_64 = (_Bool)1;
unsigned short var_65 = (unsigned short)53215;
unsigned char var_66 = (unsigned char)51;
int var_67 = 868493874;
unsigned int var_68 = 2261682385U;
int var_69 = -13865280;
short var_70 = (short)-29206;
short var_71 = (short)10456;
int var_72 = 2070044590;
int var_73 = -762050717;
unsigned long long int var_74 = 17700945712401216676ULL;
signed char var_75 = (signed char)-56;
unsigned long long int var_76 = 617335871596022562ULL;
_Bool arr_0 [24] [24] ;
int arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
unsigned long long int arr_3 [24] ;
_Bool arr_4 [24] ;
unsigned int arr_5 [24] ;
unsigned char arr_6 [24] [24] ;
unsigned long long int arr_7 [24] [24] ;
unsigned int arr_8 [24] [24] ;
int arr_9 [24] ;
unsigned int arr_10 [24] ;
unsigned short arr_11 [24] [24] [24] [24] ;
unsigned int arr_13 [24] [24] [24] [24] ;
signed char arr_21 [24] [24] [24] [24] [24] ;
int arr_22 [24] [24] [24] [24] [24] ;
unsigned int arr_26 [24] [24] [24] [24] ;
unsigned char arr_29 [24] [24] [24] [24] [24] [24] [24] ;
signed char arr_31 [24] [24] [24] ;
unsigned long long int arr_32 [24] [24] [24] [24] [24] [24] [24] ;
signed char arr_44 [24] [24] [24] ;
unsigned short arr_52 [24] [24] [24] [24] ;
unsigned long long int arr_53 [24] [24] ;
short arr_56 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = 488229997;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 3745870490U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 15687911261504122999ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1914000772U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 1618593097006987242ULL : 3228589099085986467ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 2551693646U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 51595301;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 3790553877U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (unsigned short)48698;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1987544882U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-107 : (signed char)-98;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 175785843;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 1278617417U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)35;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 2487752387071354600ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_52 [i_0] [i_1] [i_2] [i_3] = (unsigned short)61408;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_53 [i_0] [i_1] = 4188552659587512179ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-1514;
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
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

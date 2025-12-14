#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5156606066283240258ULL;
short var_1 = (short)-3890;
unsigned long long int var_3 = 14317372926341616951ULL;
int var_5 = -215654592;
short var_6 = (short)-10070;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)42973;
short var_12 = (short)7278;
signed char var_13 = (signed char)-85;
unsigned char var_15 = (unsigned char)199;
unsigned int var_17 = 962170830U;
unsigned short var_19 = (unsigned short)32383;
int zero = 0;
int var_20 = -1550588937;
long long int var_21 = 588309393905586801LL;
unsigned int var_22 = 2560145615U;
int var_23 = 1288704161;
unsigned long long int var_24 = 3517081220988468141ULL;
long long int var_25 = -3249324607044722818LL;
short var_26 = (short)29676;
signed char var_27 = (signed char)20;
unsigned short var_28 = (unsigned short)39925;
unsigned int var_29 = 59519032U;
int var_30 = 1652806724;
int var_31 = -1059457850;
unsigned char var_32 = (unsigned char)197;
unsigned int var_33 = 3332660884U;
long long int var_34 = 4889410023652669405LL;
signed char var_35 = (signed char)-88;
unsigned short var_36 = (unsigned short)38748;
unsigned long long int var_37 = 11861157592578387224ULL;
long long int var_38 = -597521188148943868LL;
unsigned short var_39 = (unsigned short)64090;
short var_40 = (short)29779;
unsigned short var_41 = (unsigned short)54980;
unsigned char var_42 = (unsigned char)160;
unsigned short var_43 = (unsigned short)15049;
unsigned int var_44 = 392966512U;
unsigned long long int var_45 = 11787349440932062245ULL;
unsigned long long int var_46 = 10537071447935696663ULL;
int var_47 = -1078298375;
unsigned long long int var_48 = 4514840143654368410ULL;
long long int var_49 = -44035447318548315LL;
long long int var_50 = 8889448050986232217LL;
int var_51 = -2043445604;
unsigned char var_52 = (unsigned char)124;
short var_53 = (short)-727;
unsigned int var_54 = 3215126235U;
unsigned char var_55 = (unsigned char)90;
short var_56 = (short)-2793;
unsigned int var_57 = 1458580813U;
unsigned char var_58 = (unsigned char)17;
unsigned char var_59 = (unsigned char)38;
signed char var_60 = (signed char)121;
signed char var_61 = (signed char)54;
unsigned int var_62 = 1175271560U;
signed char var_63 = (signed char)27;
signed char var_64 = (signed char)37;
unsigned short var_65 = (unsigned short)24451;
unsigned int var_66 = 1262814411U;
int var_67 = 1196915908;
unsigned long long int var_68 = 2885223007821736533ULL;
unsigned short var_69 = (unsigned short)40595;
int var_70 = 1128014606;
unsigned char var_71 = (unsigned char)181;
int var_72 = -1980037895;
unsigned long long int var_73 = 4253503058951574817ULL;
short var_74 = (short)9038;
unsigned short var_75 = (unsigned short)36354;
int var_76 = 1230740791;
long long int var_77 = -4321154872109391003LL;
unsigned char var_78 = (unsigned char)234;
unsigned int var_79 = 835508636U;
long long int var_80 = 7209664189891464127LL;
unsigned char var_81 = (unsigned char)57;
short var_82 = (short)31078;
int var_83 = -1057108337;
unsigned int var_84 = 1873597382U;
short arr_0 [23] ;
short arr_1 [23] ;
short arr_2 [23] [23] ;
int arr_3 [23] [23] ;
short arr_5 [23] ;
short arr_6 [23] [23] [23] [23] ;
signed char arr_7 [23] [23] [23] [23] ;
long long int arr_8 [23] [23] [23] [23] ;
unsigned char arr_9 [23] [23] [23] ;
unsigned char arr_10 [23] ;
unsigned char arr_11 [23] [23] ;
unsigned short arr_12 [23] [23] [23] ;
short arr_13 [23] ;
signed char arr_14 [23] [23] ;
signed char arr_15 [23] [23] [23] [23] [23] ;
short arr_16 [23] [23] [23] ;
unsigned short arr_17 [23] [23] [23] [23] ;
short arr_19 [23] [23] [23] [23] [23] [23] [23] ;
unsigned long long int arr_20 [23] [23] [23] [23] [23] ;
int arr_23 [23] [23] [23] ;
unsigned int arr_26 [23] [23] ;
unsigned char arr_27 [23] [23] [23] [23] [23] ;
unsigned int arr_33 [23] [23] [23] [23] [23] [23] [23] ;
signed char arr_34 [23] [23] [23] [23] [23] [23] ;
unsigned int arr_39 [23] [23] ;
long long int arr_45 [23] [23] [23] [23] ;
unsigned long long int arr_47 [23] [23] [23] ;
long long int arr_50 [23] [23] [23] [23] [23] [23] ;
signed char arr_51 [23] [23] [23] ;
unsigned int arr_56 [23] [23] [23] [23] [23] [23] ;
long long int arr_61 [23] [23] [23] [23] ;
unsigned int arr_63 [23] [23] [23] [23] [23] ;
long long int arr_65 [23] [23] [23] [23] ;
short arr_82 [23] [23] ;
unsigned short arr_85 [23] [23] [23] [23] [23] ;
unsigned long long int arr_90 [23] [23] [23] [23] ;
unsigned long long int arr_91 [23] [23] [23] [23] ;
unsigned char arr_94 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-27679;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-18245;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (short)10530;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = -2129326356;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (short)-8923;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)13713;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-111;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 9119880454770089709LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned short)5908;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (short)7410;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (short)3937;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)34769;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)-5345;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = 821279255690411023ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -1478004771;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_26 [i_0] [i_1] = 3505147550U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 4198829070U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_39 [i_0] [i_1] = 2394094463U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_45 [i_0] [i_1] [i_2] [i_3] = 188016596747521183LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 17953072679059559495ULL : 3633964414969779357ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 9138123974477774111LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_56 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3147827979U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 7818346126113180690LL : -5253170846435341384LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] = 3392574030U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_65 [i_0] [i_1] [i_2] [i_3] = 8666931195277386185LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_82 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)3259 : (short)12645;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_85 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (unsigned short)39761 : (unsigned short)2014;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_90 [i_0] [i_1] [i_2] [i_3] = 16161878299449040411ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_91 [i_0] [i_1] [i_2] [i_3] = 16003475160033774100ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_94 [i_0] = (unsigned char)30;
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
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
    hash(&seed, var_83);
    hash(&seed, var_84);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

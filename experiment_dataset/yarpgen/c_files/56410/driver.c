#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 945997470U;
signed char var_1 = (signed char)-61;
signed char var_2 = (signed char)-50;
short var_3 = (short)-5391;
long long int var_4 = -8368267603406502253LL;
unsigned short var_5 = (unsigned short)37135;
unsigned long long int var_6 = 18007331354322508872ULL;
unsigned int var_7 = 528569084U;
short var_8 = (short)-26623;
signed char var_9 = (signed char)-78;
long long int var_10 = 6795704822905218374LL;
unsigned short var_11 = (unsigned short)189;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)92;
unsigned int var_14 = 3126030289U;
unsigned short var_15 = (unsigned short)32787;
long long int var_16 = 6273618184757315062LL;
unsigned long long int var_17 = 1391631975773183865ULL;
signed char var_18 = (signed char)-30;
unsigned short var_19 = (unsigned short)26224;
int zero = 0;
signed char var_20 = (signed char)66;
unsigned long long int var_21 = 9935467599140294630ULL;
short var_22 = (short)23587;
long long int var_23 = 2150193774884039967LL;
signed char var_24 = (signed char)89;
long long int var_25 = 7813706646164624740LL;
long long int var_26 = 2488623846158123704LL;
signed char var_27 = (signed char)-38;
unsigned short var_28 = (unsigned short)58293;
short var_29 = (short)-15055;
unsigned long long int var_30 = 12835048348368982229ULL;
long long int var_31 = 7923203847222000152LL;
unsigned short var_32 = (unsigned short)13336;
long long int var_33 = 2890992206027336687LL;
_Bool var_34 = (_Bool)1;
unsigned int var_35 = 880519205U;
signed char var_36 = (signed char)-97;
unsigned long long int var_37 = 12861558202004807742ULL;
unsigned short var_38 = (unsigned short)3673;
short var_39 = (short)14424;
unsigned long long int var_40 = 17332845905903945873ULL;
unsigned long long int var_41 = 10355492121892215286ULL;
long long int var_42 = 6648858595526304646LL;
unsigned long long int var_43 = 8551896232471663803ULL;
short var_44 = (short)12707;
long long int var_45 = -1061175797040036943LL;
short var_46 = (short)-2659;
signed char var_47 = (signed char)-94;
long long int var_48 = -1787386208991071495LL;
unsigned short var_49 = (unsigned short)16573;
int var_50 = -1082707109;
unsigned long long int var_51 = 5916905011346134559ULL;
unsigned short var_52 = (unsigned short)60765;
unsigned short var_53 = (unsigned short)52586;
_Bool var_54 = (_Bool)1;
unsigned short var_55 = (unsigned short)1436;
short var_56 = (short)-24943;
long long int var_57 = 5189329574596486404LL;
unsigned int var_58 = 1679535140U;
unsigned short var_59 = (unsigned short)21010;
unsigned short var_60 = (unsigned short)52301;
signed char var_61 = (signed char)64;
unsigned char var_62 = (unsigned char)222;
short var_63 = (short)1207;
unsigned char var_64 = (unsigned char)136;
long long int var_65 = 4139764561778971381LL;
unsigned long long int var_66 = 15899749481613560583ULL;
unsigned short var_67 = (unsigned short)20768;
unsigned char arr_2 [15] ;
short arr_3 [15] ;
signed char arr_5 [15] [15] [15] [15] ;
unsigned int arr_6 [15] [15] ;
_Bool arr_10 [15] [15] [15] [15] ;
long long int arr_16 [19] ;
short arr_17 [19] [19] ;
signed char arr_18 [19] ;
unsigned int arr_19 [19] ;
short arr_22 [19] [19] [19] [19] ;
int arr_26 [19] [19] [19] [19] ;
unsigned long long int arr_27 [19] [19] [19] ;
unsigned long long int arr_28 [19] [19] [19] [19] [19] ;
signed char arr_31 [19] [19] [19] [19] [19] ;
long long int arr_32 [19] [19] [19] ;
int arr_33 [19] [19] [19] [19] [19] [19] ;
short arr_34 [19] [19] [19] [19] ;
short arr_35 [19] [19] [19] [19] ;
unsigned long long int arr_36 [19] [19] [19] [19] [19] ;
unsigned short arr_37 [19] [19] [19] [19] [19] ;
short arr_38 [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_39 [19] [19] [19] [19] [19] ;
unsigned char arr_40 [19] ;
signed char arr_41 [19] [19] [19] [19] [19] [19] [19] ;
unsigned long long int arr_42 [19] [19] [19] [19] [19] ;
short arr_44 [19] [19] [19] [19] ;
unsigned long long int arr_45 [19] [19] [19] [19] [19] ;
signed char arr_61 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-29018;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 114193651U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -3098858264963914618LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_17 [i_0] [i_1] = (short)-20513;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = 10067164U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_22 [i_0] [i_1] [i_2] [i_3] = (short)-14441;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = 183261490;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 11480815255169468768ULL : 12927411163885773410ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = 2126562431508927158ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)-102 : (signed char)36;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2892068684502431886LL : -1004679486894565582LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 638608628 : 1136722139;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (short)15188;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (short)-5643 : (short)-30317;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 7304391791895836983ULL : 6710041782790416647ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49570;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)17306;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = 9631213374312950579ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_40 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] = 4451266200509184401ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)-2620 : (short)-31865;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 7295863271967585219ULL : 6390335213821221746ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (signed char)-87;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

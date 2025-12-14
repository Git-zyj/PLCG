#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47304;
short var_1 = (short)-17823;
short var_2 = (short)-11857;
unsigned long long int var_3 = 7479863409878299514ULL;
unsigned long long int var_4 = 12061526418117745975ULL;
short var_6 = (short)13035;
signed char var_7 = (signed char)113;
unsigned int var_8 = 3745220890U;
short var_9 = (short)-21455;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)107;
unsigned short var_12 = (unsigned short)41821;
signed char var_13 = (signed char)-113;
unsigned long long int var_15 = 352792612290846974ULL;
short var_17 = (short)-5056;
int zero = 0;
unsigned char var_18 = (unsigned char)121;
unsigned int var_19 = 3141630312U;
short var_20 = (short)25230;
signed char var_21 = (signed char)-126;
unsigned char var_22 = (unsigned char)17;
_Bool var_23 = (_Bool)0;
short var_24 = (short)15088;
long long int var_25 = 316863176876956864LL;
signed char var_26 = (signed char)83;
short var_27 = (short)26187;
long long int var_28 = -7383664892368766581LL;
unsigned long long int var_29 = 4087020347695041740ULL;
unsigned int var_30 = 668265143U;
int var_31 = 736182775;
long long int var_32 = 1883527344936847654LL;
signed char var_33 = (signed char)-47;
_Bool var_34 = (_Bool)1;
unsigned short var_35 = (unsigned short)48699;
short var_36 = (short)-8785;
unsigned long long int var_37 = 18021155859931661965ULL;
signed char var_38 = (signed char)-56;
unsigned int var_39 = 2547260886U;
unsigned int var_40 = 3207973775U;
unsigned short var_41 = (unsigned short)48406;
short var_42 = (short)-30457;
signed char var_43 = (signed char)-55;
unsigned int var_44 = 2917301815U;
unsigned short var_45 = (unsigned short)8343;
unsigned long long int var_46 = 5985689919059201833ULL;
signed char var_47 = (signed char)-114;
signed char var_48 = (signed char)-67;
unsigned char var_49 = (unsigned char)245;
unsigned long long int var_50 = 12487106956818357998ULL;
signed char var_51 = (signed char)-122;
short var_52 = (short)-25028;
unsigned char var_53 = (unsigned char)47;
unsigned short var_54 = (unsigned short)57978;
unsigned short var_55 = (unsigned short)59288;
unsigned long long int var_56 = 15427188673995387869ULL;
unsigned short var_57 = (unsigned short)63509;
int var_58 = -738695643;
unsigned long long int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned int arr_3 [15] ;
short arr_4 [15] ;
_Bool arr_5 [15] [15] ;
long long int arr_6 [15] ;
unsigned short arr_7 [15] [15] ;
short arr_9 [15] [15] [15] ;
unsigned long long int arr_10 [15] [15] [15] ;
short arr_12 [15] ;
short arr_13 [15] [15] ;
unsigned short arr_15 [15] [15] ;
signed char arr_17 [15] ;
short arr_20 [15] [15] ;
signed char arr_21 [15] [15] ;
unsigned int arr_23 [15] ;
signed char arr_24 [15] [15] [15] ;
unsigned long long int arr_25 [15] [15] [15] ;
unsigned short arr_27 [15] [15] ;
long long int arr_29 [15] [15] ;
_Bool arr_31 [15] [15] ;
signed char arr_32 [15] [15] [15] ;
_Bool arr_33 [15] [15] [15] ;
_Bool arr_36 [15] [15] [15] [15] ;
unsigned int arr_37 [15] [15] [15] [15] ;
short arr_38 [15] [15] ;
unsigned long long int arr_40 [15] [15] [15] [15] ;
unsigned short arr_41 [15] [15] ;
_Bool arr_43 [15] [15] ;
short arr_50 [15] [15] [15] ;
short arr_11 [15] ;
long long int arr_28 [15] ;
_Bool arr_35 [15] [15] [15] ;
short arr_42 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 5883597151393475736ULL : 11823528021662361937ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)7874;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 9901977681456058007ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2110999068U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (short)562;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 8465644186709212521LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)47092;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)2081 : (short)15077;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 12873191847444792552ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (short)-349;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_13 [i_0] [i_1] = (short)-9881;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)20194;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_17 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (short)-26435;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = 3602635810U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 5928280883207239285ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)55905;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_29 [i_0] [i_1] = -2664230419346066644LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_31 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (signed char)33;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 1687564866U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_38 [i_0] [i_1] = (short)5079;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = 8373033893461627596ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_41 [i_0] [i_1] = (unsigned short)9559;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_43 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = (short)-1072;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-15109 : (short)-21595;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_28 [i_0] = 403781725570493426LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)26318;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_35 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

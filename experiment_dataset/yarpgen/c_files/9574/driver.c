#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3038995647U;
unsigned long long int var_3 = 6653648093554047965ULL;
long long int var_5 = 7083820971770696403LL;
short var_6 = (short)3707;
unsigned char var_7 = (unsigned char)145;
signed char var_8 = (signed char)42;
signed char var_9 = (signed char)100;
unsigned char var_10 = (unsigned char)80;
long long int var_11 = -3771011904370779745LL;
unsigned long long int var_12 = 10163764497846534703ULL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-119;
int zero = 0;
unsigned short var_15 = (unsigned short)20100;
unsigned int var_16 = 269094545U;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)34266;
signed char var_19 = (signed char)5;
long long int var_20 = 1162940872028890915LL;
int var_21 = 668873292;
signed char var_22 = (signed char)-75;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)149;
signed char var_25 = (signed char)-86;
signed char var_26 = (signed char)114;
unsigned long long int var_27 = 11038511131026089024ULL;
long long int var_28 = 8343079912001982705LL;
long long int var_29 = 3557367255895746905LL;
signed char var_30 = (signed char)72;
signed char var_31 = (signed char)-88;
signed char var_32 = (signed char)97;
_Bool var_33 = (_Bool)1;
unsigned int var_34 = 3952028053U;
unsigned short var_35 = (unsigned short)31956;
unsigned short var_36 = (unsigned short)32395;
_Bool var_37 = (_Bool)0;
unsigned int var_38 = 3827099717U;
signed char var_39 = (signed char)43;
signed char var_40 = (signed char)117;
short var_41 = (short)-29246;
unsigned int var_42 = 1213295615U;
unsigned int var_43 = 2666420255U;
unsigned int var_44 = 227344690U;
unsigned long long int var_45 = 14148172969955123867ULL;
signed char var_46 = (signed char)-94;
unsigned char var_47 = (unsigned char)231;
unsigned long long int var_48 = 6518482215020293636ULL;
signed char var_49 = (signed char)-59;
short var_50 = (short)7730;
unsigned int var_51 = 692973301U;
_Bool var_52 = (_Bool)0;
unsigned char var_53 = (unsigned char)56;
signed char var_54 = (signed char)-59;
unsigned int var_55 = 3007048985U;
unsigned long long int var_56 = 3749293100063469944ULL;
unsigned int var_57 = 1751614933U;
_Bool var_58 = (_Bool)0;
int var_59 = 1463118351;
unsigned short var_60 = (unsigned short)65263;
unsigned char arr_0 [17] ;
_Bool arr_1 [17] [17] ;
short arr_3 [17] ;
unsigned char arr_4 [17] ;
int arr_5 [17] [17] ;
signed char arr_6 [17] ;
unsigned short arr_7 [17] ;
unsigned char arr_8 [17] [17] ;
long long int arr_11 [17] ;
signed char arr_17 [17] ;
unsigned long long int arr_25 [24] ;
int arr_26 [24] ;
signed char arr_27 [19] ;
unsigned char arr_30 [19] [19] ;
_Bool arr_31 [19] [19] [19] ;
unsigned long long int arr_32 [19] [19] [19] [19] ;
unsigned long long int arr_33 [19] ;
signed char arr_34 [19] [19] [19] [19] ;
_Bool arr_35 [19] [19] [19] [19] ;
unsigned long long int arr_37 [19] [19] [19] [19] ;
_Bool arr_39 [19] ;
unsigned int arr_40 [19] [19] ;
unsigned long long int arr_42 [19] [19] [19] ;
unsigned int arr_44 [19] [19] [19] ;
unsigned char arr_45 [19] [19] [19] ;
unsigned short arr_46 [19] [19] ;
int arr_53 [19] [19] [19] [19] [19] ;
unsigned char arr_54 [19] [19] [19] [19] [19] [19] [19] ;
long long int arr_58 [19] [19] ;
signed char arr_66 [19] [19] [19] [19] ;
int arr_12 [17] [17] [17] ;
unsigned int arr_38 [19] ;
_Bool arr_43 [19] [19] ;
signed char arr_51 [19] [19] [19] [19] ;
signed char arr_56 [19] [19] [19] ;
signed char arr_62 [19] [19] [19] [19] ;
unsigned long long int arr_63 [19] [19] [19] [19] [19] [19] ;
_Bool arr_67 [19] [19] [19] [19] ;
unsigned int arr_70 [19] [19] [19] [19] ;
int arr_71 [19] ;
unsigned int arr_72 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)211 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)20052;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 1590429288;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)111 : (signed char)-120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)28204;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 7215615803297422078LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (signed char)101;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = 1715579969431422266ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_26 [i_0] = 885926322;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_27 [i_0] = (signed char)6;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = 13621600011730642074ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_33 [i_0] = 18252713546938650833ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 6275781172595350036ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_40 [i_0] [i_1] = 510129162U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = 2468363628289731048ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = 2777137514U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_45 [i_0] [i_1] [i_2] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_46 [i_0] [i_1] = (unsigned short)35923;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_53 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -64403420 : -1051941319;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_54 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_58 [i_0] [i_1] = -3313973805089290397LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -924308066;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_38 [i_0] = 4195800578U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_43 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)-63;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_56 [i_0] [i_1] [i_2] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_62 [i_0] [i_1] [i_2] [i_3] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 5323166453504213678ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_67 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_70 [i_0] [i_1] [i_2] [i_3] = 3322150375U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_71 [i_0] = -328545744;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_72 [i_0] [i_1] [i_2] = 3861430332U;
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
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_43 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_56 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_62 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            hash(&seed, arr_63 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_67 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_70 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_71 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_72 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

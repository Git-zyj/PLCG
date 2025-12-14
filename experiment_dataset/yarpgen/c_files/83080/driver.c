#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 1363591627;
int var_12 = 1689715289;
int zero = 0;
long long int var_19 = 2112092081081397632LL;
unsigned long long int var_20 = 8922067477117943762ULL;
int var_21 = 603242977;
unsigned char var_22 = (unsigned char)16;
unsigned short var_23 = (unsigned short)42332;
_Bool var_24 = (_Bool)1;
unsigned char var_25 = (unsigned char)225;
unsigned long long int var_26 = 4293404158513865698ULL;
unsigned char var_27 = (unsigned char)123;
unsigned short var_28 = (unsigned short)22914;
unsigned int var_29 = 4281698488U;
unsigned char var_30 = (unsigned char)226;
_Bool var_31 = (_Bool)0;
unsigned int var_32 = 392303993U;
unsigned char var_33 = (unsigned char)230;
unsigned long long int var_34 = 11578011875610154705ULL;
signed char var_35 = (signed char)117;
unsigned long long int var_36 = 13045186657999106725ULL;
unsigned long long int var_37 = 4413965605611035442ULL;
signed char var_38 = (signed char)37;
unsigned int var_39 = 2316238318U;
int var_40 = 2018707376;
_Bool var_41 = (_Bool)0;
short var_42 = (short)-28069;
_Bool var_43 = (_Bool)0;
unsigned long long int var_44 = 17183578265607922982ULL;
unsigned long long int var_45 = 3215309513797048066ULL;
short var_46 = (short)-30323;
_Bool var_47 = (_Bool)1;
unsigned long long int var_48 = 13438745320059874133ULL;
unsigned char var_49 = (unsigned char)219;
unsigned long long int var_50 = 6171952393082353916ULL;
unsigned short var_51 = (unsigned short)33682;
int var_52 = -92959800;
unsigned long long int var_53 = 7681684116137496821ULL;
unsigned long long int var_54 = 13184382751074954505ULL;
long long int var_55 = 3322380512876951441LL;
unsigned long long int var_56 = 1692300022919467587ULL;
short var_57 = (short)26915;
int var_58 = -1705793609;
_Bool var_59 = (_Bool)0;
unsigned char var_60 = (unsigned char)148;
unsigned char var_61 = (unsigned char)145;
short var_62 = (short)-17360;
unsigned long long int var_63 = 3935763470544584619ULL;
_Bool var_64 = (_Bool)0;
_Bool var_65 = (_Bool)0;
long long int var_66 = -5432234699433841140LL;
int arr_0 [16] [16] ;
short arr_1 [16] ;
short arr_3 [16] ;
unsigned long long int arr_4 [18] [18] ;
long long int arr_5 [18] ;
unsigned char arr_6 [18] ;
unsigned long long int arr_7 [18] ;
unsigned char arr_8 [18] [18] [18] ;
unsigned char arr_9 [18] ;
signed char arr_10 [18] [18] [18] [18] ;
short arr_11 [18] [18] [18] ;
int arr_12 [18] [18] ;
signed char arr_13 [18] [18] [18] [18] [18] [18] ;
int arr_14 [18] [18] [18] [18] ;
short arr_15 [18] [18] [18] ;
_Bool arr_16 [18] [18] [18] [18] [18] ;
unsigned int arr_17 [18] [18] [18] [18] [18] [18] ;
unsigned long long int arr_18 [18] [18] [18] [18] [18] ;
short arr_19 [18] [18] [18] [18] [18] ;
int arr_20 [18] [18] [18] [18] ;
unsigned char arr_21 [18] [18] [18] [18] ;
short arr_22 [18] ;
unsigned long long int arr_24 [18] [18] [18] [18] ;
signed char arr_25 [18] ;
_Bool arr_27 [18] [18] [18] [18] ;
short arr_32 [18] [18] ;
signed char arr_33 [18] [18] [18] [18] ;
short arr_36 [18] [18] [18] [18] ;
short arr_41 [18] [18] [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1218431256;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (short)20686;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-9573;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = 4221097010486276321ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = -1896810964060087291LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 6906885339328733778ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)20325;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = -1935301965;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 1707876752;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-29998;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3454889612U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] = 673311725439321686ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)29802;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -532783541 : 479055233;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned char)5;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (short)19300;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 15436347350782375861ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_25 [i_0] = (signed char)-29;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_32 [i_0] [i_1] = (short)-29291;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_33 [i_0] [i_1] [i_2] [i_3] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (short)19789;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-5821;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

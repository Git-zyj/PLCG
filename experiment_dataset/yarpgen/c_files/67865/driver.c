#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -2842256654462727727LL;
unsigned long long int var_2 = 5656742630301594119ULL;
unsigned int var_3 = 888233588U;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-10559;
unsigned short var_6 = (unsigned short)4375;
unsigned short var_7 = (unsigned short)60977;
int var_8 = -1162859054;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
int var_13 = 2065647781;
unsigned long long int var_14 = 9606712147975524719ULL;
int zero = 0;
short var_16 = (short)3444;
int var_17 = -1283838237;
unsigned short var_18 = (unsigned short)22642;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-17750;
unsigned long long int var_23 = 18356818427524213543ULL;
short var_24 = (short)9643;
int var_25 = 1531785290;
int var_26 = 804222681;
unsigned long long int var_27 = 13446286087365985640ULL;
_Bool var_28 = (_Bool)0;
unsigned long long int var_29 = 6177534913527439759ULL;
short var_30 = (short)-24469;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 2173671251U;
_Bool var_33 = (_Bool)0;
_Bool var_34 = (_Bool)0;
unsigned long long int var_35 = 15921664028092763846ULL;
short var_36 = (short)8872;
unsigned short var_37 = (unsigned short)23982;
unsigned long long int var_38 = 4866885964494275980ULL;
_Bool var_39 = (_Bool)0;
_Bool var_40 = (_Bool)1;
short var_41 = (short)-12749;
unsigned short var_42 = (unsigned short)23507;
_Bool var_43 = (_Bool)1;
unsigned long long int var_44 = 6978516756084531851ULL;
_Bool var_45 = (_Bool)0;
short var_46 = (short)22126;
unsigned long long int var_47 = 5672814631593967913ULL;
int var_48 = -1837885582;
_Bool var_49 = (_Bool)1;
_Bool var_50 = (_Bool)0;
_Bool var_51 = (_Bool)1;
unsigned long long int var_52 = 17349062972759841586ULL;
long long int var_53 = 8264393530726488258LL;
long long int var_54 = 7207113999362388765LL;
_Bool var_55 = (_Bool)0;
unsigned long long int var_56 = 18353270181701291734ULL;
_Bool var_57 = (_Bool)0;
_Bool arr_2 [13] ;
int arr_4 [13] [13] [13] ;
_Bool arr_9 [13] [13] [13] [13] [13] [13] ;
unsigned long long int arr_15 [13] [13] ;
unsigned short arr_16 [13] ;
short arr_17 [13] ;
short arr_22 [13] [13] ;
int arr_25 [21] [21] ;
unsigned long long int arr_26 [21] ;
int arr_27 [21] ;
int arr_28 [21] [21] ;
_Bool arr_30 [21] [21] ;
unsigned long long int arr_34 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_36 [21] [21] [21] [21] ;
unsigned long long int arr_41 [21] [21] [21] [21] ;
_Bool arr_45 [21] [21] ;
long long int arr_47 [15] [15] ;
unsigned long long int arr_54 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 453390340;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 8118697002550450575ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned short)40588;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_17 [i_0] = (short)-26788;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_22 [i_0] [i_1] = (short)17366;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_25 [i_0] [i_1] = -2052827358;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = 7933919996737773510ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? -1676364966 : 1739617238;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_28 [i_0] [i_1] = 1457965079;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 6401808449200067005ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)40707 : (unsigned short)11466;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_41 [i_0] [i_1] [i_2] [i_3] = 1768467256770180340ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_45 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_47 [i_0] [i_1] = -535682456789120210LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_54 [i_0] = (i_0 % 2 == 0) ? 3387157144434085901ULL : 17205584653332905125ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

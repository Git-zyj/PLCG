#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2217821274501000725LL;
int var_4 = -539889443;
unsigned long long int var_5 = 539030560144063057ULL;
int var_8 = 753247989;
unsigned char var_13 = (unsigned char)65;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 3095610821353708945ULL;
unsigned int var_17 = 1909787083U;
long long int var_18 = -8096543693015562394LL;
unsigned int var_19 = 3184526157U;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)21501;
unsigned int var_22 = 756549649U;
short var_23 = (short)26861;
unsigned char var_24 = (unsigned char)164;
unsigned long long int var_25 = 17673111519797955648ULL;
unsigned long long int var_26 = 1445994884104350078ULL;
signed char var_27 = (signed char)-52;
signed char var_28 = (signed char)58;
unsigned char var_29 = (unsigned char)218;
unsigned short var_30 = (unsigned short)10071;
long long int var_31 = 1846927425455959977LL;
long long int var_32 = 5268185878769978589LL;
signed char var_33 = (signed char)-87;
_Bool var_34 = (_Bool)1;
long long int var_35 = 8127712267838196363LL;
long long int var_36 = 6260513295085704536LL;
short var_37 = (short)-539;
signed char var_38 = (signed char)54;
long long int var_39 = 2395133880248966558LL;
int var_40 = 474432743;
unsigned char var_41 = (unsigned char)96;
unsigned long long int var_42 = 1521480740589510864ULL;
unsigned short var_43 = (unsigned short)13867;
signed char var_44 = (signed char)-92;
_Bool var_45 = (_Bool)1;
_Bool var_46 = (_Bool)0;
unsigned short var_47 = (unsigned short)22970;
unsigned int var_48 = 2052853374U;
unsigned int var_49 = 4123701900U;
signed char var_50 = (signed char)103;
unsigned short var_51 = (unsigned short)7622;
int var_52 = -1715678899;
signed char var_53 = (signed char)-91;
_Bool var_54 = (_Bool)1;
signed char var_55 = (signed char)-79;
long long int var_56 = -428499922681241557LL;
int var_57 = -1003480953;
unsigned short arr_0 [24] [24] ;
unsigned char arr_1 [24] [24] ;
unsigned int arr_2 [24] ;
short arr_3 [24] ;
unsigned short arr_4 [18] ;
long long int arr_5 [18] ;
unsigned long long int arr_6 [18] ;
unsigned short arr_7 [18] [18] [18] ;
_Bool arr_8 [18] [18] ;
short arr_9 [18] ;
unsigned short arr_10 [18] ;
unsigned int arr_11 [18] [18] [18] [18] ;
signed char arr_12 [18] [18] ;
signed char arr_13 [18] [18] [18] [18] [18] ;
unsigned int arr_14 [18] [18] [18] [18] ;
short arr_15 [18] [18] [18] [18] [18] [18] [18] ;
_Bool arr_16 [18] [18] [18] [18] [18] ;
unsigned int arr_17 [18] [18] ;
unsigned long long int arr_18 [18] ;
unsigned short arr_19 [18] [18] ;
long long int arr_20 [18] [18] [18] ;
unsigned short arr_21 [18] ;
unsigned long long int arr_22 [18] ;
int arr_23 [18] [18] [18] [18] ;
unsigned short arr_25 [18] [18] ;
int arr_26 [18] [18] [18] ;
unsigned long long int arr_28 [18] [18] [18] [18] ;
signed char arr_29 [18] [18] [18] [18] ;
unsigned short arr_32 [18] [18] [18] ;
long long int arr_34 [18] [18] [18] [18] [18] [18] ;
signed char arr_36 [18] ;
signed char arr_39 [18] [18] [18] [18] ;
long long int arr_43 [18] [18] [18] [18] [18] ;
int arr_45 [18] [18] [18] [18] [18] ;
unsigned short arr_46 [18] [18] [18] [18] [18] ;
int arr_47 [18] [18] [18] [18] [18] ;
signed char arr_51 [24] ;
unsigned char arr_52 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)60539;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 2225859759U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)23625;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (unsigned short)45650;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -952001262359241927LL : -7387233283747987104LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 16214618937384093145ULL : 13332783594132828921ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)48662;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (short)-17106;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_10 [i_0] = (unsigned short)14613;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3618341343U : 4230096325U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-20 : (signed char)-124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (signed char)-109 : (signed char)56;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = 366318660U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 18; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)11420;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? 408202510U : 3807345979U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = 5678852452132058687ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)56121 : (unsigned short)11879;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 1280092743540511895LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (unsigned short)5722;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 15838775975959305984ULL : 15339721597714885491ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = -1048285741;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_25 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)59395 : (unsigned short)16708;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -734391135 : 120158121;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 1369069572053722840ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = (unsigned short)43085;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_34 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 7287246156903170787LL : -5089527443605098568LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)42 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -1948054911375237129LL : -8816433519895471866LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] = -1858250952;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)28258 : (unsigned short)37562;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_47 [i_0] [i_1] [i_2] [i_3] [i_4] = 1943497270;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_51 [i_0] = (signed char)71;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_52 [i_0] = (unsigned char)103;
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

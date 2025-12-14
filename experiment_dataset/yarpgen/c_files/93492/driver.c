#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55575;
unsigned char var_1 = (unsigned char)38;
unsigned char var_2 = (unsigned char)83;
long long int var_3 = -3345293577322921830LL;
_Bool var_4 = (_Bool)0;
int var_5 = 1061835365;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)61;
unsigned char var_8 = (unsigned char)237;
long long int var_9 = -7041265734723091479LL;
int zero = 0;
short var_10 = (short)12011;
short var_11 = (short)2398;
long long int var_12 = 3908015575932059758LL;
signed char var_13 = (signed char)57;
signed char var_14 = (signed char)40;
unsigned int var_15 = 717400915U;
unsigned int var_16 = 1591533143U;
unsigned short var_17 = (unsigned short)55639;
int var_18 = 1911208631;
signed char var_19 = (signed char)103;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3287935140U;
unsigned short var_22 = (unsigned short)40929;
unsigned long long int var_23 = 13324824660349241867ULL;
signed char var_24 = (signed char)-106;
int var_25 = 1457329360;
unsigned short var_26 = (unsigned short)61618;
int var_27 = 762850999;
short var_28 = (short)-32595;
unsigned int var_29 = 2809562476U;
_Bool var_30 = (_Bool)1;
int var_31 = 814772938;
signed char var_32 = (signed char)95;
signed char var_33 = (signed char)2;
long long int var_34 = -2216913074303669478LL;
unsigned int var_35 = 1164898640U;
unsigned int var_36 = 2968665834U;
long long int var_37 = -1187379865750952368LL;
int var_38 = 1736040688;
unsigned char var_39 = (unsigned char)93;
unsigned long long int var_40 = 6819925303278332189ULL;
unsigned short var_41 = (unsigned short)55093;
long long int var_42 = -107059742106749711LL;
signed char var_43 = (signed char)89;
long long int var_44 = 4526759785607868700LL;
unsigned char var_45 = (unsigned char)116;
_Bool var_46 = (_Bool)0;
long long int var_47 = 3307447224217926387LL;
unsigned long long int var_48 = 14803114822436196298ULL;
int var_49 = 1537704896;
unsigned char var_50 = (unsigned char)24;
short var_51 = (short)1209;
unsigned char var_52 = (unsigned char)74;
unsigned int var_53 = 3387827710U;
long long int var_54 = -6258842462157760073LL;
int var_55 = 1082021123;
signed char var_56 = (signed char)-84;
unsigned int var_57 = 2347169108U;
unsigned long long int var_58 = 5949692086371106383ULL;
unsigned int var_59 = 608745950U;
unsigned int var_60 = 398690017U;
long long int var_61 = 939650062817886810LL;
long long int var_62 = 1897473973533490207LL;
int var_63 = 63247737;
long long int arr_0 [23] [23] ;
unsigned int arr_1 [23] ;
signed char arr_2 [23] [23] ;
signed char arr_4 [23] ;
unsigned short arr_6 [23] [23] [23] ;
long long int arr_8 [23] [23] ;
unsigned short arr_9 [23] [23] [23] [23] [23] [23] ;
short arr_10 [23] [23] [23] [23] [23] [23] ;
signed char arr_11 [23] [23] [23] [23] ;
_Bool arr_12 [23] ;
short arr_13 [23] [23] [23] ;
short arr_14 [23] [23] ;
short arr_15 [23] [23] [23] ;
unsigned char arr_18 [23] [23] [23] ;
_Bool arr_20 [23] [23] [23] [23] ;
signed char arr_24 [23] [23] [23] [23] [23] ;
unsigned char arr_27 [23] [23] ;
long long int arr_31 [23] [23] [23] ;
int arr_33 [23] ;
int arr_37 [23] ;
unsigned int arr_39 [23] [23] [23] [23] [23] [23] ;
_Bool arr_41 [23] [23] [23] ;
_Bool arr_48 [23] ;
short arr_50 [23] [23] [23] [23] [23] ;
short arr_51 [23] [23] [23] ;
unsigned int arr_52 [23] [23] [23] ;
unsigned long long int arr_53 [23] [23] [23] [23] ;
short arr_55 [23] [23] ;
unsigned short arr_61 [23] [23] [23] [23] [23] [23] ;
long long int arr_62 [23] [23] [23] [23] [23] [23] [23] ;
unsigned char arr_67 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -8004007807910303212LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 3297687391U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)50219;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 3829461626830713343LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)14361;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-19887;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_12 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)25538;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_14 [i_0] [i_1] = (short)30911;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (short)-10389;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-109 : (signed char)-51;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -6802454157165194427LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_33 [i_0] = -1612051535;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_37 [i_0] = 618308469;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 2661936437U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_48 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? (short)3484 : (short)16298;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_51 [i_0] [i_1] [i_2] = (short)-16762;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = 3322353227U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_53 [i_0] [i_1] [i_2] [i_3] = 11463603972032481640ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_55 [i_0] [i_1] = (short)-23583;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_61 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)59063;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_62 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 7849540061751852689LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_67 [i_0] = (unsigned char)251;
}

void checksum() {
    hash(&seed, var_10);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

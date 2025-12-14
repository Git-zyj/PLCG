#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -1215192544956457575LL;
short var_2 = (short)-13878;
int var_3 = 516645857;
long long int var_5 = -6549885717271935194LL;
unsigned int var_6 = 914234475U;
short var_7 = (short)30591;
short var_8 = (short)-4680;
unsigned short var_9 = (unsigned short)1257;
signed char var_10 = (signed char)46;
_Bool var_11 = (_Bool)1;
long long int var_12 = 9186774230616485781LL;
signed char var_13 = (signed char)50;
short var_14 = (short)30876;
_Bool var_15 = (_Bool)0;
int var_16 = 1911726180;
short var_17 = (short)23424;
int var_18 = 400814162;
int zero = 0;
long long int var_19 = -6776201169330434251LL;
unsigned short var_20 = (unsigned short)14922;
long long int var_21 = -852477778225437288LL;
int var_22 = 2108450679;
unsigned long long int var_23 = 11652693310776067532ULL;
unsigned long long int var_24 = 2285769101728797344ULL;
signed char var_25 = (signed char)-16;
int var_26 = -444517027;
int var_27 = 887596616;
signed char var_28 = (signed char)-5;
int var_29 = -991397292;
_Bool var_30 = (_Bool)1;
unsigned short var_31 = (unsigned short)38450;
int var_32 = 1551006555;
long long int var_33 = 8773751046920232932LL;
unsigned int var_34 = 2533767919U;
int var_35 = 1477844656;
_Bool var_36 = (_Bool)0;
long long int var_37 = -5060636295125760648LL;
unsigned long long int var_38 = 4286340627097841436ULL;
_Bool var_39 = (_Bool)0;
unsigned long long int var_40 = 7169204288235706167ULL;
_Bool var_41 = (_Bool)1;
int var_42 = 995028808;
signed char var_43 = (signed char)-14;
long long int var_44 = 356665234717596556LL;
short var_45 = (short)-27502;
int var_46 = -2036743374;
short var_47 = (short)23449;
unsigned short var_48 = (unsigned short)34147;
short var_49 = (short)-27694;
_Bool var_50 = (_Bool)0;
unsigned long long int var_51 = 17330071177389426927ULL;
signed char var_52 = (signed char)22;
short var_53 = (short)-17737;
_Bool var_54 = (_Bool)1;
int var_55 = -1248084303;
long long int var_56 = -3127061977388345419LL;
short var_57 = (short)5744;
unsigned long long int var_58 = 16785492345841211196ULL;
short var_59 = (short)-31594;
long long int var_60 = 5951953321594100551LL;
short arr_0 [21] ;
long long int arr_1 [21] ;
int arr_2 [21] ;
long long int arr_3 [16] [16] ;
unsigned long long int arr_4 [16] ;
_Bool arr_5 [16] ;
unsigned short arr_6 [16] [16] ;
long long int arr_7 [16] [16] [16] ;
int arr_8 [16] ;
short arr_9 [16] [16] [16] ;
long long int arr_10 [16] [16] ;
short arr_11 [16] [16] [16] ;
int arr_12 [16] [16] [16] ;
long long int arr_14 [16] [16] ;
signed char arr_15 [16] [16] ;
int arr_16 [16] [16] ;
short arr_17 [16] ;
short arr_18 [16] [16] [16] ;
long long int arr_19 [16] [16] [16] [16] [16] ;
int arr_24 [16] [16] [16] [16] [16] ;
int arr_27 [16] ;
unsigned long long int arr_28 [16] [16] [16] [16] ;
unsigned long long int arr_30 [16] [16] ;
_Bool arr_37 [16] [16] [16] [16] ;
long long int arr_13 [16] [16] [16] ;
short arr_20 [16] [16] ;
long long int arr_29 [16] [16] [16] ;
unsigned long long int arr_42 [16] [16] [16] ;
unsigned long long int arr_43 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (short)4214;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -6567756231840659988LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 2062219565;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = 1337719588343217172LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 15008886875220898999ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)53927;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = -6909054831679617292LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 580735990 : -1236931298;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)64 : (short)27193;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = -6024459011817231555LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)24882;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1732787731;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 4560255282475082781LL : 4524515740211173660LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)87 : (signed char)25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 242522754;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (short)12744 : (short)-4445;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (short)-25429;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = 5596793235596421148LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 111229999;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? 750944385 : -1422321395;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 6539575765071751731ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_30 [i_0] [i_1] = 1336402670450518024ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 4270952908259229505LL : -6241435218616730613LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)15817 : (short)17994;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -9207567802678775196LL : -1287495533557438180LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_42 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 5037911340209144848ULL : 11724490285407381645ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_43 [i_0] = (i_0 % 2 == 0) ? 2820592796485009052ULL : 14084366219616151490ULL;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_42 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_43 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

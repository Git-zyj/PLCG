#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)14;
unsigned int var_1 = 3356209093U;
unsigned short var_2 = (unsigned short)40442;
long long int var_3 = -1916737131830482255LL;
unsigned long long int var_4 = 15447848683961476702ULL;
unsigned short var_5 = (unsigned short)39424;
int var_6 = 1993610243;
unsigned long long int var_7 = 4111856941513515869ULL;
unsigned long long int var_8 = 2473110543676401232ULL;
unsigned short var_9 = (unsigned short)31241;
unsigned int var_10 = 3801710955U;
int zero = 0;
unsigned long long int var_11 = 5676862625654647738ULL;
long long int var_12 = -8722294555251766195LL;
long long int var_13 = -5568761250938314083LL;
unsigned short var_14 = (unsigned short)34754;
long long int var_15 = -8811038595427159095LL;
unsigned long long int var_16 = 12979474529961583734ULL;
unsigned long long int var_17 = 10113323309837038086ULL;
long long int var_18 = 5384440536114245083LL;
unsigned char var_19 = (unsigned char)60;
short var_20 = (short)-10450;
unsigned long long int var_21 = 14723031448061594986ULL;
long long int var_22 = -3294628331248941570LL;
long long int var_23 = 8187309338482939419LL;
unsigned short var_24 = (unsigned short)8412;
unsigned short var_25 = (unsigned short)57665;
unsigned int var_26 = 2060904126U;
unsigned int var_27 = 2957953059U;
unsigned short var_28 = (unsigned short)65530;
unsigned long long int var_29 = 5492045800362607677ULL;
signed char var_30 = (signed char)-45;
unsigned int var_31 = 2620474181U;
long long int arr_0 [13] [13] ;
_Bool arr_1 [13] ;
unsigned char arr_2 [13] ;
unsigned int arr_3 [13] ;
unsigned short arr_5 [13] [13] [13] ;
unsigned short arr_9 [13] ;
long long int arr_10 [13] [13] ;
unsigned long long int arr_14 [13] ;
unsigned long long int arr_21 [13] ;
signed char arr_24 [19] ;
short arr_25 [19] [19] ;
unsigned short arr_26 [19] ;
unsigned short arr_27 [19] [19] ;
unsigned char arr_29 [19] [19] [19] ;
unsigned long long int arr_30 [19] ;
short arr_31 [19] [19] [19] ;
long long int arr_34 [19] [19] ;
unsigned int arr_49 [22] ;
int arr_4 [13] ;
signed char arr_7 [13] [13] [13] ;
signed char arr_8 [13] [13] [13] ;
unsigned char arr_12 [13] ;
long long int arr_18 [13] [13] ;
int arr_23 [13] [13] [13] ;
int arr_28 [19] [19] ;
short arr_32 [19] [19] ;
unsigned short arr_35 [19] [19] ;
int arr_39 [19] ;
long long int arr_46 [19] [19] [19] [19] ;
unsigned long long int arr_47 [19] [19] [19] [19] ;
signed char arr_48 [19] [19] [19] ;
int arr_51 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 2062996971018950116LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 2407616168U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)24013;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (unsigned short)51492;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = 5843064699822154684LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = 7360008505724618871ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_21 [i_0] = 3172869738633684149ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_25 [i_0] [i_1] = (short)-7665;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (unsigned short)17930;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_27 [i_0] [i_1] = (unsigned short)45561;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_30 [i_0] = 7072640087198217662ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (short)745;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_34 [i_0] [i_1] = 1134747148587130404LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_49 [i_0] = 1456974858U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 933421862;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-39 : (signed char)99;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)112 : (signed char)75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_18 [i_0] [i_1] = 8171673368517406564LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = -82764442;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = 1195467657;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_32 [i_0] [i_1] = (short)28425;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned short)54169;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_39 [i_0] = 1518061321;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -3742396646084526552LL : -4601023925287608907LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 80922294795186366ULL : 13576122422225115626ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_51 [i_0] = -2123764625;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_32 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_35 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_47 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

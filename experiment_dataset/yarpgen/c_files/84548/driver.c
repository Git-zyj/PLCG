#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)13419;
unsigned long long int var_2 = 7138452800539379632ULL;
short var_3 = (short)1698;
unsigned int var_4 = 2499733190U;
unsigned long long int var_5 = 1296368320301362454ULL;
unsigned short var_7 = (unsigned short)36678;
unsigned int var_8 = 2109153406U;
signed char var_9 = (signed char)113;
unsigned int var_11 = 490941953U;
unsigned short var_12 = (unsigned short)9934;
unsigned long long int var_13 = 331677676057855628ULL;
signed char var_14 = (signed char)93;
signed char var_15 = (signed char)-57;
unsigned long long int var_16 = 1510771282709680968ULL;
int var_17 = -1770545153;
signed char var_18 = (signed char)34;
int var_19 = 606637446;
int zero = 0;
int var_20 = 398448496;
unsigned int var_21 = 1291708881U;
unsigned int var_22 = 2245409617U;
unsigned int var_23 = 2695445136U;
unsigned int var_24 = 4093193918U;
unsigned long long int var_25 = 5846821266053478690ULL;
unsigned long long int var_26 = 94924740261123743ULL;
unsigned long long int var_27 = 14022854943623739560ULL;
signed char var_28 = (signed char)117;
int var_29 = -1721414692;
short var_30 = (short)30788;
signed char var_31 = (signed char)52;
unsigned int var_32 = 3397212206U;
signed char var_33 = (signed char)-78;
unsigned int var_34 = 560499784U;
unsigned int var_35 = 2905747018U;
unsigned long long int var_36 = 357631041917523259ULL;
short var_37 = (short)9319;
unsigned int arr_0 [21] [21] ;
unsigned int arr_2 [21] [21] ;
unsigned short arr_3 [21] ;
signed char arr_6 [21] [21] [21] ;
signed char arr_9 [21] ;
unsigned short arr_10 [21] ;
unsigned long long int arr_14 [21] ;
short arr_16 [21] ;
unsigned short arr_17 [21] ;
short arr_20 [21] [21] [21] ;
unsigned long long int arr_24 [10] ;
unsigned int arr_32 [10] ;
signed char arr_36 [10] [10] [10] ;
unsigned int arr_38 [24] [24] ;
unsigned long long int arr_7 [21] [21] [21] ;
unsigned long long int arr_8 [21] [21] ;
unsigned int arr_13 [21] ;
unsigned int arr_21 [21] [21] ;
signed char arr_22 [21] ;
unsigned short arr_28 [10] ;
int arr_37 [10] [10] [10] [10] ;
signed char arr_40 [24] [24] ;
short arr_41 [24] ;
unsigned long long int arr_46 [12] ;
unsigned short arr_47 [12] [12] ;
unsigned int arr_50 [12] ;
unsigned short arr_56 [12] ;
int arr_59 [13] [13] ;
unsigned long long int arr_60 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = 3057490241U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = 3264524156U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned short)52973;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (unsigned short)42452;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = 6379904394284838792ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (short)20309;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = (unsigned short)11885;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)26907;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 1549182120464233701ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? 1307519579U : 128546045U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-45 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_38 [i_0] [i_1] = 2501183972U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 16017996326332320041ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 18437410464072993862ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = 2512440382U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_21 [i_0] [i_1] = (i_0 % 2 == 0) ? 2632025702U : 2173633933U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64968 : (unsigned short)4292;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -254631831 : 1776739626;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_40 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_41 [i_0] = (short)-19471;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_46 [i_0] = 11815313060292019901ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_47 [i_0] [i_1] = (unsigned short)50733;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_50 [i_0] = (i_0 % 2 == 0) ? 243543207U : 1985941945U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58487 : (unsigned short)59782;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_59 [i_0] [i_1] = (i_1 % 2 == 0) ? 563034207 : 184008081;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_60 [i_0] [i_1] = (i_1 % 2 == 0) ? 10120617084717522651ULL : 12252210455541831027ULL;
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_37 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_46 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_60 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-29;
unsigned char var_1 = (unsigned char)60;
int var_2 = -430122164;
signed char var_4 = (signed char)-17;
_Bool var_6 = (_Bool)1;
int var_10 = -1410524067;
short var_11 = (short)-3486;
signed char var_15 = (signed char)69;
int zero = 0;
short var_17 = (short)3601;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 7947137745114211664ULL;
short var_20 = (short)-20504;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)0;
short var_23 = (short)-19298;
unsigned int var_24 = 1443288551U;
int var_25 = -94195896;
short var_26 = (short)-10153;
int var_27 = 2002727193;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 4017631811U;
unsigned int arr_2 [24] ;
unsigned short arr_5 [24] ;
int arr_6 [24] ;
unsigned long long int arr_7 [24] ;
unsigned int arr_8 [24] [24] [24] [24] ;
unsigned char arr_10 [24] [24] [24] [24] ;
unsigned int arr_14 [19] ;
int arr_16 [19] ;
unsigned long long int arr_17 [12] ;
unsigned int arr_25 [12] ;
int arr_29 [17] ;
long long int arr_11 [24] [24] [24] ;
signed char arr_12 [24] [24] [24] ;
int arr_13 [24] ;
signed char arr_24 [12] ;
unsigned long long int arr_27 [12] ;
unsigned int arr_32 [17] ;
unsigned short arr_33 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 78524003U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (unsigned short)55940;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 209448492;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3154627123255011171ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1877156415U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_14 [i_0] = 116018504U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = -86122454;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = 11715113487535162234ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = 3674663972U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_29 [i_0] = -226664183;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8367984589180829925LL : -7773091469407099435LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)80 : (signed char)-121;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? 1260947540 : 918733813;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_27 [i_0] = 7731347747188446489ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_32 [i_0] = 4075967858U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (unsigned short)31857;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_33 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

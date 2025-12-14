#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -548112686;
unsigned int var_1 = 4180421136U;
short var_2 = (short)27700;
unsigned int var_3 = 4235153668U;
unsigned long long int var_4 = 2361695117717805301ULL;
int var_5 = 607118581;
short var_6 = (short)-7770;
unsigned long long int var_7 = 492974067744951050ULL;
unsigned char var_8 = (unsigned char)212;
unsigned int var_9 = 1488926626U;
int var_10 = 1936711310;
unsigned long long int var_11 = 8013211483628696182ULL;
unsigned long long int var_12 = 13637398264159208894ULL;
short var_13 = (short)16065;
int var_14 = 733386883;
unsigned int var_15 = 2012812992U;
unsigned long long int var_16 = 3338537707260462173ULL;
int zero = 0;
unsigned int var_17 = 2635168306U;
unsigned int var_18 = 2215867203U;
short var_19 = (short)-20777;
short var_20 = (short)32539;
unsigned long long int var_21 = 11939774551801122345ULL;
unsigned short var_22 = (unsigned short)40953;
unsigned long long int var_23 = 6598318026917448475ULL;
unsigned int var_24 = 366258549U;
unsigned char var_25 = (unsigned char)134;
short var_26 = (short)-27934;
short var_27 = (short)18511;
unsigned int var_28 = 1069228622U;
unsigned int var_29 = 284204422U;
unsigned int var_30 = 1074641557U;
_Bool var_31 = (_Bool)1;
unsigned char arr_3 [13] ;
unsigned int arr_6 [13] ;
unsigned int arr_9 [13] ;
unsigned char arr_15 [25] ;
unsigned short arr_21 [25] [25] [25] [25] ;
_Bool arr_24 [25] ;
unsigned long long int arr_25 [25] [25] ;
unsigned long long int arr_26 [25] ;
unsigned long long int arr_30 [25] ;
unsigned long long int arr_31 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned char)30;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 3552083756U : 2238042813U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 715736636U : 561995232U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned char)187;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (unsigned short)42814;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_25 [i_0] [i_1] = 11994376950982905676ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_26 [i_0] = 5307555434596908209ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_30 [i_0] = (i_0 % 2 == 0) ? 657261406487910964ULL : 15434710946188455598ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 1238827867163554457ULL : 11842008538982353963ULL;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_26 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_31 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

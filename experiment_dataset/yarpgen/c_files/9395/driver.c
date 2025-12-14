#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-65;
unsigned int var_1 = 2642655374U;
long long int var_2 = 2736401719027309086LL;
unsigned char var_3 = (unsigned char)171;
unsigned short var_4 = (unsigned short)40042;
unsigned char var_5 = (unsigned char)231;
unsigned char var_6 = (unsigned char)127;
unsigned int var_7 = 1582552330U;
unsigned char var_8 = (unsigned char)155;
unsigned long long int var_9 = 13435718482051811318ULL;
long long int var_10 = -6546571261867032976LL;
int var_11 = 168042951;
int var_12 = -196750700;
signed char var_13 = (signed char)-114;
int var_14 = 332919214;
int var_15 = 444134282;
int zero = 0;
unsigned short var_16 = (unsigned short)8541;
unsigned long long int var_17 = 7757928490563823441ULL;
signed char var_18 = (signed char)2;
unsigned long long int var_19 = 16826178015126760458ULL;
int var_20 = 1657440145;
int var_21 = 804036213;
int var_22 = 2071120167;
signed char var_23 = (signed char)45;
unsigned short var_24 = (unsigned short)61959;
signed char var_25 = (signed char)36;
signed char var_26 = (signed char)-84;
unsigned int var_27 = 3428303084U;
short var_28 = (short)-29131;
signed char arr_0 [13] ;
long long int arr_1 [13] ;
long long int arr_2 [13] ;
_Bool arr_3 [13] ;
unsigned int arr_5 [19] ;
unsigned char arr_7 [19] [19] ;
unsigned long long int arr_8 [19] [19] ;
unsigned short arr_9 [19] ;
unsigned short arr_10 [19] ;
unsigned long long int arr_12 [19] ;
unsigned char arr_13 [19] ;
int arr_14 [19] [19] [19] ;
signed char arr_15 [19] [19] [19] [19] [19] [19] ;
unsigned char arr_17 [19] [19] [19] [19] [19] [19] [19] ;
int arr_21 [19] [19] [19] ;
long long int arr_4 [13] ;
signed char arr_23 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 8631120340689062480LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 2208107847667482945LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 421980722U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_8 [i_0] [i_1] = 13158697547539118475ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (unsigned short)58265;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (unsigned short)60503;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = 8374050450319547817ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_13 [i_0] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -799190988;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-80;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = -1737464362;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -2014043707953846647LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (signed char)9;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

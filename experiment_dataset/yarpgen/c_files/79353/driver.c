#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6476870726229947506LL;
unsigned char var_2 = (unsigned char)148;
short var_3 = (short)-9033;
unsigned long long int var_4 = 11760274115488941029ULL;
unsigned long long int var_5 = 13452785441609088017ULL;
short var_6 = (short)-12318;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7338810238310563738ULL;
unsigned char var_11 = (unsigned char)157;
int var_12 = 161524487;
unsigned long long int var_13 = 6788579477934918375ULL;
unsigned long long int var_14 = 3280853345613312092ULL;
unsigned char var_15 = (unsigned char)150;
short var_18 = (short)-12931;
int zero = 0;
short var_19 = (short)14964;
unsigned int var_20 = 1184387138U;
unsigned short var_21 = (unsigned short)24759;
unsigned char var_22 = (unsigned char)152;
unsigned short var_23 = (unsigned short)18462;
long long int var_24 = -6557376644621631165LL;
int var_25 = 142525168;
unsigned char var_26 = (unsigned char)140;
unsigned short var_27 = (unsigned short)13913;
int var_28 = -965844538;
unsigned int var_29 = 1748567881U;
unsigned char var_30 = (unsigned char)239;
unsigned char var_31 = (unsigned char)158;
_Bool var_32 = (_Bool)0;
long long int var_33 = -8600920431423760258LL;
unsigned char var_34 = (unsigned char)228;
short arr_1 [15] [15] ;
unsigned long long int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
unsigned short arr_5 [23] ;
long long int arr_6 [23] [23] [23] ;
signed char arr_7 [23] [23] [23] ;
unsigned char arr_8 [23] [23] [23] ;
unsigned long long int arr_9 [23] ;
unsigned short arr_13 [23] ;
unsigned char arr_17 [23] [23] ;
unsigned long long int arr_18 [23] [23] ;
short arr_23 [23] [23] [23] ;
unsigned int arr_10 [23] ;
unsigned long long int arr_20 [23] [23] ;
unsigned short arr_21 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)348;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 15862547418867140882ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = 5279466615231072750ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (unsigned short)33884;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -1388346862984705205LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = 9201648179355951857ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_13 [i_0] = (unsigned short)39987;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)54;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_18 [i_0] [i_1] = 8026386913316483071ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (short)-8117;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = 3275378498U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_20 [i_0] [i_1] = 5412045068929208788ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (unsigned short)48825;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

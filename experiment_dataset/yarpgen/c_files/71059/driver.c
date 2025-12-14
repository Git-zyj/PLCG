#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11219665808362187096ULL;
signed char var_1 = (signed char)43;
unsigned long long int var_3 = 9487051987162699938ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 2340681341U;
long long int var_9 = 5556832127591923777LL;
unsigned long long int var_15 = 17989488447373539990ULL;
unsigned short var_16 = (unsigned short)53046;
unsigned long long int var_17 = 3075744384174178306ULL;
short var_18 = (short)-31051;
int zero = 0;
unsigned short var_20 = (unsigned short)47564;
signed char var_21 = (signed char)20;
unsigned char var_22 = (unsigned char)39;
unsigned int var_23 = 3986052841U;
signed char var_24 = (signed char)-20;
long long int var_25 = -5307191339342665377LL;
short var_26 = (short)15757;
unsigned long long int var_27 = 16074379191777573032ULL;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
unsigned int var_30 = 1374946478U;
short arr_0 [22] [22] ;
unsigned char arr_2 [22] ;
unsigned long long int arr_3 [22] ;
unsigned char arr_4 [22] [22] ;
int arr_5 [22] [22] ;
short arr_6 [22] [22] [22] [22] ;
unsigned long long int arr_8 [22] [22] [22] ;
unsigned char arr_12 [22] ;
unsigned int arr_19 [17] [17] [17] ;
long long int arr_7 [22] [22] [22] ;
unsigned long long int arr_10 [22] [22] ;
_Bool arr_21 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-27056;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)162;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 3793903652837267898ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)96;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 206801398 : -444929778;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-20637;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 3241524993834115816ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = 3372235935U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 6837194110338940239LL : 2086126799651187104LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 10815351693412698469ULL : 3865936563859393357ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (_Bool)0;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

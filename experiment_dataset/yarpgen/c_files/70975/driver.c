#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -233696318;
_Bool var_9 = (_Bool)0;
long long int var_11 = -1661180893885978044LL;
unsigned char var_13 = (unsigned char)193;
int zero = 0;
unsigned long long int var_15 = 15673874917839901890ULL;
unsigned char var_16 = (unsigned char)24;
unsigned short var_17 = (unsigned short)43035;
int var_18 = 17163694;
unsigned char var_19 = (unsigned char)241;
unsigned char var_20 = (unsigned char)11;
unsigned long long int var_21 = 8523529241563213787ULL;
unsigned long long int var_22 = 10933707724126549013ULL;
unsigned long long int var_23 = 15580129538620214599ULL;
unsigned long long int var_24 = 13414382601007240104ULL;
short var_25 = (short)-21827;
_Bool var_26 = (_Bool)0;
unsigned short var_27 = (unsigned short)30917;
unsigned long long int arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
unsigned char arr_2 [17] ;
_Bool arr_3 [12] ;
unsigned char arr_5 [12] [12] ;
unsigned int arr_6 [12] ;
unsigned char arr_8 [13] ;
short arr_11 [13] [13] ;
signed char arr_9 [13] ;
unsigned short arr_10 [13] ;
_Bool arr_15 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 13152440459847522521ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)50616;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)50 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)199;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = 4163998533U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = (short)23876;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_9 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_10 [i_0] = (unsigned short)65137;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)23675;
int var_1 = 1052119623;
unsigned char var_2 = (unsigned char)230;
unsigned char var_3 = (unsigned char)49;
signed char var_4 = (signed char)8;
unsigned char var_6 = (unsigned char)130;
int var_7 = 1433770562;
int var_9 = -1338494316;
int var_10 = -1932271596;
long long int var_11 = 128985268201086382LL;
int var_13 = -765163365;
unsigned char var_15 = (unsigned char)222;
int zero = 0;
long long int var_16 = 1800083070775531385LL;
unsigned long long int var_17 = 15194027172316067098ULL;
unsigned short var_18 = (unsigned short)6912;
unsigned long long int var_19 = 12743879297002614711ULL;
unsigned long long int var_20 = 8986726935604045135ULL;
unsigned short var_21 = (unsigned short)16275;
unsigned char var_22 = (unsigned char)168;
short var_23 = (short)10753;
int var_24 = -1084061830;
unsigned short var_25 = (unsigned short)16671;
unsigned char var_26 = (unsigned char)230;
unsigned short arr_0 [15] [15] ;
unsigned char arr_1 [15] ;
unsigned int arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned int arr_4 [15] ;
int arr_8 [15] [15] [15] ;
long long int arr_14 [17] ;
unsigned short arr_6 [15] [15] ;
unsigned int arr_10 [15] [15] [15] ;
signed char arr_11 [15] [15] ;
long long int arr_12 [15] [15] [15] ;
unsigned char arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)8135;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4588712U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (unsigned char)120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 1511287835U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 661026406;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 386573884963541540LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)21446;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 353822583U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -8500036772950747930LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = (unsigned char)105;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_12 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 696842165;
unsigned int var_2 = 870267180U;
unsigned short var_6 = (unsigned short)59037;
int var_7 = 1401231626;
unsigned int var_8 = 1029397866U;
unsigned char var_9 = (unsigned char)112;
signed char var_11 = (signed char)108;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)147;
unsigned short var_14 = (unsigned short)5976;
unsigned short var_15 = (unsigned short)26877;
signed char var_16 = (signed char)-38;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-10652;
unsigned int var_19 = 2727982477U;
int var_20 = 1976493993;
unsigned long long int arr_1 [25] ;
unsigned int arr_4 [21] [21] ;
int arr_6 [21] [21] ;
unsigned int arr_8 [24] [24] ;
long long int arr_9 [24] ;
unsigned int arr_13 [24] [24] [24] ;
unsigned int arr_17 [24] ;
signed char arr_18 [24] [24] ;
unsigned short arr_2 [25] ;
_Bool arr_7 [21] ;
unsigned int arr_12 [24] ;
unsigned short arr_15 [24] [24] ;
int arr_20 [24] [24] ;
long long int arr_21 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 18126517265268214973ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 428235365U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 555943606;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 782779907U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 7001505520965685355LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = 2647245402U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 727409062U : 280118175U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)-83 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)474;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = 2577473787U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned short)52860;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 529289666 : -1933612228;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 8874441153725464136LL : 314574067517980125LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_21 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

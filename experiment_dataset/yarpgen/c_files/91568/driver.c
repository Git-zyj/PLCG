#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2297715626U;
short var_1 = (short)4748;
unsigned char var_2 = (unsigned char)114;
unsigned short var_3 = (unsigned short)47460;
signed char var_5 = (signed char)90;
unsigned char var_6 = (unsigned char)121;
long long int var_7 = -1792330056885827903LL;
_Bool var_8 = (_Bool)0;
short var_9 = (short)19472;
long long int var_10 = 7819305419850003025LL;
int zero = 0;
signed char var_11 = (signed char)-56;
short var_12 = (short)-27200;
unsigned short var_13 = (unsigned short)22507;
unsigned char var_14 = (unsigned char)163;
unsigned char var_15 = (unsigned char)103;
unsigned short var_16 = (unsigned short)56897;
_Bool var_17 = (_Bool)0;
short var_18 = (short)32326;
unsigned short arr_0 [14] ;
signed char arr_1 [14] [14] ;
long long int arr_2 [10] [10] ;
_Bool arr_4 [10] [10] ;
long long int arr_8 [24] [24] ;
unsigned int arr_9 [24] ;
_Bool arr_5 [10] [10] ;
long long int arr_6 [10] [10] ;
unsigned char arr_7 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)49445;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -6344054774784180334LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = -166383317869656618LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 2510815635U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? 6225090248355585376LL : -1174863823602602643LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned char)149 : (unsigned char)186;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

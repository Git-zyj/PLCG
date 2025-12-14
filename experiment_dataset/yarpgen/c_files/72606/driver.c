#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -3640510043620546581LL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)176;
signed char var_11 = (signed char)-34;
unsigned char var_13 = (unsigned char)130;
unsigned long long int var_17 = 13479821148563513736ULL;
int zero = 0;
long long int var_20 = 2441993493054778753LL;
short var_21 = (short)-8314;
short var_22 = (short)-6423;
short var_23 = (short)-27240;
int var_24 = -151669066;
int var_25 = 2087050839;
long long int var_26 = 7505262972391888245LL;
unsigned char var_27 = (unsigned char)44;
long long int arr_0 [13] ;
long long int arr_1 [13] ;
signed char arr_6 [11] ;
long long int arr_10 [11] ;
unsigned char arr_11 [11] ;
unsigned long long int arr_4 [17] ;
_Bool arr_9 [11] ;
short arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -4095717528465500507LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = -6656641503974216234LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? -2529900015761403677LL : 4084703857590719624LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 12609474282247360009ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-29306 : (short)-19501;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

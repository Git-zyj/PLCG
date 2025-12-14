#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21415;
unsigned short var_1 = (unsigned short)64905;
long long int var_2 = -6501460050694285918LL;
unsigned long long int var_3 = 9265919035109738930ULL;
_Bool var_4 = (_Bool)1;
long long int var_5 = -6913833137509356088LL;
signed char var_6 = (signed char)126;
unsigned long long int var_7 = 10498044149318372287ULL;
unsigned long long int var_9 = 5194816924065443610ULL;
unsigned short var_10 = (unsigned short)60398;
unsigned long long int var_11 = 15384234110438690776ULL;
int zero = 0;
short var_12 = (short)19948;
unsigned long long int var_13 = 12744742458607960973ULL;
short var_14 = (short)-27625;
long long int var_15 = -9093923635121868063LL;
unsigned long long int var_16 = 7114910739573633667ULL;
unsigned long long int var_17 = 2277737597156190915ULL;
short arr_0 [24] ;
signed char arr_1 [24] [24] ;
unsigned long long int arr_2 [24] ;
_Bool arr_4 [24] ;
short arr_5 [24] ;
int arr_6 [24] [24] [24] ;
unsigned char arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)14810;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-19;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 12355574337243261462ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)13311 : (short)25393;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -2053065583 : -1097438516;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)204 : (unsigned char)140;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

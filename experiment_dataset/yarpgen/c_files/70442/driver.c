#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
unsigned long long int var_4 = 1226318909463325973ULL;
unsigned int var_7 = 249382192U;
int var_10 = 2010723722;
unsigned char var_13 = (unsigned char)177;
int zero = 0;
int var_14 = 1854194535;
unsigned short var_15 = (unsigned short)20785;
unsigned int var_16 = 3256627192U;
unsigned int var_17 = 2158435413U;
unsigned int var_18 = 602665612U;
int var_19 = -76846774;
int var_20 = 1322624176;
unsigned long long int var_21 = 11881189638541937553ULL;
unsigned char var_22 = (unsigned char)231;
unsigned char arr_0 [22] [22] ;
short arr_1 [22] ;
_Bool arr_2 [22] ;
int arr_6 [12] ;
unsigned short arr_9 [21] [21] ;
unsigned long long int arr_3 [22] ;
unsigned short arr_8 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-27140;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -1130084254;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)3817;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 7735003259791158691ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned short)10804;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

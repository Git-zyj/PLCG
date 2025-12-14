#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1450022552;
unsigned int var_2 = 3296937792U;
long long int var_5 = 1689738793650361689LL;
int var_6 = -1026052927;
long long int var_10 = 550913702551379121LL;
int var_11 = -529363884;
long long int var_12 = -1559450258410406115LL;
unsigned char var_13 = (unsigned char)218;
int zero = 0;
int var_14 = -1078119981;
unsigned long long int var_15 = 53727723811641009ULL;
unsigned char var_16 = (unsigned char)154;
unsigned long long int var_17 = 4190983923697672110ULL;
short var_18 = (short)28875;
unsigned char arr_0 [22] ;
int arr_1 [22] [22] ;
long long int arr_4 [22] ;
unsigned short arr_5 [22] ;
unsigned int arr_9 [22] ;
unsigned char arr_2 [22] ;
int arr_3 [22] ;
long long int arr_6 [22] ;
long long int arr_7 [22] [22] ;
unsigned char arr_10 [22] ;
unsigned long long int arr_11 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)52;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = -1039343121;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -7292654545148706761LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned short)51577;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 1814598930U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 649679870;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = -189998413390159274LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = -3462267370406593868LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_11 [i_0] [i_1] = 5157998991221351078ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

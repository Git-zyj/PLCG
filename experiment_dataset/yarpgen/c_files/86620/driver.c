#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39674;
unsigned short var_2 = (unsigned short)25116;
unsigned char var_3 = (unsigned char)87;
long long int var_4 = -7950970958858094076LL;
signed char var_9 = (signed char)-117;
unsigned char var_11 = (unsigned char)34;
short var_12 = (short)-12478;
unsigned short var_13 = (unsigned short)31890;
int zero = 0;
unsigned int var_14 = 1646348585U;
unsigned int var_15 = 2572307186U;
long long int var_16 = -4192480929571877842LL;
unsigned char var_17 = (unsigned char)169;
short var_18 = (short)-13482;
signed char var_19 = (signed char)62;
unsigned char var_20 = (unsigned char)191;
unsigned int var_21 = 3623132999U;
signed char var_22 = (signed char)-21;
unsigned long long int var_23 = 4506435456519231035ULL;
unsigned int arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
signed char arr_2 [23] ;
signed char arr_7 [12] ;
unsigned short arr_8 [22] [22] ;
unsigned int arr_9 [22] ;
long long int arr_10 [22] ;
_Bool arr_3 [23] ;
unsigned long long int arr_4 [23] [23] ;
signed char arr_5 [23] [23] ;
unsigned char arr_11 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 4199146485U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 8590316924616914231ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (signed char)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned short)37685;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2780138065U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -3557849752727193469LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = 308419746100164429ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (unsigned char)5;
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
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

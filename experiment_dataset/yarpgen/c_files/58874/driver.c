#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)15705;
long long int var_2 = 3405534826694165192LL;
_Bool var_3 = (_Bool)1;
unsigned short var_4 = (unsigned short)54877;
short var_5 = (short)-5982;
signed char var_9 = (signed char)11;
unsigned short var_14 = (unsigned short)47854;
unsigned short var_15 = (unsigned short)17466;
short var_17 = (short)-24905;
int zero = 0;
unsigned short var_19 = (unsigned short)11906;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)88;
unsigned long long int var_22 = 14047866724830967197ULL;
signed char var_23 = (signed char)-7;
unsigned int var_24 = 84863221U;
int arr_2 [17] [17] [17] ;
unsigned char arr_8 [22] ;
short arr_10 [22] ;
unsigned long long int arr_5 [17] [17] ;
int arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 200868413;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = (short)-11;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 2095266245254855742ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = 2014236822;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

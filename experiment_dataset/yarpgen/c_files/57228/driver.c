#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)137;
signed char var_5 = (signed char)-103;
long long int var_8 = 3336638868125792856LL;
long long int var_9 = -2135285404801026156LL;
int zero = 0;
long long int var_10 = -1389822582006357774LL;
signed char var_11 = (signed char)-49;
unsigned short arr_0 [14] ;
unsigned short arr_1 [14] ;
unsigned short arr_3 [14] [14] [14] ;
unsigned short arr_4 [14] ;
unsigned short arr_5 [14] ;
unsigned short arr_6 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)63005;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)34147;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)51086;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned short)34009;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned short)28106;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)65451;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

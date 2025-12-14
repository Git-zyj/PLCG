#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-16;
int var_3 = -1097305507;
unsigned short var_4 = (unsigned short)52712;
unsigned short var_6 = (unsigned short)57948;
unsigned long long int var_7 = 4691659359035516835ULL;
unsigned short var_9 = (unsigned short)4667;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 11905774187960811662ULL;
int var_15 = -1011677284;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-24155;
short var_22 = (short)23323;
int var_23 = 1224273855;
int var_24 = -333616961;
unsigned short arr_1 [17] ;
short arr_2 [17] ;
unsigned long long int arr_5 [17] ;
short arr_6 [17] ;
int arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)52017;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)19918;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 16693701858020063109ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (short)-28313;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = -1191503860;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

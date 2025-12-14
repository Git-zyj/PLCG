#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4273444986U;
_Bool var_1 = (_Bool)0;
int var_2 = 1599476517;
unsigned int var_3 = 3132726687U;
int var_4 = -20572773;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1746548648827627352ULL;
unsigned short var_8 = (unsigned short)30308;
unsigned short var_9 = (unsigned short)11434;
unsigned int var_10 = 172882525U;
unsigned int var_11 = 2123565214U;
signed char var_12 = (signed char)106;
unsigned short var_13 = (unsigned short)48666;
int zero = 0;
unsigned int var_14 = 1235875119U;
unsigned long long int var_15 = 1181648666851066305ULL;
signed char var_16 = (signed char)-79;
unsigned int var_17 = 4157046685U;
int var_18 = 691472767;
int var_19 = 810462174;
unsigned long long int arr_1 [16] [16] ;
unsigned short arr_10 [25] [25] [25] ;
unsigned long long int arr_12 [25] [25] [25] ;
unsigned long long int arr_5 [25] [25] ;
int arr_15 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 10099692686869315392ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)28037;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 5777728406125425584ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 1870543179892399738ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = -1244778821;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

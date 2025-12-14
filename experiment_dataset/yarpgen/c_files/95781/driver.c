#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)35657;
unsigned long long int var_2 = 13117994930309842291ULL;
unsigned short var_3 = (unsigned short)41269;
signed char var_4 = (signed char)111;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 17244623359294721318ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)63116;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)13733;
short var_15 = (short)30042;
unsigned short var_16 = (unsigned short)14894;
unsigned short arr_1 [19] ;
unsigned short arr_2 [19] ;
signed char arr_5 [19] ;
_Bool arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned short)22631;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)44244;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

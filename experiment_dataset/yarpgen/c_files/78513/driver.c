#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)58;
unsigned char var_2 = (unsigned char)169;
unsigned long long int var_3 = 2770726366583422220ULL;
unsigned short var_4 = (unsigned short)33432;
long long int var_7 = -695859603704492334LL;
unsigned long long int var_10 = 16953833894958715385ULL;
int var_12 = 1826950294;
int zero = 0;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -8164027607264886596LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-118;
unsigned short arr_0 [18] ;
_Bool arr_1 [18] ;
unsigned short arr_3 [12] ;
unsigned long long int arr_6 [22] ;
_Bool arr_7 [22] [22] [22] ;
unsigned short arr_8 [22] [22] [22] ;
unsigned short arr_4 [12] ;
int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)5124;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)43817;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 14021783387933708724ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned short)21288;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned short)33144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = 2106682454;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

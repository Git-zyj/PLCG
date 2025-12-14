#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1340766953640300729LL;
unsigned char var_1 = (unsigned char)63;
signed char var_2 = (signed char)-79;
int var_4 = -590111612;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 5771430921360337202ULL;
unsigned long long int var_8 = 15659458577749693585ULL;
unsigned long long int var_9 = 2599788001175321625ULL;
signed char var_10 = (signed char)19;
unsigned int var_11 = 3999258886U;
long long int var_12 = -8511382131944617519LL;
int var_14 = 949588213;
int zero = 0;
signed char var_15 = (signed char)(-127 - 1);
int var_16 = -874253143;
unsigned short var_17 = (unsigned short)4937;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2570458082U;
unsigned long long int var_20 = 10010947881713994616ULL;
long long int var_21 = -8857677861789562867LL;
long long int var_22 = 6621919607282794856LL;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
unsigned int arr_1 [15] ;
unsigned long long int arr_5 [15] [15] ;
unsigned long long int arr_6 [15] [15] [15] ;
unsigned char arr_10 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_13 [15] [15] [15] [15] [15] ;
long long int arr_16 [15] ;
unsigned short arr_21 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 436174599U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 15927918332355594344ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 5084541712370751244ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)10091;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_16 [i_0] = -7823025386677948455LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)50757 : (unsigned short)23624;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

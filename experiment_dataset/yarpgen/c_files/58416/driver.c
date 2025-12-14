#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)205;
long long int var_1 = 4658466818179839551LL;
long long int var_2 = -1549103433879962988LL;
unsigned long long int var_4 = 9856461118161897144ULL;
unsigned long long int var_7 = 5284260054079978943ULL;
signed char var_8 = (signed char)-45;
unsigned short var_9 = (unsigned short)33760;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -4035180452604841991LL;
unsigned char var_12 = (unsigned char)42;
unsigned short var_13 = (unsigned short)21982;
_Bool var_14 = (_Bool)0;
long long int arr_0 [13] [13] ;
unsigned long long int arr_2 [13] [13] [13] ;
int arr_3 [13] [13] ;
int arr_4 [13] ;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = -3509455344406394484LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3831375514749517174ULL : 15648247598124642476ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = 1125589225;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = -1424720455;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)4662 : (unsigned short)56901;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

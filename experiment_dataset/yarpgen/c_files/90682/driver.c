#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1201746536;
unsigned long long int var_1 = 10045100572740206846ULL;
unsigned long long int var_2 = 629970808097592189ULL;
short var_3 = (short)16994;
unsigned long long int var_4 = 7618742590423355072ULL;
unsigned long long int var_5 = 3654328087506236258ULL;
short var_6 = (short)-15411;
unsigned short var_7 = (unsigned short)17802;
unsigned long long int var_8 = 484493753599202296ULL;
unsigned short var_9 = (unsigned short)6733;
unsigned int var_10 = 2389263062U;
long long int var_12 = 3488867840624115274LL;
signed char var_13 = (signed char)94;
unsigned long long int var_14 = 16305485442139744759ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)14653;
signed char var_18 = (signed char)1;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = -1144289421;
int var_21 = 1852550432;
unsigned long long int var_22 = 953054718162556737ULL;
signed char var_23 = (signed char)19;
unsigned char var_24 = (unsigned char)127;
unsigned int var_25 = 1442641176U;
unsigned char var_26 = (unsigned char)41;
long long int var_27 = 1936522774998395173LL;
unsigned short var_28 = (unsigned short)48525;
long long int arr_4 [11] ;
unsigned long long int arr_7 [11] ;
long long int arr_23 [24] ;
unsigned int arr_29 [24] [24] ;
int arr_30 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = 7316548970658017582LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 6023101373680232470ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -7501593134246723138LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = 4077018994U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = -526415494;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

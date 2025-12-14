#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8296088812168903638LL;
unsigned char var_1 = (unsigned char)236;
int var_2 = 1320225778;
short var_3 = (short)7958;
long long int var_4 = 4999794480780490264LL;
unsigned char var_5 = (unsigned char)71;
long long int var_6 = -6725278353367306644LL;
unsigned int var_7 = 1774996199U;
unsigned long long int var_9 = 16772711715496982757ULL;
unsigned short var_10 = (unsigned short)44743;
long long int var_11 = 3944039783672603255LL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_14 = 5161493945602673764ULL;
long long int var_15 = 5057871083387410149LL;
long long int var_17 = -2088848638778180518LL;
unsigned char var_18 = (unsigned char)56;
int zero = 0;
unsigned char var_19 = (unsigned char)200;
unsigned long long int var_20 = 4213906760751680344ULL;
long long int var_21 = 772671742538796294LL;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)1853;
_Bool arr_0 [15] ;
long long int arr_1 [15] ;
long long int arr_2 [15] ;
unsigned char arr_3 [15] ;
unsigned long long int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -1115911052923208222LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 3937194358550583121LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 7113188865780207021ULL : 6893209031224370030ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

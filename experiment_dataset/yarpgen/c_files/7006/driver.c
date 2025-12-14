#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)120;
unsigned char var_2 = (unsigned char)72;
unsigned int var_3 = 1596424348U;
unsigned long long int var_7 = 2903937356820735262ULL;
unsigned char var_9 = (unsigned char)235;
long long int var_11 = 3767317532129236189LL;
int zero = 0;
long long int var_12 = 6752184172370658175LL;
unsigned int var_13 = 1421336226U;
unsigned char var_14 = (unsigned char)14;
long long int var_15 = -3587619011518020371LL;
unsigned short var_16 = (unsigned short)14218;
unsigned char var_17 = (unsigned char)186;
int var_18 = 1089691437;
long long int var_19 = 713656552004860901LL;
long long int var_20 = 8719078622139201098LL;
_Bool var_21 = (_Bool)0;
unsigned long long int arr_1 [18] [18] ;
short arr_6 [18] [18] ;
long long int arr_7 [18] [18] [18] ;
long long int arr_9 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 8469580622574905413ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_6 [i_0] [i_1] = (short)22116;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -9125174518662613008LL : -5732762832979598103LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = -180086729679128547LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

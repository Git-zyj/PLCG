#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1079000032;
short var_5 = (short)-30714;
unsigned short var_9 = (unsigned short)45841;
short var_10 = (short)15237;
int var_13 = 1046115110;
int zero = 0;
unsigned char var_17 = (unsigned char)130;
long long int var_18 = -397252246463818811LL;
int var_19 = 1273415992;
signed char var_20 = (signed char)-69;
unsigned short var_21 = (unsigned short)17444;
unsigned int var_22 = 1299927019U;
unsigned char var_23 = (unsigned char)211;
long long int arr_1 [11] [11] ;
long long int arr_2 [11] [11] ;
long long int arr_4 [17] [17] ;
unsigned long long int arr_5 [17] [17] ;
unsigned short arr_6 [17] ;
short arr_7 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = 3334775248396497052LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = -2223290100174945890LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = -7038624871272322804LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 6559239390119540287ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)38765;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-14844;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
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

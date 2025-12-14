#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-22783;
long long int var_11 = 5561820934153256603LL;
unsigned char var_12 = (unsigned char)190;
unsigned short var_14 = (unsigned short)34852;
int zero = 0;
unsigned short var_17 = (unsigned short)4709;
signed char var_18 = (signed char)-88;
long long int var_19 = -1758176312878699062LL;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-112;
long long int var_22 = -4610279742006016406LL;
_Bool var_23 = (_Bool)0;
unsigned int arr_8 [11] ;
int arr_4 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 237674388U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = -1094165204;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

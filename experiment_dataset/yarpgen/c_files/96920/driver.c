#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-22;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)58728;
long long int var_4 = -1831765170259260640LL;
unsigned char var_5 = (unsigned char)17;
long long int var_7 = -3263230358714060734LL;
unsigned int var_9 = 3654457827U;
long long int var_10 = 7609248745965360121LL;
int zero = 0;
unsigned short var_11 = (unsigned short)62291;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 801033951551738777ULL;
_Bool var_14 = (_Bool)1;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 8641234195039044989LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

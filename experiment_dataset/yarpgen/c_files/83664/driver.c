#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
int var_4 = -89301608;
unsigned long long int var_9 = 1554967169519903986ULL;
int var_13 = 427257483;
unsigned short var_17 = (unsigned short)3078;
long long int var_18 = -8147723885600204971LL;
int zero = 0;
unsigned char var_20 = (unsigned char)224;
unsigned long long int var_21 = 5439015309506967619ULL;
int var_22 = 1570276485;
short var_23 = (short)1691;
int var_24 = -1558288079;
unsigned int arr_0 [12] ;
unsigned char arr_1 [12] [12] ;
unsigned long long int arr_2 [12] ;
int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2421969469U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)201;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 3433424834592303196ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = -805266469;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

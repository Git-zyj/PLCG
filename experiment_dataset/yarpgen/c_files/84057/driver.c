#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)70;
int var_2 = -463905595;
_Bool var_4 = (_Bool)0;
int var_5 = 1674820872;
unsigned long long int var_6 = 8833875193753428965ULL;
long long int var_7 = -3102596180999577059LL;
unsigned char var_8 = (unsigned char)68;
unsigned char var_9 = (unsigned char)101;
int zero = 0;
unsigned int var_11 = 212811250U;
short var_12 = (short)29341;
unsigned int var_13 = 3042632252U;
int var_14 = 327843759;
unsigned long long int var_15 = 6109587903820728073ULL;
unsigned long long int var_16 = 6221030896724534139ULL;
_Bool var_17 = (_Bool)1;
unsigned int arr_1 [25] ;
unsigned long long int arr_3 [25] ;
unsigned long long int arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 2046280573U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 14131624330711209926ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 5353201278272640786ULL : 14054227960884401439ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1391741022053281956ULL;
signed char var_5 = (signed char)-127;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-30696;
unsigned char var_13 = (unsigned char)117;
int var_14 = 749213629;
unsigned char var_15 = (unsigned char)220;
int var_19 = -37516271;
int zero = 0;
unsigned char var_20 = (unsigned char)182;
unsigned char var_21 = (unsigned char)105;
long long int var_22 = -7044131081932037190LL;
short var_23 = (short)26948;
unsigned int var_24 = 2838889152U;
long long int var_25 = -8315324129471629180LL;
unsigned char var_26 = (unsigned char)2;
_Bool var_27 = (_Bool)0;
unsigned long long int var_28 = 4535977474063754814ULL;
unsigned short arr_0 [19] ;
_Bool arr_1 [19] ;
signed char arr_2 [19] [19] ;
short arr_3 [19] [19] [19] ;
signed char arr_4 [19] [19] ;
long long int arr_7 [17] ;
unsigned long long int arr_10 [17] [17] ;
int arr_12 [17] [17] ;
long long int arr_17 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)25372;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-14782;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = -6031366164926431368LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = 13960675424582815094ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = -1594887174;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 1681323538848415024LL : -9061941243520362957LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

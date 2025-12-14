#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3968629106827045676ULL;
_Bool var_1 = (_Bool)0;
int var_5 = -940234110;
long long int var_7 = 2748311088358416804LL;
int var_8 = 876563872;
long long int var_10 = -4324940822285447113LL;
unsigned short var_11 = (unsigned short)23757;
long long int var_12 = 8779807899983978764LL;
int zero = 0;
int var_15 = -49465040;
int var_16 = -1828519824;
unsigned long long int var_17 = 9561191403596704689ULL;
unsigned char var_18 = (unsigned char)217;
long long int var_19 = 4109777867107439973LL;
signed char var_20 = (signed char)-48;
long long int arr_0 [13] ;
unsigned char arr_2 [16] [16] ;
_Bool arr_3 [16] [16] ;
unsigned int arr_5 [17] [17] ;
unsigned short arr_6 [17] [17] ;
signed char arr_4 [16] ;
signed char arr_8 [17] ;
unsigned char arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -898661453306012940LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = 2882883382U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)14826;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)10;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

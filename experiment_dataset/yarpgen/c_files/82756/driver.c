#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11239535818809642811ULL;
unsigned short var_3 = (unsigned short)15538;
signed char var_5 = (signed char)126;
_Bool var_6 = (_Bool)0;
signed char var_11 = (signed char)-26;
unsigned int var_12 = 3589895431U;
int zero = 0;
unsigned int var_13 = 4280240612U;
long long int var_14 = -7952095865030874641LL;
unsigned long long int var_15 = 6211963397011946120ULL;
signed char var_16 = (signed char)-54;
unsigned long long int var_17 = 11826107262039051766ULL;
unsigned int arr_0 [25] ;
unsigned char arr_1 [25] [25] ;
_Bool arr_4 [16] ;
unsigned int arr_6 [17] [17] ;
unsigned int arr_7 [17] ;
unsigned long long int arr_2 [25] ;
unsigned long long int arr_5 [16] ;
signed char arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 3947548264U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 4288126269U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 883458315U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 1233370697951736018ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 12343325690075195816ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (signed char)-85;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
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

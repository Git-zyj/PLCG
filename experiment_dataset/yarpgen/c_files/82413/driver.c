#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3933264598U;
long long int var_3 = -6330884236384502594LL;
signed char var_6 = (signed char)-121;
int var_7 = 1728250509;
unsigned long long int var_10 = 11489615427718615055ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 11207879985260667858ULL;
int var_14 = 2001359713;
signed char var_15 = (signed char)-111;
unsigned short var_16 = (unsigned short)5992;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)1432;
long long int var_19 = -8481850091734213850LL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_1 [25] ;
long long int arr_6 [25] [25] [25] [25] ;
int arr_7 [25] ;
unsigned char arr_8 [25] ;
unsigned short arr_9 [25] [25] ;
unsigned char arr_11 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 16254059074622262852ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 7781825749088092644ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -2658177867129581728LL : -2975307059072959151LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 658071461;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (unsigned char)15;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)12004;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (unsigned char)104 : (unsigned char)214;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8974052668819056763LL;
signed char var_1 = (signed char)-101;
short var_2 = (short)-27019;
unsigned short var_3 = (unsigned short)50331;
short var_5 = (short)30663;
unsigned int var_7 = 3910626496U;
signed char var_8 = (signed char)-35;
int var_9 = -74989530;
unsigned int var_10 = 1374157952U;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_17 = (short)29933;
int var_18 = -1383609308;
short var_19 = (short)22257;
unsigned char var_20 = (unsigned char)218;
unsigned short var_21 = (unsigned short)16050;
_Bool var_22 = (_Bool)1;
signed char arr_2 [10] [10] ;
long long int arr_5 [15] [15] ;
int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)15;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = -6592513299454982549LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -208881611;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

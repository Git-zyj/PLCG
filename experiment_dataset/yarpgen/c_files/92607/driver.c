#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6746002108712316857LL;
unsigned int var_2 = 1098265905U;
unsigned long long int var_6 = 469906040225988722ULL;
unsigned short var_8 = (unsigned short)123;
signed char var_12 = (signed char)12;
signed char var_14 = (signed char)127;
int zero = 0;
unsigned int var_17 = 1983272905U;
_Bool var_18 = (_Bool)1;
long long int var_19 = 6490529106051337618LL;
unsigned int var_20 = 2181195376U;
unsigned short var_21 = (unsigned short)17668;
unsigned long long int var_22 = 13355417089165070427ULL;
unsigned char arr_0 [25] ;
long long int arr_1 [25] ;
unsigned short arr_3 [11] [11] ;
unsigned int arr_4 [11] [11] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -3033650650568139806LL : -8683898891134776902LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)45310;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 3314046863U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1529895135 : 907447130;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

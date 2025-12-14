#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)7874;
long long int var_3 = -5917299655982350445LL;
long long int var_4 = -756380768568195554LL;
long long int var_5 = 1858157479242600421LL;
unsigned int var_9 = 3638790981U;
unsigned int var_10 = 4067066895U;
int zero = 0;
signed char var_19 = (signed char)-27;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)34;
unsigned short var_23 = (unsigned short)63264;
long long int arr_2 [12] [12] ;
unsigned int arr_3 [12] [12] ;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 5479848261225178272LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 3530506524U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1343599482;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

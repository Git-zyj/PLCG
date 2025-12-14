#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2080984552731798913ULL;
short var_4 = (short)8520;
int var_8 = 739652241;
int var_11 = 1271335688;
long long int var_17 = 6605874657252918564LL;
int zero = 0;
unsigned char var_19 = (unsigned char)105;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-28333;
unsigned long long int var_22 = 6084946855519286958ULL;
_Bool var_23 = (_Bool)1;
short arr_1 [18] ;
unsigned int arr_2 [18] ;
int arr_3 [18] [18] [18] ;
long long int arr_4 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (short)-28889;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 2009929181U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1199591845;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = -3513820096676588431LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

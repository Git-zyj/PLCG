#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 737792641U;
unsigned long long int var_1 = 5668323124863584867ULL;
signed char var_2 = (signed char)-113;
unsigned int var_3 = 382442224U;
unsigned int var_6 = 1920393412U;
unsigned short var_7 = (unsigned short)65503;
unsigned long long int var_8 = 14919222398850868767ULL;
signed char var_10 = (signed char)-55;
unsigned int var_11 = 1393211451U;
unsigned int var_12 = 898164189U;
unsigned int var_13 = 1589564911U;
int zero = 0;
unsigned int var_16 = 132563155U;
signed char var_17 = (signed char)-41;
signed char var_18 = (signed char)-95;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 3040641110U;
_Bool arr_6 [16] [16] [16] ;
unsigned int arr_9 [16] ;
unsigned long long int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3718942240U : 3699317203U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 15443812808285022851ULL : 8907930625711147659ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

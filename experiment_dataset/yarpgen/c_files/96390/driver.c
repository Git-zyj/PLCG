#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-29156;
long long int var_6 = -4105093818887645897LL;
signed char var_8 = (signed char)-82;
long long int var_10 = 3295244660787648016LL;
unsigned long long int var_12 = 2461788329104925631ULL;
unsigned int var_14 = 3381440575U;
int zero = 0;
unsigned short var_18 = (unsigned short)9756;
unsigned char var_19 = (unsigned char)93;
unsigned short var_20 = (unsigned short)53945;
unsigned long long int var_21 = 16268359190605110935ULL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 387126949U;
short arr_6 [22] [22] ;
unsigned int arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (short)-31792;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 3034660556U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

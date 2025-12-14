#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
signed char var_2 = (signed char)-64;
short var_3 = (short)-651;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)137;
int var_6 = -155223076;
unsigned int var_8 = 748784601U;
int zero = 0;
unsigned short var_11 = (unsigned short)60632;
unsigned char var_12 = (unsigned char)44;
unsigned char var_13 = (unsigned char)53;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)81;
unsigned short var_16 = (unsigned short)38102;
unsigned long long int arr_3 [10] ;
long long int arr_8 [12] ;
long long int arr_9 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 329206519568932676ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1033580710534974986LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = -8678254498487690445LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

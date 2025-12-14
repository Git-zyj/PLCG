#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3280036823U;
unsigned short var_2 = (unsigned short)32488;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned short var_7 = (unsigned short)18383;
short var_9 = (short)-20090;
int var_13 = 562570284;
unsigned short var_14 = (unsigned short)30158;
unsigned int var_17 = 3329542716U;
int zero = 0;
unsigned short var_20 = (unsigned short)25098;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1820403018U;
short arr_0 [24] ;
int arr_1 [24] ;
unsigned short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)-31854;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 1110083851;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)16295;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

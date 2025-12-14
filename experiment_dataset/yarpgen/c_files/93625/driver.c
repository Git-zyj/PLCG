#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20509;
unsigned char var_4 = (unsigned char)132;
unsigned int var_5 = 47442782U;
unsigned short var_6 = (unsigned short)15103;
long long int var_14 = 3534449780618942194LL;
unsigned char var_16 = (unsigned char)208;
unsigned int var_17 = 3014360439U;
int zero = 0;
short var_18 = (short)-3547;
long long int var_19 = -8124331525073122696LL;
unsigned char var_20 = (unsigned char)206;
unsigned int var_21 = 1460006684U;
signed char var_22 = (signed char)80;
_Bool arr_1 [18] [18] ;
unsigned int arr_9 [21] [21] ;
short arr_10 [21] ;
_Bool arr_8 [18] ;
signed char arr_11 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = 2159254297U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = (short)31028;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = (signed char)53;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_11 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

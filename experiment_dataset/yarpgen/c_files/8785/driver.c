#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)12;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)52543;
signed char var_12 = (signed char)-14;
_Bool var_13 = (_Bool)1;
unsigned int var_15 = 3786503644U;
int zero = 0;
unsigned char var_20 = (unsigned char)192;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3241793581U;
unsigned int var_23 = 3501696757U;
unsigned short var_24 = (unsigned short)12089;
_Bool var_25 = (_Bool)0;
_Bool arr_0 [22] ;
unsigned char arr_1 [22] ;
short arr_2 [22] ;
long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)37;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (short)-23409;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 6952790122131863010LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

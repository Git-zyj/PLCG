#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 261595209;
unsigned char var_3 = (unsigned char)158;
unsigned int var_6 = 526731465U;
int var_12 = -43347475;
int var_16 = 284345430;
_Bool var_17 = (_Bool)0;
int zero = 0;
long long int var_20 = 6868926726396639031LL;
short var_21 = (short)13909;
signed char var_22 = (signed char)97;
int var_23 = -344316230;
long long int var_24 = -3952363719174024897LL;
signed char var_25 = (signed char)-58;
int arr_3 [22] ;
unsigned char arr_7 [17] ;
unsigned int arr_8 [17] ;
unsigned short arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 701726743;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)193;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 2602185371U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)49777;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

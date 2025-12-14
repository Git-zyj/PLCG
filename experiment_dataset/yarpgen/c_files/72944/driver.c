#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)102;
unsigned long long int var_6 = 4543141435329670506ULL;
short var_11 = (short)22263;
unsigned int var_16 = 1447169718U;
int zero = 0;
unsigned char var_18 = (unsigned char)143;
unsigned char var_19 = (unsigned char)19;
long long int var_20 = -7571677498839890640LL;
unsigned char var_21 = (unsigned char)11;
unsigned char var_22 = (unsigned char)66;
long long int var_23 = 2061843121546650694LL;
int arr_0 [14] ;
unsigned long long int arr_2 [14] ;
unsigned char arr_3 [14] ;
unsigned int arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -1578027273;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 8517639175859308426ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 171225280U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

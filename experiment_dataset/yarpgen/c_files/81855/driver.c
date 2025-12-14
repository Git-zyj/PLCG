#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13192371292783351425ULL;
unsigned int var_3 = 1594280390U;
unsigned int var_9 = 615983182U;
int var_12 = 1819757534;
unsigned int var_14 = 1304975814U;
unsigned char var_16 = (unsigned char)190;
int zero = 0;
unsigned int var_18 = 2014003561U;
int var_19 = -473486524;
long long int var_20 = 6409712016861849431LL;
long long int var_21 = 1487238135816470110LL;
int var_22 = -1186774689;
int var_23 = 1944596002;
unsigned int var_24 = 260218447U;
unsigned char var_25 = (unsigned char)127;
unsigned short var_26 = (unsigned short)54306;
unsigned int arr_1 [21] ;
int arr_5 [21] ;
_Bool arr_6 [21] ;
unsigned long long int arr_2 [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1138475822U : 284801752U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = 1374396544;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 13493477823258278533ULL : 4797878935804941705ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)83 : (unsigned char)67;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

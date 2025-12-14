#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 719792813615747785ULL;
unsigned long long int var_3 = 8454236066889469419ULL;
unsigned short var_4 = (unsigned short)6468;
unsigned long long int var_6 = 8474802750885676331ULL;
unsigned char var_7 = (unsigned char)26;
unsigned short var_9 = (unsigned short)16362;
int var_11 = 510525432;
int zero = 0;
int var_13 = -345502867;
unsigned long long int var_14 = 17579659192823257782ULL;
unsigned long long int var_15 = 7770316301187467796ULL;
unsigned char var_16 = (unsigned char)238;
int arr_0 [14] ;
_Bool arr_1 [14] ;
unsigned char arr_2 [14] ;
unsigned short arr_3 [14] ;
signed char arr_4 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -2015713715;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)59817;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)57;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

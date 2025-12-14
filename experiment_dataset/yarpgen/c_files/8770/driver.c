#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
int var_2 = 1385833086;
short var_3 = (short)-11977;
unsigned char var_4 = (unsigned char)63;
unsigned short var_6 = (unsigned short)7469;
_Bool var_7 = (_Bool)1;
signed char var_9 = (signed char)35;
int zero = 0;
long long int var_10 = -5254784699183989603LL;
unsigned char var_11 = (unsigned char)110;
unsigned char var_12 = (unsigned char)88;
signed char var_13 = (signed char)-73;
unsigned char arr_0 [15] ;
signed char arr_1 [15] [15] ;
unsigned short arr_2 [15] ;
unsigned long long int arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)129;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)45740;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 12042914057790629575ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

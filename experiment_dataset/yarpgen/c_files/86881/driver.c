#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
int var_1 = -1517380206;
short var_4 = (short)5707;
_Bool var_5 = (_Bool)1;
long long int var_7 = -1229585594413542677LL;
signed char var_10 = (signed char)-127;
long long int var_14 = -903662994703724054LL;
int var_15 = -131241878;
int zero = 0;
unsigned int var_18 = 1069988875U;
unsigned char var_19 = (unsigned char)239;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-63;
long long int arr_0 [12] ;
unsigned long long int arr_3 [12] ;
_Bool arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -3097520099298605326LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 18065576163490247425ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

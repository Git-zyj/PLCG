#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
long long int var_5 = -8568206769636712533LL;
unsigned char var_7 = (unsigned char)236;
unsigned short var_11 = (unsigned short)46909;
unsigned short var_12 = (unsigned short)19007;
long long int var_15 = -3663127288051268733LL;
int zero = 0;
long long int var_16 = 6863138435320867938LL;
unsigned short var_17 = (unsigned short)8857;
unsigned char var_18 = (unsigned char)54;
unsigned short var_19 = (unsigned short)54894;
int var_20 = 129752071;
unsigned short var_21 = (unsigned short)32981;
long long int var_22 = -7323711258801597314LL;
signed char var_23 = (signed char)-80;
unsigned short arr_0 [19] ;
int arr_1 [19] ;
long long int arr_2 [19] ;
unsigned short arr_3 [19] ;
unsigned short arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)24248;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 288381394;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -8645269044824941928LL : 1595398986755566239LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)2598 : (unsigned short)224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29447 : (unsigned short)44040;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

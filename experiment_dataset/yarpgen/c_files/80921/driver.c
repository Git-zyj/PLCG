#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_5 = -6348827919492737095LL;
unsigned char var_9 = (unsigned char)214;
long long int var_11 = 3461191163525338975LL;
unsigned char var_16 = (unsigned char)133;
long long int var_17 = -6487877537168733255LL;
int zero = 0;
long long int var_19 = 2453114171882375907LL;
unsigned short var_20 = (unsigned short)51028;
long long int var_21 = -6569953986506259455LL;
long long int arr_0 [14] ;
unsigned char arr_1 [14] ;
int arr_2 [14] ;
unsigned long long int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -8955756771475515888LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned char)124;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 440508047;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 319828961766593684ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

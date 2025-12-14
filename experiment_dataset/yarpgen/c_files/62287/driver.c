#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2223666324U;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)55183;
unsigned short var_6 = (unsigned short)58921;
long long int var_7 = 4513816119617535LL;
unsigned char var_8 = (unsigned char)222;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = -3609496678861518906LL;
signed char var_11 = (signed char)-102;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 2469109713U;
unsigned int arr_1 [14] ;
unsigned short arr_2 [14] ;
signed char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1458239392U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)49945;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (signed char)24;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

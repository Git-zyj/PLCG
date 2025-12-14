#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
long long int var_5 = -836780417470431533LL;
unsigned int var_6 = 1663026131U;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_11 = -4034952989236888818LL;
unsigned short var_14 = (unsigned short)14985;
unsigned int var_15 = 2429678993U;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1924167529;
long long int var_19 = -2344615177274758036LL;
long long int arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -3027796211260972777LL : 8838077876984483971LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -4032704316158325142LL : -7890706237203914447LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

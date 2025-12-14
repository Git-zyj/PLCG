#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_2 = (short)-3036;
_Bool var_3 = (_Bool)1;
unsigned short var_7 = (unsigned short)50637;
int var_9 = -1181977514;
unsigned char var_10 = (unsigned char)121;
int var_13 = 1960782985;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_17 = (short)-24414;
long long int var_18 = 4692618869099012980LL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
unsigned short arr_5 [15] ;
int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)11025;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -1703879124;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

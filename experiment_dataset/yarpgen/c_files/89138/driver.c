#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9908;
unsigned short var_1 = (unsigned short)26032;
long long int var_3 = 2446956532972205809LL;
_Bool var_4 = (_Bool)0;
signed char var_6 = (signed char)-7;
unsigned int var_7 = 3958968174U;
unsigned short var_8 = (unsigned short)52312;
unsigned short var_9 = (unsigned short)22079;
int zero = 0;
unsigned char var_10 = (unsigned char)155;
unsigned long long int var_11 = 6906232595490825143ULL;
short var_12 = (short)-9540;
unsigned char arr_0 [17] ;
_Bool arr_3 [17] [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 2428967430U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

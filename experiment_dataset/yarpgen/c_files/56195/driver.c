#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)10372;
unsigned int var_7 = 2910782995U;
signed char var_10 = (signed char)74;
short var_11 = (short)-24461;
int zero = 0;
long long int var_12 = -1862936248545864231LL;
unsigned long long int var_13 = 10975775550472142287ULL;
signed char var_14 = (signed char)112;
long long int var_15 = 7083926291041114312LL;
signed char var_16 = (signed char)-20;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)6874;
_Bool var_20 = (_Bool)1;
long long int var_21 = 1914666915946937730LL;
long long int arr_0 [17] ;
unsigned char arr_1 [17] ;
unsigned char arr_3 [17] [17] ;
unsigned short arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 3437478566976617241LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned short)6719;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

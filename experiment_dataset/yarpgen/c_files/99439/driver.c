#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
unsigned long long int var_2 = 8672337484872836021ULL;
unsigned long long int var_4 = 18034703773108994147ULL;
unsigned char var_7 = (unsigned char)207;
int var_8 = -1999844620;
unsigned short var_9 = (unsigned short)60757;
short var_11 = (short)28471;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1488679644348206425LL;
long long int var_15 = 4668047703212281052LL;
short var_16 = (short)1532;
unsigned int var_17 = 1398299315U;
unsigned short arr_3 [12] ;
int arr_4 [17] ;
unsigned char arr_5 [17] ;
_Bool arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)63585;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 501671102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

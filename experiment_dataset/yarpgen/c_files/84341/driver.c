#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7467026312859455233LL;
signed char var_7 = (signed char)89;
unsigned char var_8 = (unsigned char)182;
unsigned short var_9 = (unsigned short)31279;
short var_12 = (short)-25929;
_Bool var_13 = (_Bool)1;
long long int var_15 = 8777514727430173797LL;
int zero = 0;
unsigned short var_19 = (unsigned short)63619;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-9908;
int var_22 = -1391546463;
unsigned int var_23 = 2269974131U;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
unsigned char arr_0 [17] ;
unsigned int arr_1 [17] ;
short arr_2 [17] ;
unsigned short arr_3 [17] [17] ;
unsigned long long int arr_4 [17] ;
_Bool arr_7 [17] [17] ;
unsigned long long int arr_8 [17] ;
unsigned short arr_10 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 2583830116U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)7930;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)52507;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 12372286268812798887ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = 1323980958313208691ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (unsigned short)51695;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

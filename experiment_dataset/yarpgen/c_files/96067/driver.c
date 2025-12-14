#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57087;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)58134;
unsigned long long int var_4 = 10086656072493202257ULL;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_13 = (_Bool)0;
short var_14 = (short)-19011;
int zero = 0;
unsigned long long int var_16 = 7231846421444178399ULL;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)0;
short var_19 = (short)442;
_Bool var_20 = (_Bool)0;
unsigned char arr_0 [17] [17] ;
signed char arr_2 [17] ;
signed char arr_3 [17] [17] ;
unsigned char arr_4 [17] ;
unsigned int arr_6 [17] ;
unsigned char arr_7 [17] ;
unsigned short arr_8 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 370383142U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned char)75;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)63342;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12897722543917714729ULL;
int var_6 = 1557747374;
unsigned char var_7 = (unsigned char)25;
unsigned char var_8 = (unsigned char)173;
unsigned char var_9 = (unsigned char)249;
short var_10 = (short)26192;
unsigned short var_13 = (unsigned short)24164;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned short var_20 = (unsigned short)39381;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 11716742570462924381ULL;
unsigned char var_23 = (unsigned char)173;
unsigned long long int var_24 = 10998428879295513815ULL;
unsigned int var_25 = 1496836743U;
long long int var_26 = 3145315313544971990LL;
unsigned long long int var_27 = 11218822110458511646ULL;
unsigned char var_28 = (unsigned char)119;
long long int var_29 = 3730657714868242005LL;
unsigned short var_30 = (unsigned short)21648;
unsigned char arr_9 [10] [10] [10] ;
unsigned long long int arr_12 [18] ;
_Bool arr_13 [18] ;
unsigned long long int arr_33 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)244 : (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_12 [i_0] = 9043743040838211582ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8980743888891831046ULL : 3208456225502602483ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_2 = 1713956419U;
short var_4 = (short)26077;
int var_10 = -1424576569;
unsigned short var_11 = (unsigned short)21356;
unsigned char var_13 = (unsigned char)107;
unsigned int var_14 = 2246531746U;
unsigned short var_17 = (unsigned short)56457;
int var_18 = -1232016700;
unsigned short var_19 = (unsigned short)6020;
int zero = 0;
long long int var_20 = -7104347322570717028LL;
long long int var_21 = 5430529836946611632LL;
long long int var_22 = -7939758094027174619LL;
unsigned int var_23 = 2552153065U;
unsigned short var_24 = (unsigned short)16699;
unsigned int var_25 = 334661189U;
long long int arr_0 [23] ;
short arr_1 [23] ;
unsigned short arr_3 [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned int arr_8 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -2997376533738777681LL : -1766088458266948338LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (short)-29069;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)53507;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 3758273595128064460ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3281768823U : 669046888U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

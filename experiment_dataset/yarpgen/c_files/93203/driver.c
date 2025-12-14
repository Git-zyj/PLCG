#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4816440937897928484LL;
int var_2 = 1198608888;
unsigned short var_3 = (unsigned short)16804;
unsigned long long int var_5 = 2267925699629684867ULL;
_Bool var_6 = (_Bool)0;
int var_7 = -1508889856;
unsigned short var_8 = (unsigned short)7388;
unsigned int var_9 = 3271041429U;
long long int var_12 = -259006210220252892LL;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1947902310U;
unsigned char var_16 = (unsigned char)253;
unsigned short var_17 = (unsigned short)30909;
int zero = 0;
int var_18 = 1199305443;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 13249170600806502807ULL;
short var_21 = (short)-32575;
unsigned int var_22 = 3763758799U;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7621270066151383646ULL;
short var_25 = (short)-24288;
_Bool var_26 = (_Bool)1;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-29547;
unsigned long long int var_29 = 18231830552501012120ULL;
unsigned short var_30 = (unsigned short)3561;
long long int arr_21 [17] [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 4669178309789521022LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

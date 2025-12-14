#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = -901072220;
signed char var_4 = (signed char)-31;
short var_5 = (short)-14049;
long long int var_7 = 5879220993842529232LL;
short var_8 = (short)-359;
unsigned int var_13 = 534168439U;
int var_17 = 953303058;
unsigned int var_18 = 984326568U;
short var_19 = (short)-23738;
int zero = 0;
int var_20 = -111020938;
unsigned short var_21 = (unsigned short)1919;
short var_22 = (short)7328;
int var_23 = 1148697578;
int var_24 = -983851085;
unsigned char var_25 = (unsigned char)30;
signed char var_26 = (signed char)55;
long long int var_27 = -7753901085794541325LL;
unsigned char var_28 = (unsigned char)233;
long long int var_29 = -1290183168345772921LL;
short arr_0 [15] ;
unsigned short arr_1 [15] [15] ;
unsigned long long int arr_2 [15] ;
unsigned char arr_3 [15] [15] [15] ;
short arr_10 [15] ;
unsigned int arr_12 [15] [15] [15] [15] ;
short arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (short)-29241;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)8358;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 4852179994675948990ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)9354;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 4210032566U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)-6139;
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

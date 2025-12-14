#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 168668962U;
signed char var_2 = (signed char)-45;
long long int var_4 = 6194193854439216138LL;
short var_6 = (short)-23625;
signed char var_7 = (signed char)-53;
int var_8 = -1757223967;
signed char var_9 = (signed char)-106;
unsigned char var_10 = (unsigned char)34;
unsigned char var_12 = (unsigned char)30;
unsigned long long int var_13 = 12252718370684839766ULL;
signed char var_14 = (signed char)-40;
unsigned char var_16 = (unsigned char)240;
int zero = 0;
short var_18 = (short)-7972;
unsigned char var_19 = (unsigned char)101;
unsigned char var_20 = (unsigned char)21;
int var_21 = 506106589;
short var_22 = (short)8322;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)87;
signed char arr_1 [17] ;
unsigned long long int arr_3 [17] [17] [17] ;
unsigned int arr_9 [17] ;
long long int arr_13 [17] [17] [17] [17] [17] [17] [17] ;
signed char arr_2 [17] ;
int arr_14 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)91;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 18156111328194381745ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 2881254032U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 17; ++i_6) 
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? -128889405931716135LL : -7232752167644826066LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = -1591182414;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

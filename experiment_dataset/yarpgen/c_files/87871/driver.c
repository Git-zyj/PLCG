#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1863252323726024341LL;
_Bool var_4 = (_Bool)1;
signed char var_6 = (signed char)-51;
unsigned short var_8 = (unsigned short)6463;
unsigned long long int var_9 = 11220982569936045470ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)197;
unsigned char var_17 = (unsigned char)233;
unsigned char var_18 = (unsigned char)196;
unsigned int var_19 = 700276254U;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)46191;
unsigned int var_22 = 927693851U;
unsigned short var_23 = (unsigned short)39561;
int arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned short arr_7 [16] ;
long long int arr_9 [16] [16] [16] ;
short arr_10 [16] [16] [16] [16] ;
int arr_13 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 1980414976;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)227;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51772 : (unsigned short)48078;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -6352726608948233797LL : -8484821445249832050LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-15842 : (short)-15102;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -1472918717 : -1051095396;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

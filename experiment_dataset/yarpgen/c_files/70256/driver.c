#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)70;
unsigned int var_1 = 2527137020U;
short var_2 = (short)-4035;
long long int var_3 = -193822884602462302LL;
_Bool var_4 = (_Bool)1;
short var_7 = (short)8268;
unsigned long long int var_9 = 475562059479972273ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3456663537U;
int zero = 0;
signed char var_12 = (signed char)-98;
int var_13 = -155033984;
unsigned int var_14 = 1829955724U;
unsigned char var_15 = (unsigned char)231;
unsigned int var_16 = 4258632181U;
long long int var_17 = -957552071765272171LL;
unsigned int var_18 = 4164456897U;
short arr_0 [13] [13] ;
unsigned char arr_1 [13] [13] ;
unsigned int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (short)31265;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)211 : (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 728560905U : 2857829554U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

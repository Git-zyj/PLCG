#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32724;
signed char var_2 = (signed char)-12;
long long int var_3 = -5800089305235308804LL;
int var_4 = -1053067695;
unsigned short var_6 = (unsigned short)42460;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 156629060U;
unsigned int var_9 = 2186551603U;
unsigned int var_12 = 4000906652U;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3372688931U;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)140;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-19480;
unsigned int arr_0 [17] [17] ;
int arr_1 [17] [17] ;
_Bool arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? 3237877230U : 4067231658U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -1889079512;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

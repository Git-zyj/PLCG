#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2467297122U;
unsigned short var_3 = (unsigned short)33432;
unsigned short var_4 = (unsigned short)35533;
short var_8 = (short)11797;
long long int var_9 = -5151371387416651742LL;
unsigned int var_10 = 2888778430U;
signed char var_11 = (signed char)81;
short var_12 = (short)5556;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7355899369562038883LL;
int zero = 0;
unsigned char var_20 = (unsigned char)235;
signed char var_21 = (signed char)-62;
unsigned short var_22 = (unsigned short)65368;
unsigned short var_23 = (unsigned short)9162;
signed char var_24 = (signed char)-97;
short var_25 = (short)-19960;
long long int var_26 = 4372975602592928284LL;
long long int var_27 = -2662791174355050038LL;
long long int var_28 = 6991187970173666961LL;
_Bool arr_0 [10] ;
unsigned short arr_1 [10] ;
short arr_2 [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
unsigned short arr_6 [10] ;
signed char arr_7 [24] ;
short arr_9 [24] [24] ;
short arr_10 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)37916 : (unsigned short)9037;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (short)32610;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2854449050386140792ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)17319 : (unsigned short)35763;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (signed char)10;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (short)13073;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)24962;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

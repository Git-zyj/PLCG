#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20647;
unsigned int var_4 = 2776093000U;
unsigned char var_5 = (unsigned char)162;
unsigned char var_7 = (unsigned char)168;
unsigned int var_13 = 2823338449U;
unsigned char var_14 = (unsigned char)20;
long long int var_16 = -8202994893734702102LL;
int zero = 0;
signed char var_18 = (signed char)-43;
unsigned char var_19 = (unsigned char)45;
unsigned long long int var_20 = 6251222261614316354ULL;
int var_21 = 1591860117;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 12475630708472413792ULL;
long long int arr_0 [22] [22] ;
signed char arr_1 [22] ;
unsigned int arr_3 [22] [22] [22] ;
signed char arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -4253888779033750142LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1636430482U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-94;
}

void checksum() {
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

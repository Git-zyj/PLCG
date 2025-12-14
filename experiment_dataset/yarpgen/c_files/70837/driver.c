#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -257809181;
unsigned int var_8 = 2863432657U;
signed char var_10 = (signed char)-4;
unsigned int var_13 = 1106741195U;
long long int var_15 = -4052712441576567303LL;
int zero = 0;
signed char var_18 = (signed char)29;
unsigned char var_19 = (unsigned char)210;
unsigned char var_20 = (unsigned char)175;
unsigned char var_21 = (unsigned char)199;
long long int var_22 = -8156149413309742985LL;
signed char var_23 = (signed char)49;
signed char var_24 = (signed char)110;
unsigned char arr_0 [17] ;
unsigned long long int arr_1 [17] ;
unsigned int arr_2 [16] [16] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_4 [16] ;
unsigned int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 14951730882687453610ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = 2460313518U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)133;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 3535235503404988243ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = 162619595U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)94;
unsigned int var_1 = 1822100139U;
unsigned char var_2 = (unsigned char)135;
unsigned char var_4 = (unsigned char)124;
int var_5 = -740060405;
short var_6 = (short)31344;
unsigned short var_7 = (unsigned short)37148;
long long int var_9 = -2401828484548042907LL;
unsigned char var_10 = (unsigned char)110;
signed char var_11 = (signed char)11;
unsigned char var_12 = (unsigned char)99;
_Bool var_16 = (_Bool)1;
_Bool var_18 = (_Bool)1;
short var_19 = (short)29298;
int zero = 0;
unsigned char var_20 = (unsigned char)251;
unsigned long long int var_21 = 7870512622058203247ULL;
short var_22 = (short)1050;
unsigned char var_23 = (unsigned char)68;
long long int var_24 = 1371430571643394744LL;
unsigned char var_25 = (unsigned char)136;
int var_26 = 387429278;
unsigned int arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned char arr_3 [14] ;
unsigned int arr_6 [23] ;
signed char arr_7 [23] ;
unsigned char arr_9 [23] [23] ;
unsigned char arr_4 [14] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 3289468040U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)13603;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 434836845U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-34 : (signed char)82;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)149 : (unsigned char)62;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)172;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

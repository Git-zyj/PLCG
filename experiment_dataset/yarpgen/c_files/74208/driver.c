#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -460005460;
int var_3 = 1997909638;
unsigned long long int var_4 = 681698697539871761ULL;
unsigned short var_5 = (unsigned short)36374;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-40;
int var_8 = 1271228090;
int var_9 = -1926065850;
int zero = 0;
short var_10 = (short)22454;
unsigned long long int var_11 = 498705190252570378ULL;
int var_12 = -2012903965;
unsigned int var_13 = 912306478U;
int var_14 = -1420564569;
signed char var_15 = (signed char)70;
_Bool var_16 = (_Bool)0;
_Bool arr_0 [13] ;
signed char arr_1 [13] ;
unsigned short arr_6 [13] [13] [13] [13] ;
unsigned short arr_8 [13] [13] [13] ;
unsigned long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)68;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49874;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)6354 : (unsigned short)44132;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 13438993545226916654ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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

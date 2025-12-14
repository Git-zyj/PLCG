#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-28999;
unsigned short var_6 = (unsigned short)29268;
unsigned short var_12 = (unsigned short)22200;
unsigned short var_16 = (unsigned short)14688;
int zero = 0;
unsigned short var_19 = (unsigned short)6516;
long long int var_20 = 4939615019983603582LL;
unsigned char var_21 = (unsigned char)147;
unsigned short var_22 = (unsigned short)47788;
unsigned long long int var_23 = 13143333928553038346ULL;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)0;
int var_26 = 1724798262;
unsigned long long int var_27 = 1983807881317286185ULL;
short var_28 = (short)28149;
signed char var_29 = (signed char)59;
unsigned long long int var_30 = 10542300561695491118ULL;
unsigned char var_31 = (unsigned char)13;
short var_32 = (short)23041;
unsigned short var_33 = (unsigned short)2692;
unsigned short var_34 = (unsigned short)3333;
short arr_1 [12] ;
long long int arr_5 [10] [10] [10] ;
unsigned short arr_8 [10] [10] [10] [10] ;
unsigned int arr_9 [10] [10] [10] [10] ;
unsigned int arr_14 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (short)12873;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 1905007231334139953LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned short)16666;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 3245660096U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_14 [i_0] = 542349499U;
}

void checksum() {
    hash(&seed, var_19);
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

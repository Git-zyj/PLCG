#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2135271486469062365LL;
unsigned int var_3 = 1230856494U;
signed char var_5 = (signed char)-95;
unsigned long long int var_6 = 996903637798652631ULL;
unsigned int var_9 = 2461704640U;
unsigned char var_10 = (unsigned char)184;
int zero = 0;
signed char var_11 = (signed char)-98;
signed char var_12 = (signed char)-62;
long long int var_13 = 9160671331707040414LL;
unsigned long long int var_14 = 1202990554936373917ULL;
unsigned int var_15 = 3815395486U;
long long int var_16 = 7952464839106558394LL;
long long int var_17 = -1624554019189797162LL;
unsigned char var_18 = (unsigned char)171;
unsigned int var_19 = 3275842105U;
int var_20 = -1274502025;
signed char var_21 = (signed char)67;
_Bool var_22 = (_Bool)1;
signed char arr_1 [17] ;
unsigned int arr_2 [17] ;
_Bool arr_4 [17] ;
unsigned short arr_5 [17] [17] [17] ;
unsigned long long int arr_6 [17] [17] [17] [17] ;
int arr_8 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 538364731U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)7877 : (unsigned short)27967;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 17064641603379804338ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? 525497346 : 1324954707;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

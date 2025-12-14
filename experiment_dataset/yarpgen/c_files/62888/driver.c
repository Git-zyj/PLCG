#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 244616315U;
unsigned long long int var_9 = 10932026402556742583ULL;
long long int var_12 = 9010610511249453893LL;
unsigned int var_13 = 851708408U;
long long int var_14 = 8893979203411982030LL;
int zero = 0;
signed char var_15 = (signed char)8;
signed char var_16 = (signed char)105;
signed char var_17 = (signed char)47;
signed char var_18 = (signed char)-127;
signed char var_19 = (signed char)-100;
unsigned char var_20 = (unsigned char)111;
_Bool var_21 = (_Bool)0;
long long int arr_4 [21] [21] ;
signed char arr_6 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = -7968613032267836504LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (signed char)-65;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

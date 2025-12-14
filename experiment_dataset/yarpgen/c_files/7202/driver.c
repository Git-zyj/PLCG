#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)37963;
signed char var_3 = (signed char)-115;
long long int var_5 = 4268573523988549450LL;
unsigned long long int var_7 = 335194485385867104ULL;
int var_8 = -826651476;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)-45;
unsigned char var_12 = (unsigned char)13;
unsigned char var_17 = (unsigned char)227;
unsigned int var_18 = 3478118005U;
int zero = 0;
signed char var_19 = (signed char)39;
unsigned int var_20 = 3878372812U;
unsigned char var_21 = (unsigned char)245;
long long int var_22 = 3407571418853162868LL;
int var_23 = 1776567374;
unsigned int var_24 = 973607601U;
int arr_4 [23] [23] [23] ;
_Bool arr_7 [23] [23] [23] ;
unsigned int arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1494956501;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 1723397135U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

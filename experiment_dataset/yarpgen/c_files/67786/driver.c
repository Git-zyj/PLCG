#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 229998346U;
int var_4 = 1202182637;
unsigned long long int var_5 = 17076343370872184307ULL;
unsigned int var_8 = 3574369051U;
int zero = 0;
unsigned short var_11 = (unsigned short)54973;
unsigned int var_12 = 1824110889U;
unsigned long long int var_13 = 15539244615194875453ULL;
signed char var_14 = (signed char)60;
long long int var_15 = -8480793426495536904LL;
unsigned char arr_0 [13] ;
unsigned char arr_1 [13] [13] ;
unsigned long long int arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 16925834162677377939ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11375;
unsigned char var_4 = (unsigned char)137;
signed char var_5 = (signed char)(-127 - 1);
unsigned char var_7 = (unsigned char)251;
int zero = 0;
short var_11 = (short)15495;
unsigned int var_12 = 2171423120U;
signed char var_13 = (signed char)30;
unsigned int var_14 = 124140677U;
unsigned char arr_7 [12] [12] [12] ;
unsigned int arr_8 [12] ;
unsigned long long int arr_9 [12] [12] ;
short arr_10 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = 1837424725U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_9 [i_0] [i_1] = 11664882057352786029ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (short)30847;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

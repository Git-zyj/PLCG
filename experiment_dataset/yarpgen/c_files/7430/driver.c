#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22983;
_Bool var_2 = (_Bool)1;
unsigned long long int var_9 = 18366163814411470296ULL;
_Bool var_11 = (_Bool)0;
short var_12 = (short)31739;
unsigned int var_13 = 1556264271U;
int zero = 0;
unsigned char var_15 = (unsigned char)124;
_Bool var_16 = (_Bool)1;
long long int var_17 = -7527161355865940269LL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)2045;
unsigned long long int var_20 = 2990636399747841854ULL;
unsigned int var_21 = 4270517011U;
int arr_0 [10] [10] ;
short arr_1 [10] [10] ;
unsigned short arr_2 [10] ;
unsigned int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 645467507;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-28116;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned short)47256;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 557002408U;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-110;
_Bool var_4 = (_Bool)1;
long long int var_6 = -5172118330350326980LL;
unsigned short var_8 = (unsigned short)29465;
unsigned int var_9 = 2153258714U;
unsigned long long int var_11 = 5791401783329507985ULL;
int zero = 0;
unsigned int var_12 = 644403955U;
unsigned char var_13 = (unsigned char)165;
unsigned short var_14 = (unsigned short)16398;
int var_15 = 1590408143;
unsigned long long int var_16 = 11682563014562277544ULL;
unsigned int var_17 = 4058311556U;
int var_18 = -80988742;
unsigned long long int var_19 = 3465896320850524907ULL;
int arr_0 [10] ;
unsigned short arr_4 [16] [16] ;
signed char arr_5 [16] [16] ;
signed char arr_8 [17] [17] ;
unsigned char arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 61770718;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)17956;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)252 : (unsigned char)124;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 246127778U;
_Bool var_4 = (_Bool)0;
unsigned int var_11 = 3652980991U;
unsigned int var_12 = 2737712226U;
long long int var_13 = 1515976163774516106LL;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)184;
short var_19 = (short)-29558;
int zero = 0;
unsigned int var_20 = 1152965167U;
long long int var_21 = -6247155595021386217LL;
short var_22 = (short)30948;
unsigned long long int var_23 = 13245283288966466967ULL;
int var_24 = 2071079296;
unsigned short var_25 = (unsigned short)34321;
short arr_2 [13] [13] ;
unsigned int arr_4 [13] [13] ;
unsigned int arr_6 [13] [13] ;
unsigned char arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-933 : (short)1563;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 306533557U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_6 [i_0] [i_1] = 3843864722U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)245;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

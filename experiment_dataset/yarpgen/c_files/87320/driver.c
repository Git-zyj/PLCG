#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4864535102667114939ULL;
int var_1 = 713036939;
unsigned long long int var_2 = 6332208080763381753ULL;
unsigned char var_3 = (unsigned char)52;
signed char var_4 = (signed char)16;
_Bool var_9 = (_Bool)1;
long long int var_10 = 6783291024822734463LL;
unsigned int var_12 = 549133832U;
int zero = 0;
int var_13 = 670795446;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 1617489560616239843ULL;
unsigned long long int var_16 = 9274050197815122379ULL;
unsigned long long int var_17 = 11466219845339132308ULL;
unsigned int var_18 = 1079132618U;
unsigned char var_19 = (unsigned char)192;
unsigned long long int var_20 = 9736787464850201038ULL;
int var_21 = -1234058586;
signed char var_22 = (signed char)-39;
signed char var_23 = (signed char)-85;
unsigned long long int var_24 = 17664577505005459379ULL;
unsigned short var_25 = (unsigned short)50925;
unsigned char var_26 = (unsigned char)198;
unsigned short arr_1 [25] [25] ;
unsigned short arr_4 [25] [25] [25] ;
unsigned char arr_7 [25] [25] [25] ;
unsigned long long int arr_8 [25] [25] ;
unsigned long long int arr_9 [25] ;
unsigned int arr_11 [17] ;
signed char arr_12 [17] [17] ;
_Bool arr_20 [16] [16] ;
unsigned int arr_2 [25] [25] ;
unsigned long long int arr_26 [10] [10] ;
unsigned long long int arr_27 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)15949;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)49515;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = 9453507454629938768ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 17483885009908803814ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = 3408290185U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)44;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 3531052341U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_26 [i_0] [i_1] = 11510217728078831712ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_27 [i_0] = 18441760578326753405ULL;
}

void checksum() {
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

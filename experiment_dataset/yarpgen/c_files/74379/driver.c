#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4947741024898933485ULL;
unsigned char var_6 = (unsigned char)6;
unsigned int var_7 = 3024991827U;
short var_8 = (short)-13834;
unsigned long long int var_16 = 16068716438553532176ULL;
int zero = 0;
short var_20 = (short)14853;
signed char var_21 = (signed char)-7;
short var_22 = (short)27880;
short var_23 = (short)29171;
_Bool var_24 = (_Bool)1;
int var_25 = -1946472554;
short var_26 = (short)-10067;
unsigned int var_27 = 1411271513U;
long long int var_28 = 3875035353818897799LL;
short var_29 = (short)21054;
signed char arr_0 [17] [17] ;
unsigned int arr_1 [17] [17] ;
unsigned long long int arr_4 [17] [17] ;
unsigned int arr_5 [17] [17] [17] [17] ;
unsigned short arr_6 [17] ;
unsigned char arr_8 [22] ;
long long int arr_9 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-8;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 2246824861U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 3381629258087665239ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 4062804543U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)45831;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (unsigned char)251;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = 1667771635105077701LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

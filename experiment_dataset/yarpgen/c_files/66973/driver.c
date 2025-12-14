#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 748123555;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-56;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_18 = 4142586825U;
int var_19 = 1605918488;
unsigned long long int var_20 = 2776636433362488415ULL;
_Bool var_21 = (_Bool)0;
int var_22 = -1638522543;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-29;
unsigned int var_25 = 1835827464U;
unsigned int var_26 = 384652081U;
unsigned short var_27 = (unsigned short)28436;
_Bool var_28 = (_Bool)1;
_Bool arr_0 [24] ;
int arr_2 [24] ;
signed char arr_5 [24] ;
int arr_6 [24] [24] ;
signed char arr_7 [24] [24] [24] [24] ;
int arr_8 [24] [24] [24] ;
int arr_9 [24] ;
unsigned int arr_12 [24] [24] ;
int arr_21 [17] ;
unsigned int arr_15 [17] ;
unsigned short arr_16 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -2120941403 : 405309198;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = -922685943;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -956000373;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 159684039;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = 4155364194U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? 1678214425 : -805116378;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = 1963457599U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (unsigned short)15074;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

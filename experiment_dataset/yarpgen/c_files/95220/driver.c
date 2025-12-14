#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)59228;
short var_6 = (short)-25184;
short var_7 = (short)14478;
signed char var_9 = (signed char)97;
signed char var_10 = (signed char)47;
int var_15 = 1488815880;
int zero = 0;
unsigned int var_17 = 1747081250U;
unsigned long long int var_18 = 2772362163863361542ULL;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-3465;
_Bool var_21 = (_Bool)0;
int var_22 = -870916454;
signed char var_23 = (signed char)46;
int arr_2 [10] ;
short arr_4 [10] [10] ;
unsigned long long int arr_8 [10] [10] [10] [10] ;
unsigned long long int arr_9 [15] ;
short arr_10 [15] ;
unsigned char arr_12 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -760809081;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)27143;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 2136602171826496004ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 14392274507461336549ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (short)29777;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (unsigned char)199;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

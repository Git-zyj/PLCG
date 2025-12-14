#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42650;
short var_2 = (short)-838;
signed char var_4 = (signed char)-52;
short var_5 = (short)23068;
unsigned char var_6 = (unsigned char)159;
int zero = 0;
unsigned short var_11 = (unsigned short)49953;
int var_12 = -521954289;
short var_13 = (short)20062;
short var_14 = (short)-18938;
short var_15 = (short)3983;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)34;
signed char var_18 = (signed char)66;
unsigned short var_19 = (unsigned short)57542;
signed char var_20 = (signed char)27;
unsigned long long int var_21 = 11274639188053680578ULL;
signed char arr_4 [10] [10] ;
unsigned long long int arr_7 [10] [10] [10] ;
short arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 15482245945234545482ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)28416 : (short)-5020;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

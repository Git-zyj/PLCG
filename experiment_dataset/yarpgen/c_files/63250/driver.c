#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 128778902U;
_Bool var_5 = (_Bool)0;
unsigned char var_6 = (unsigned char)181;
unsigned int var_7 = 3584493964U;
long long int var_8 = -5227184598001011353LL;
int var_9 = -745950563;
short var_10 = (short)27899;
signed char var_12 = (signed char)75;
long long int var_13 = -1513582518980008974LL;
unsigned char var_14 = (unsigned char)99;
int zero = 0;
signed char var_16 = (signed char)-127;
unsigned long long int var_17 = 1638313861748508230ULL;
int var_18 = 1296441667;
int var_19 = -1927694110;
unsigned long long int var_20 = 16233578666606341559ULL;
signed char var_21 = (signed char)49;
unsigned char arr_3 [20] ;
_Bool arr_4 [20] ;
short arr_11 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (short)-5155;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

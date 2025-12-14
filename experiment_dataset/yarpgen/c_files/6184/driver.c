#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1506543699U;
long long int var_1 = 3091082503060053344LL;
short var_2 = (short)24559;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-13132;
short var_6 = (short)17821;
long long int var_7 = -8324251789735380514LL;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)18;
long long int var_11 = 2959097368211085036LL;
short var_12 = (short)693;
int zero = 0;
short var_13 = (short)9147;
int var_14 = -2015950205;
unsigned long long int var_15 = 13955917972583053801ULL;
short var_16 = (short)7543;
unsigned long long int var_17 = 4118778090902252534ULL;
long long int var_18 = -5823818280948804830LL;
unsigned char arr_0 [13] ;
unsigned long long int arr_1 [13] ;
_Bool arr_2 [13] [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
signed char arr_5 [13] [13] ;
long long int arr_6 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 13580195848354861123ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 4148515168346527484ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-109;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = -644511976735007737LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

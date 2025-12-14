#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 4142355113473290825ULL;
unsigned char var_2 = (unsigned char)156;
short var_3 = (short)2000;
unsigned long long int var_4 = 8802482919224968136ULL;
unsigned short var_7 = (unsigned short)43765;
unsigned int var_9 = 3015396554U;
int var_11 = 1483085230;
unsigned int var_12 = 332669242U;
short var_13 = (short)9726;
short var_14 = (short)18510;
unsigned long long int var_15 = 7306643405585643053ULL;
long long int var_17 = -3119049531445194356LL;
int zero = 0;
int var_18 = -1692565879;
int var_19 = 232137679;
unsigned char var_20 = (unsigned char)66;
unsigned int var_21 = 603470876U;
unsigned int var_22 = 3225993953U;
unsigned short var_23 = (unsigned short)43917;
int var_24 = -2147076394;
unsigned short arr_0 [13] ;
long long int arr_2 [13] [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
int arr_4 [13] ;
short arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)51456;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -7535408704956029665LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 14543844725183869729ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = 378117273;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-870;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

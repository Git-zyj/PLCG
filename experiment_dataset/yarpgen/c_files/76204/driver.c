#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 53841464809343092LL;
short var_8 = (short)26392;
_Bool var_12 = (_Bool)0;
_Bool var_14 = (_Bool)1;
long long int var_18 = -5283881445598131506LL;
signed char var_19 = (signed char)114;
int zero = 0;
signed char var_20 = (signed char)-18;
unsigned short var_21 = (unsigned short)14378;
unsigned short var_22 = (unsigned short)45746;
signed char var_23 = (signed char)-119;
unsigned short var_24 = (unsigned short)21141;
unsigned short var_25 = (unsigned short)5989;
short var_26 = (short)7834;
short var_27 = (short)-9698;
long long int var_28 = -862197170900309575LL;
long long int arr_0 [24] [24] ;
short arr_4 [10] ;
short arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 7731581498655145809LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-28897;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19700;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

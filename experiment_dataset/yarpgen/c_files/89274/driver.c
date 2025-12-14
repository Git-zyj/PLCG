#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 883407563;
_Bool var_2 = (_Bool)0;
short var_3 = (short)-24297;
signed char var_4 = (signed char)27;
signed char var_6 = (signed char)-75;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int var_12 = -762533395;
signed char var_14 = (signed char)65;
unsigned short var_18 = (unsigned short)63975;
int zero = 0;
int var_19 = 1301351844;
unsigned long long int var_20 = 18171282791591734442ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 5433364284583723415ULL;
unsigned long long int var_23 = 2214317300863531461ULL;
long long int var_24 = -8723638077545853566LL;
unsigned char var_25 = (unsigned char)101;
unsigned short arr_0 [13] ;
_Bool arr_1 [13] ;
unsigned short arr_4 [13] [13] ;
_Bool arr_5 [13] ;
short arr_2 [13] ;
long long int arr_3 [13] ;
unsigned long long int arr_6 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned short)50012;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)23881;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)16740;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = -394623193794295197LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 5019885110788690522ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

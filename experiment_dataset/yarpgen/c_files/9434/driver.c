#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = 7979136845649596858LL;
signed char var_9 = (signed char)-47;
int var_14 = 379837313;
int zero = 0;
int var_16 = 575679395;
int var_17 = 1204326267;
unsigned long long int var_18 = 2668653245409613356ULL;
int var_19 = -348307930;
unsigned long long int var_20 = 9998083440240154957ULL;
unsigned long long int var_21 = 6544464419704285344ULL;
unsigned int var_22 = 856027528U;
short var_23 = (short)27624;
_Bool var_24 = (_Bool)0;
unsigned long long int arr_0 [18] ;
unsigned int arr_1 [18] ;
_Bool arr_4 [22] ;
signed char arr_2 [18] ;
unsigned long long int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 2819244052905328005ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 3133344747U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 14893413656149544264ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

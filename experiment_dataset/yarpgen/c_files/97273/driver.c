#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2715527572265030011LL;
short var_1 = (short)-32180;
signed char var_2 = (signed char)-72;
unsigned int var_3 = 271926258U;
signed char var_4 = (signed char)-74;
signed char var_5 = (signed char)3;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 112495268930041821ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_12 = -8329465522511123886LL;
unsigned long long int var_13 = 2621222723334528749ULL;
unsigned int var_14 = 3846570525U;
unsigned int var_15 = 3777972877U;
long long int var_16 = -4849124709212303500LL;
long long int var_17 = 393159599040774543LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)19;
short var_20 = (short)-22594;
_Bool arr_0 [24] ;
long long int arr_1 [24] ;
unsigned int arr_3 [24] ;
long long int arr_4 [24] ;
unsigned int arr_6 [24] ;
long long int arr_7 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -6124716751637267662LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 1174758925U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = -253947512493121880LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1175415530U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 3871573511290265376LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

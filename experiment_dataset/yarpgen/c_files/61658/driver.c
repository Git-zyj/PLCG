#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)16463;
long long int var_1 = -2561610197457212667LL;
unsigned short var_3 = (unsigned short)5473;
int var_6 = 246777666;
unsigned short var_8 = (unsigned short)9910;
int var_10 = 1276235947;
long long int var_11 = -8366487050819446592LL;
unsigned long long int var_12 = 482109637568154580ULL;
unsigned short var_14 = (unsigned short)29459;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-28472;
long long int var_17 = -8980959447867971917LL;
int var_18 = 1599241391;
int zero = 0;
short var_19 = (short)22565;
unsigned short var_20 = (unsigned short)33294;
unsigned long long int var_21 = 843512971186601882ULL;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-36;
_Bool var_24 = (_Bool)1;
unsigned long long int arr_1 [21] ;
short arr_5 [25] ;
unsigned long long int arr_2 [21] ;
short arr_3 [21] ;
unsigned short arr_6 [25] ;
short arr_7 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 17235350774458347148ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (short)10242;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5656740686263650411ULL : 12078683302085733356ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-31191 : (short)28469;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (unsigned short)14871;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (short)-23907;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

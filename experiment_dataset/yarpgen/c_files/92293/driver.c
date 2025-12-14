#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1131735556837003636ULL;
unsigned long long int var_2 = 14634201941523884526ULL;
int var_4 = 1928304939;
int var_5 = -879927938;
int var_6 = 525777407;
unsigned int var_8 = 3848955556U;
unsigned long long int var_9 = 17522387065381777179ULL;
unsigned int var_11 = 2646734819U;
unsigned int var_14 = 1367312358U;
int zero = 0;
unsigned int var_16 = 2721281688U;
unsigned int var_17 = 1698823054U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = 3138311;
int var_21 = -2132748132;
_Bool var_22 = (_Bool)0;
long long int var_23 = -1637654364137191587LL;
_Bool arr_1 [12] ;
unsigned long long int arr_4 [12] ;
unsigned long long int arr_5 [12] ;
long long int arr_2 [12] ;
unsigned long long int arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 4484197976569750270ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 11575032315845747777ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -646298015947506279LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = 7344341393911132360ULL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

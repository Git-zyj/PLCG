#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1842850117;
unsigned int var_5 = 1886951955U;
unsigned long long int var_7 = 10349101804177937473ULL;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned int var_20 = 2216708071U;
unsigned long long int var_21 = 13476163552438724055ULL;
signed char var_22 = (signed char)-122;
_Bool var_23 = (_Bool)1;
signed char arr_5 [13] [13] ;
unsigned int arr_6 [13] ;
unsigned char arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)42;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 3625052659U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned char)251;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

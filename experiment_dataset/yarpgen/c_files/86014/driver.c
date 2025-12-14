#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)237;
long long int var_4 = -3285304414228569660LL;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1930018389U;
unsigned long long int var_14 = 5572298499479032409ULL;
int zero = 0;
unsigned int var_15 = 2765848314U;
unsigned long long int var_16 = 1730831980727974378ULL;
unsigned long long int var_17 = 1891538329360577105ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1611946078U;
unsigned long long int var_20 = 291004149177919030ULL;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)93;
_Bool var_24 = (_Bool)1;
signed char arr_0 [21] ;
signed char arr_2 [21] ;
signed char arr_11 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)86 : (signed char)20;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-93 : (signed char)-36;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)22 : (signed char)125;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

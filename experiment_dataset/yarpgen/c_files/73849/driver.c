#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8314170739041932496ULL;
unsigned long long int var_2 = 8285316703006854721ULL;
signed char var_3 = (signed char)42;
unsigned long long int var_4 = 13214833329856312975ULL;
signed char var_5 = (signed char)67;
unsigned long long int var_6 = 3063543796489313385ULL;
signed char var_8 = (signed char)78;
_Bool var_9 = (_Bool)1;
signed char var_10 = (signed char)73;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 13314750469271446686ULL;
unsigned long long int var_15 = 907635095464901148ULL;
int zero = 0;
signed char var_16 = (signed char)-78;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 12295933856878579959ULL;
unsigned long long int var_20 = 12415292764883988704ULL;
signed char var_21 = (signed char)-35;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 11393459878158511196ULL;
signed char var_24 = (signed char)21;
_Bool var_25 = (_Bool)0;
unsigned long long int var_26 = 14865529802622952934ULL;
_Bool arr_0 [19] ;
signed char arr_1 [19] ;
signed char arr_5 [19] ;
signed char arr_7 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)90;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

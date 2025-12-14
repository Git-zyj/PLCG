#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-65;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)-75;
signed char var_6 = (signed char)100;
unsigned long long int var_9 = 12347700593065772185ULL;
unsigned long long int var_11 = 3743209597998086149ULL;
long long int var_12 = -6089655929177850955LL;
unsigned long long int var_13 = 1716788709810924163ULL;
unsigned long long int var_16 = 5381856028463947393ULL;
int zero = 0;
long long int var_18 = -2342742869520222969LL;
signed char var_19 = (signed char)-107;
unsigned int var_20 = 172993317U;
short var_21 = (short)12961;
short var_22 = (short)-14909;
unsigned long long int var_23 = 7190723479157558728ULL;
unsigned int var_24 = 1083994239U;
long long int var_25 = -3395346933191774972LL;
signed char var_26 = (signed char)-64;
short var_27 = (short)9297;
unsigned int var_28 = 3549501572U;
signed char arr_0 [13] ;
signed char arr_1 [13] [13] ;
unsigned char arr_3 [13] [13] [13] ;
short arr_4 [13] ;
_Bool arr_5 [13] ;
int arr_7 [13] [13] [13] [13] ;
long long int arr_8 [13] [13] ;
long long int arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (signed char)-10;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)245;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (short)12167;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = -157459760;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_8 [i_0] [i_1] = 5733754885587393712LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 5779699005687694866LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

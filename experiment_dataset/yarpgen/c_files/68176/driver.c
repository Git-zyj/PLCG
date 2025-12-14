#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)22581;
int var_3 = -368038738;
long long int var_4 = -2173732848530189045LL;
unsigned int var_5 = 3632293443U;
signed char var_6 = (signed char)115;
unsigned long long int var_7 = 803290941337472131ULL;
long long int var_9 = -737868919915328588LL;
int zero = 0;
unsigned char var_11 = (unsigned char)244;
unsigned int var_12 = 249715983U;
signed char var_13 = (signed char)96;
unsigned int var_14 = 3347822125U;
unsigned long long int var_15 = 3976081326478770427ULL;
short var_16 = (short)-7191;
unsigned int arr_1 [13] ;
short arr_2 [13] ;
signed char arr_7 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 2919583324U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (short)8065;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-126;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

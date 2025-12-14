#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)25155;
signed char var_4 = (signed char)-3;
signed char var_5 = (signed char)-99;
_Bool var_6 = (_Bool)1;
signed char var_9 = (signed char)-109;
signed char var_11 = (signed char)99;
unsigned long long int var_13 = 18055071071534950872ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 248339296U;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-50;
unsigned int var_20 = 2372793123U;
signed char arr_0 [13] [13] ;
signed char arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)7 : (signed char)-83;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)82 : (signed char)-70;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1868870934134199295LL;
int var_2 = -1776392670;
_Bool var_4 = (_Bool)1;
signed char var_9 = (signed char)-29;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 983503215U;
int zero = 0;
long long int var_12 = 2602081087741868726LL;
unsigned char var_13 = (unsigned char)233;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
_Bool arr_5 [17] [17] ;
signed char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_5 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (signed char)-115 : (signed char)80;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

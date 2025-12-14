#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)52;
int var_1 = 1483682121;
unsigned char var_2 = (unsigned char)165;
unsigned int var_3 = 1705607857U;
unsigned char var_6 = (unsigned char)10;
unsigned long long int var_8 = 12391298877047814532ULL;
long long int var_9 = 106066819383627496LL;
_Bool var_10 = (_Bool)0;
int var_13 = -968482147;
unsigned long long int var_14 = 11169058869697031073ULL;
short var_18 = (short)-18997;
int zero = 0;
short var_19 = (short)-27072;
signed char var_20 = (signed char)26;
unsigned char var_21 = (unsigned char)17;
unsigned char var_22 = (unsigned char)48;
long long int var_23 = -6392741262803796613LL;
int var_24 = 609694456;
unsigned long long int arr_0 [10] ;
int arr_1 [10] ;
unsigned long long int arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 17390760424825277125ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 1747679213;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 9170870261987260899ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

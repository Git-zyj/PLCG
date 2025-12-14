#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7318099347947206095LL;
_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)20021;
signed char var_4 = (signed char)-68;
short var_6 = (short)32686;
unsigned long long int var_7 = 7963740358760120442ULL;
unsigned long long int var_11 = 17414983377717621734ULL;
unsigned long long int var_12 = 13581706312225785328ULL;
short var_15 = (short)29366;
short var_16 = (short)-28371;
unsigned long long int var_18 = 11657331759910745607ULL;
int zero = 0;
signed char var_19 = (signed char)-83;
signed char var_20 = (signed char)-10;
unsigned long long int var_21 = 11600201019621996761ULL;
signed char arr_2 [17] ;
unsigned long long int arr_5 [17] [17] [17] ;
short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 13816010417861899809ULL : 9960692161889822229ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)10598 : (short)-19839;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

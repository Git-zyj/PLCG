#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9010676986152880099LL;
int var_3 = -1230915804;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)26;
short var_9 = (short)14647;
long long int var_10 = -7552877156462392064LL;
unsigned long long int var_11 = 8225174971093644736ULL;
short var_13 = (short)30029;
_Bool var_14 = (_Bool)0;
unsigned short var_16 = (unsigned short)41001;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)10019;
_Bool var_22 = (_Bool)0;
short arr_0 [20] ;
signed char arr_2 [20] ;
short arr_4 [20] [20] ;
short arr_5 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-7689;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (short)6484;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-26082;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

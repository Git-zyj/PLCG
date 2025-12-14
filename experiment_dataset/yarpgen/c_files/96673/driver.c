#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28702;
unsigned short var_2 = (unsigned short)43695;
unsigned short var_3 = (unsigned short)9766;
signed char var_7 = (signed char)72;
unsigned short var_8 = (unsigned short)26863;
_Bool var_10 = (_Bool)0;
int var_11 = -1846200259;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 13339715878175200388ULL;
unsigned long long int var_15 = 7738614176444223042ULL;
short var_16 = (short)-9253;
_Bool arr_0 [14] [14] ;
unsigned short arr_1 [14] ;
signed char arr_5 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (unsigned short)52057;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-37;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

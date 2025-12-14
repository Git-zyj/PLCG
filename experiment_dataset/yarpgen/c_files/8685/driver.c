#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4180592378U;
signed char var_4 = (signed char)-26;
unsigned char var_5 = (unsigned char)102;
short var_10 = (short)-32350;
signed char var_14 = (signed char)-59;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 5171754340756143975LL;
unsigned int var_17 = 74799250U;
signed char var_18 = (signed char)80;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-11;
unsigned long long int var_21 = 7814193678464317487ULL;
long long int var_22 = 7034125092379971075LL;
int arr_0 [17] ;
unsigned char arr_1 [17] ;
unsigned int arr_4 [14] ;
int arr_2 [17] ;
unsigned char arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 97197103;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 819577816U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -1051780391;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (unsigned char)96;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

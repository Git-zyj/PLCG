#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10187388775283431047ULL;
unsigned short var_1 = (unsigned short)10754;
signed char var_2 = (signed char)127;
unsigned int var_3 = 3094933390U;
signed char var_4 = (signed char)55;
int var_5 = -1421411821;
unsigned char var_6 = (unsigned char)174;
signed char var_8 = (signed char)-69;
unsigned int var_9 = 2761195508U;
unsigned char var_10 = (unsigned char)18;
signed char var_11 = (signed char)64;
int zero = 0;
int var_12 = -1730705961;
unsigned short var_13 = (unsigned short)25050;
long long int var_14 = 2339424916754882014LL;
unsigned short var_15 = (unsigned short)55322;
unsigned short var_16 = (unsigned short)37567;
unsigned short arr_4 [18] ;
signed char arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51785 : (unsigned short)23571;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (signed char)39;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

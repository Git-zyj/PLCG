#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8462;
int var_14 = -635892052;
unsigned int var_16 = 3082321046U;
unsigned int var_18 = 4176681518U;
int zero = 0;
long long int var_19 = 312676960579602327LL;
unsigned short var_20 = (unsigned short)21649;
unsigned char arr_0 [17] ;
unsigned int arr_1 [17] ;
unsigned int arr_4 [15] ;
unsigned int arr_6 [15] ;
unsigned int arr_2 [17] ;
unsigned short arr_3 [17] ;
unsigned long long int arr_7 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned char)110;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 667550514U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 661605546U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 2489748955U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3557427171U : 2723494298U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned short)51171 : (unsigned short)31405;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 17030137806797742831ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

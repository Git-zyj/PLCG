#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -196694347;
signed char var_1 = (signed char)55;
signed char var_2 = (signed char)-120;
int var_3 = 645015263;
unsigned short var_4 = (unsigned short)50066;
_Bool var_5 = (_Bool)1;
short var_6 = (short)32162;
unsigned short var_9 = (unsigned short)14883;
int zero = 0;
signed char var_10 = (signed char)-107;
unsigned char var_11 = (unsigned char)120;
int var_12 = 666130315;
long long int var_13 = -5249945448244003039LL;
int arr_1 [20] ;
unsigned char arr_2 [20] [20] ;
unsigned short arr_3 [20] ;
signed char arr_4 [20] [20] ;
long long int arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = -1419470191;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)192;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (unsigned short)21879;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = 1975548958156089969LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

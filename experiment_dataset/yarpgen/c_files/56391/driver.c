#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1350518772U;
int var_4 = 1338716504;
short var_5 = (short)28;
unsigned short var_6 = (unsigned short)9569;
unsigned long long int var_8 = 3456473174171905273ULL;
int var_9 = -1680023296;
int zero = 0;
signed char var_10 = (signed char)74;
unsigned short var_11 = (unsigned short)8951;
unsigned char var_12 = (unsigned char)139;
unsigned char var_13 = (unsigned char)227;
signed char arr_3 [18] ;
signed char arr_4 [18] ;
long long int arr_7 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (signed char)-110;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = 2154869985029737220LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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

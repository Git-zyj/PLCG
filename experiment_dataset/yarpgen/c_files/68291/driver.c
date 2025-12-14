#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5585935219741031429ULL;
short var_1 = (short)20521;
short var_3 = (short)19019;
unsigned long long int var_4 = 7374317634148042436ULL;
short var_5 = (short)-6835;
unsigned int var_7 = 392142324U;
unsigned long long int var_9 = 12308513738355597027ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)76;
unsigned short var_11 = (unsigned short)16684;
unsigned int var_12 = 3273757034U;
short var_13 = (short)24909;
unsigned char var_14 = (unsigned char)46;
unsigned int var_15 = 987797549U;
unsigned int arr_0 [23] [23] ;
unsigned short arr_2 [23] [23] ;
unsigned long long int arr_8 [23] ;
unsigned short arr_9 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 498561831U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)5710;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = 4952895135797361611ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned short)59878;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

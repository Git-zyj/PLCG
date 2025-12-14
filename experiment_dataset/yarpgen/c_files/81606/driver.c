#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2086210140;
unsigned short var_9 = (unsigned short)51219;
int var_12 = -1254062870;
long long int var_14 = 6977606154520641279LL;
int zero = 0;
signed char var_17 = (signed char)-55;
unsigned long long int var_18 = 1116686837955987434ULL;
long long int arr_0 [13] ;
int arr_1 [13] ;
short arr_3 [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 8576149991092470138LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 1795095892;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (short)-26459;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)40815;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

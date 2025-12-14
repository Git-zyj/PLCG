#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2393;
short var_1 = (short)-3209;
_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-93;
short var_6 = (short)-32209;
long long int var_7 = 3404410485586456123LL;
unsigned char var_12 = (unsigned char)104;
int zero = 0;
unsigned int var_17 = 3385059011U;
unsigned short var_18 = (unsigned short)58811;
unsigned int var_19 = 3991711948U;
unsigned int var_20 = 2523833823U;
int arr_0 [25] [25] ;
unsigned short arr_1 [25] [25] ;
signed char arr_2 [25] ;
short arr_4 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = 182042992;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)26074;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)1117;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

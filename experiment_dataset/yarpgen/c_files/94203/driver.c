#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6368384494847771660LL;
long long int var_4 = 6443304645484512872LL;
signed char var_5 = (signed char)101;
unsigned long long int var_7 = 15310617557830801260ULL;
short var_8 = (short)-31322;
int var_9 = 831951604;
unsigned char var_11 = (unsigned char)183;
int zero = 0;
long long int var_13 = 6247950749045515565LL;
unsigned short var_14 = (unsigned short)57445;
unsigned short var_15 = (unsigned short)29936;
unsigned short var_16 = (unsigned short)1848;
unsigned char arr_0 [15] ;
unsigned int arr_1 [15] [15] ;
short arr_2 [15] ;
_Bool arr_3 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)186 : (unsigned char)93;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? 2363381796U : 672796569U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (short)10233;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

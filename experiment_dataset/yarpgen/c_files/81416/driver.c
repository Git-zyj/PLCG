#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12075;
short var_1 = (short)-28482;
short var_2 = (short)1297;
long long int var_3 = -7202785071716704485LL;
unsigned short var_4 = (unsigned short)17073;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3004261879U;
short var_7 = (short)-15970;
signed char var_8 = (signed char)-103;
unsigned int var_9 = 929881367U;
signed char var_10 = (signed char)54;
long long int var_11 = -3820291206039518694LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = 9147555382527201411LL;
int zero = 0;
short var_14 = (short)6046;
signed char var_15 = (signed char)-50;
int arr_2 [15] ;
unsigned int arr_3 [15] [15] ;
signed char arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -1865755647;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = 3304876037U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (signed char)98;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

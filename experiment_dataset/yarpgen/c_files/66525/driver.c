#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -444519877;
unsigned int var_4 = 3355396842U;
short var_5 = (short)23801;
unsigned char var_6 = (unsigned char)70;
short var_7 = (short)26179;
unsigned long long int var_12 = 6597354374680792803ULL;
unsigned short var_13 = (unsigned short)39782;
signed char var_14 = (signed char)-16;
int zero = 0;
short var_15 = (short)31569;
int var_16 = 1969778182;
long long int var_17 = -4223315248973036342LL;
signed char var_18 = (signed char)106;
unsigned char var_19 = (unsigned char)178;
short var_20 = (short)10869;
long long int arr_0 [25] [25] ;
unsigned long long int arr_4 [25] ;
unsigned char arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = -8872197528803568025LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 6921065650442537709ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (unsigned char)80;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

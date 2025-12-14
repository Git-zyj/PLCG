#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4088524499U;
unsigned char var_4 = (unsigned char)171;
_Bool var_5 = (_Bool)0;
unsigned short var_7 = (unsigned short)64234;
unsigned int var_8 = 956845390U;
unsigned short var_11 = (unsigned short)4148;
unsigned long long int var_12 = 10458116619566787745ULL;
int zero = 0;
long long int var_14 = 2306195124443599978LL;
int var_15 = -1736464735;
unsigned short var_16 = (unsigned short)52987;
unsigned long long int var_17 = 6763892107689323441ULL;
long long int var_18 = 1790316664161906350LL;
long long int var_19 = 4775955288860386895LL;
int var_20 = -397248719;
signed char arr_0 [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_2 [21] ;
_Bool arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)-97;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 17304425097854054334ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
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

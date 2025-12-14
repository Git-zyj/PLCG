#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)166;
unsigned char var_2 = (unsigned char)105;
signed char var_4 = (signed char)16;
long long int var_5 = 3757165609669182151LL;
long long int var_6 = 7364793583730827599LL;
unsigned char var_7 = (unsigned char)87;
int var_8 = -952909919;
int var_9 = 341688633;
int zero = 0;
signed char var_10 = (signed char)99;
short var_11 = (short)-86;
int var_12 = 1036929619;
short var_13 = (short)28978;
_Bool var_14 = (_Bool)1;
int var_15 = 1491111143;
long long int var_16 = 8594725666771909715LL;
long long int arr_0 [16] [16] ;
signed char arr_1 [16] ;
short arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = -1194369329820826769LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-31;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (short)4556;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

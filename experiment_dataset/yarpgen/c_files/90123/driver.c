#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1597754415338455310LL;
unsigned long long int var_6 = 12676888733999456509ULL;
long long int var_8 = 4307557250895833826LL;
unsigned short var_15 = (unsigned short)48656;
int zero = 0;
signed char var_16 = (signed char)-68;
short var_17 = (short)-27828;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6363441234385685558LL;
long long int var_20 = 640923514253859716LL;
unsigned long long int var_21 = 9404252153585426087ULL;
unsigned long long int var_22 = 623337075969305602ULL;
unsigned int var_23 = 2979030667U;
unsigned char arr_1 [16] ;
short arr_9 [16] [16] [16] ;
signed char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned char)195 : (unsigned char)6;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (short)27091;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)90 : (signed char)-78;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

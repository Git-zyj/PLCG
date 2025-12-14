#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9322;
unsigned long long int var_6 = 10948348985723507635ULL;
unsigned char var_7 = (unsigned char)166;
unsigned long long int var_8 = 1335697482718626396ULL;
unsigned long long int var_9 = 10942693145631187704ULL;
int zero = 0;
short var_10 = (short)-13422;
short var_11 = (short)-18567;
int var_12 = -1706539744;
short var_13 = (short)-25443;
signed char var_14 = (signed char)52;
unsigned char var_15 = (unsigned char)31;
unsigned short var_16 = (unsigned short)51462;
signed char arr_0 [23] ;
int arr_1 [23] [23] ;
unsigned char arr_3 [23] ;
short arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = -2098905320;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)17134 : (short)24556;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

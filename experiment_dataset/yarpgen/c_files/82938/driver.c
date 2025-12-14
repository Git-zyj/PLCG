#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)1;
signed char var_2 = (signed char)-10;
unsigned int var_3 = 468237360U;
long long int var_4 = 3448967447421584688LL;
unsigned long long int var_5 = 10750842437567848783ULL;
signed char var_7 = (signed char)-50;
int zero = 0;
unsigned long long int var_13 = 11163626221672101431ULL;
short var_14 = (short)-11583;
signed char var_15 = (signed char)125;
unsigned short var_16 = (unsigned short)21630;
int var_17 = 329581097;
int var_18 = -2143877445;
short arr_2 [20] ;
unsigned long long int arr_6 [10] ;
signed char arr_5 [16] ;
signed char arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (short)31624;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 11383398672542065046ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)-40 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = (signed char)118;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

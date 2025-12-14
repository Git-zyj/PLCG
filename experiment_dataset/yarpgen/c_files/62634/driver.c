#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10280635667979756730ULL;
unsigned char var_2 = (unsigned char)29;
long long int var_4 = 5220975669841072960LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
signed char var_11 = (signed char)122;
unsigned char var_12 = (unsigned char)35;
int var_13 = -363118410;
unsigned short var_14 = (unsigned short)52687;
signed char var_15 = (signed char)47;
signed char var_16 = (signed char)97;
unsigned char var_17 = (unsigned char)220;
unsigned char arr_0 [25] [25] ;
long long int arr_1 [25] ;
unsigned char arr_2 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)168;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 8979176468126934296LL : -6975975862560468517LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (unsigned char)148;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

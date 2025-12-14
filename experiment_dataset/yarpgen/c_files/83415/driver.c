#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3115611270U;
unsigned int var_2 = 2343523241U;
long long int var_3 = 4826445535664817875LL;
int var_4 = -85122287;
short var_10 = (short)-19606;
int zero = 0;
short var_15 = (short)-31640;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)62443;
unsigned char var_19 = (unsigned char)109;
unsigned char var_20 = (unsigned char)243;
unsigned char var_21 = (unsigned char)58;
unsigned short arr_0 [15] [15] ;
long long int arr_1 [15] ;
long long int arr_2 [15] [15] ;
long long int arr_4 [15] ;
unsigned long long int arr_5 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)3906;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -895416444280904596LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = -3135913891719550781LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 7526114791714459553LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 9765550371687889849ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

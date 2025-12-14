#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7219789953020458279LL;
short var_2 = (short)11814;
signed char var_3 = (signed char)83;
unsigned long long int var_6 = 12532001222952293275ULL;
signed char var_7 = (signed char)-73;
unsigned char var_8 = (unsigned char)152;
short var_9 = (short)-32018;
int var_11 = -503157098;
long long int var_16 = -3651507486218052570LL;
int zero = 0;
int var_17 = -139864817;
int var_18 = -1456690079;
int var_19 = 1025155874;
long long int arr_0 [24] [24] ;
long long int arr_1 [24] ;
unsigned char arr_2 [24] ;
int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_0 [i_0] [i_1] = 1613876857353272612LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 351141422994317096LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 554395969;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

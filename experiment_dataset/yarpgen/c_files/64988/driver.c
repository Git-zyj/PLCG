#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3461;
signed char var_4 = (signed char)124;
unsigned int var_7 = 2188266325U;
long long int var_8 = 1034646623441082339LL;
unsigned int var_11 = 3987153489U;
int zero = 0;
unsigned long long int var_16 = 4378299210317674657ULL;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3616669882849582579LL;
signed char var_19 = (signed char)-46;
unsigned long long int var_20 = 5014975067248005636ULL;
signed char arr_1 [24] ;
long long int arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (signed char)-100;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 4273279697735320498LL;
}

void checksum() {
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

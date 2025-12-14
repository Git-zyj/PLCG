#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1939801542;
unsigned long long int var_3 = 8024469203102584008ULL;
unsigned long long int var_5 = 9550080759839289782ULL;
unsigned long long int var_7 = 5341227738308050645ULL;
unsigned short var_8 = (unsigned short)59734;
long long int var_9 = 3949230520094057660LL;
int zero = 0;
unsigned char var_10 = (unsigned char)118;
unsigned long long int var_11 = 11324347608754861698ULL;
int var_12 = -829965718;
unsigned short arr_0 [11] ;
signed char arr_1 [11] [11] ;
unsigned short arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (unsigned short)33383;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)35323;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

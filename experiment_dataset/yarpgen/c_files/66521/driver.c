#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)77;
unsigned char var_4 = (unsigned char)79;
unsigned long long int var_6 = 4127574276980477080ULL;
unsigned long long int var_7 = 625819243261706947ULL;
unsigned long long int var_8 = 15077334257202465343ULL;
unsigned short var_12 = (unsigned short)56803;
signed char var_14 = (signed char)-19;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)116;
signed char var_21 = (signed char)-126;
int arr_0 [18] ;
signed char arr_2 [18] ;
unsigned int arr_3 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -35824689;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = 996220743U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

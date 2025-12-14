#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 4113590605U;
unsigned char var_6 = (unsigned char)235;
unsigned int var_7 = 260250547U;
unsigned short var_12 = (unsigned short)24631;
unsigned char var_14 = (unsigned char)43;
unsigned char var_17 = (unsigned char)12;
int zero = 0;
long long int var_19 = 2035985151546424205LL;
short var_20 = (short)-2032;
signed char var_21 = (signed char)39;
unsigned char var_22 = (unsigned char)178;
short arr_0 [24] ;
short arr_2 [24] [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (short)28658;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)25455;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 6583005294121842416LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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

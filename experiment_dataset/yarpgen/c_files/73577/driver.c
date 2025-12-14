#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)118;
unsigned char var_2 = (unsigned char)235;
int var_4 = -936355317;
signed char var_11 = (signed char)19;
unsigned char var_12 = (unsigned char)163;
short var_13 = (short)-55;
int zero = 0;
unsigned int var_15 = 1988356268U;
short var_16 = (short)32722;
unsigned char var_17 = (unsigned char)249;
unsigned long long int arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = 3705919498019765279ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

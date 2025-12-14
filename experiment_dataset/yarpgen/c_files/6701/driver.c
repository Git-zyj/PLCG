#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)88;
unsigned long long int var_2 = 6144781172103131914ULL;
signed char var_5 = (signed char)-15;
short var_7 = (short)12248;
short var_8 = (short)13338;
unsigned long long int var_11 = 9301782756154447412ULL;
int zero = 0;
short var_12 = (short)4889;
unsigned long long int var_13 = 17017519973607641943ULL;
short var_14 = (short)9594;
signed char var_15 = (signed char)-77;
signed char arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)114 : (signed char)5;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1097653380U;
unsigned char var_5 = (unsigned char)164;
unsigned char var_7 = (unsigned char)90;
long long int var_8 = 2796881351639437266LL;
signed char var_13 = (signed char)-93;
unsigned char var_17 = (unsigned char)239;
int zero = 0;
long long int var_20 = -3315640998137135978LL;
unsigned int var_21 = 499353016U;
int arr_0 [13] [13] ;
signed char arr_1 [13] ;
unsigned short arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = 832423217;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)40;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (unsigned short)56997;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-90;
unsigned long long int var_1 = 9189468500819371187ULL;
signed char var_2 = (signed char)-23;
unsigned long long int var_3 = 14839612028846947260ULL;
signed char var_5 = (signed char)6;
int var_7 = -1324925603;
unsigned short var_8 = (unsigned short)65422;
unsigned long long int var_9 = 17414440965687670555ULL;
unsigned long long int var_10 = 997283568810034443ULL;
int var_12 = -1354956013;
signed char var_13 = (signed char)-69;
unsigned short var_14 = (unsigned short)42588;
int zero = 0;
unsigned short var_15 = (unsigned short)16258;
unsigned long long int var_16 = 3001992776102837950ULL;
long long int var_17 = -683441486799024561LL;
unsigned char var_18 = (unsigned char)84;
unsigned char arr_5 [11] [11] [11] ;
unsigned char arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (unsigned char)102;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

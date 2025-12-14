#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3404;
unsigned int var_1 = 3704242829U;
signed char var_2 = (signed char)-127;
unsigned int var_4 = 2602552429U;
unsigned short var_7 = (unsigned short)13982;
unsigned int var_10 = 2720552333U;
signed char var_13 = (signed char)-117;
int var_15 = 1309561796;
int zero = 0;
signed char var_16 = (signed char)89;
signed char var_17 = (signed char)-106;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 3088511448U;
signed char var_20 = (signed char)-18;
signed char arr_0 [21] [21] ;
unsigned long long int arr_1 [21] [21] ;
signed char arr_5 [21] ;
unsigned long long int arr_6 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)80;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = 14282919471285861880ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1146464353337891917ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

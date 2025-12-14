#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)15;
unsigned char var_1 = (unsigned char)234;
signed char var_3 = (signed char)118;
signed char var_5 = (signed char)68;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 7924299114317391952ULL;
int var_9 = 651854550;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3918377829U;
int zero = 0;
unsigned int var_13 = 728831179U;
long long int var_14 = -5462497489923661316LL;
unsigned short var_15 = (unsigned short)12456;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)42;
unsigned long long int arr_0 [17] ;
unsigned char arr_2 [17] ;
unsigned long long int arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 14240143590057216538ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = 9731636608123337593ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

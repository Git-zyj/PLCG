#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15553;
unsigned int var_1 = 2447357873U;
unsigned int var_3 = 1904870815U;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)29038;
short var_6 = (short)-31850;
int var_8 = -451454843;
unsigned long long int var_9 = 12429697286728950099ULL;
int var_10 = -730301793;
int zero = 0;
unsigned short var_11 = (unsigned short)26104;
unsigned char var_12 = (unsigned char)190;
int var_13 = -836170163;
signed char var_14 = (signed char)-127;
unsigned long long int var_15 = 16520541548183378549ULL;
signed char arr_8 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-65;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

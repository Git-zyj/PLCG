#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7435719564508257979ULL;
unsigned short var_1 = (unsigned short)1478;
unsigned char var_3 = (unsigned char)133;
unsigned char var_4 = (unsigned char)193;
signed char var_5 = (signed char)-114;
unsigned char var_7 = (unsigned char)41;
signed char var_9 = (signed char)26;
unsigned short var_12 = (unsigned short)55961;
int var_13 = -1041481236;
unsigned char var_15 = (unsigned char)151;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = 1456866124;
unsigned short var_18 = (unsigned short)40905;
_Bool var_19 = (_Bool)1;
short arr_4 [14] [14] [14] ;
_Bool arr_5 [14] [14] [14] ;
unsigned int arr_7 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)29399;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2858901048U : 2309257992U;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

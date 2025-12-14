#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)21412;
unsigned int var_1 = 2946405046U;
unsigned char var_2 = (unsigned char)157;
unsigned char var_5 = (unsigned char)138;
unsigned long long int var_7 = 2038378986460786826ULL;
unsigned long long int var_8 = 6064731770098886513ULL;
int zero = 0;
signed char var_10 = (signed char)-34;
unsigned int var_11 = 939037880U;
unsigned long long int var_12 = 3493255503901258202ULL;
signed char var_13 = (signed char)-96;
unsigned short var_14 = (unsigned short)62934;
signed char arr_4 [14] ;
unsigned int arr_6 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1403300679U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

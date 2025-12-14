#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)86;
unsigned char var_4 = (unsigned char)46;
short var_5 = (short)-240;
_Bool var_7 = (_Bool)1;
int var_8 = 688041476;
unsigned long long int var_9 = 1801770948842358846ULL;
int zero = 0;
signed char var_10 = (signed char)-107;
short var_11 = (short)-5792;
signed char var_12 = (signed char)-5;
short var_13 = (short)21285;
long long int var_14 = 809093157557517810LL;
long long int var_15 = -8907506972871151217LL;
long long int var_16 = 2092762825326994042LL;
unsigned char arr_0 [14] ;
signed char arr_1 [14] [14] ;
signed char arr_2 [25] [25] ;
unsigned char arr_3 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)21;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)122;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

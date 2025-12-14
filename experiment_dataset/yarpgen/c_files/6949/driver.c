#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18776;
unsigned char var_1 = (unsigned char)132;
long long int var_4 = 8933877089750273217LL;
signed char var_7 = (signed char)21;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)50522;
unsigned long long int var_13 = 68895611146676937ULL;
signed char var_15 = (signed char)-43;
int zero = 0;
signed char var_16 = (signed char)-96;
unsigned long long int var_17 = 10885727187989085672ULL;
unsigned char var_18 = (unsigned char)65;
long long int var_19 = -677775122309299978LL;
signed char var_20 = (signed char)64;
unsigned char arr_0 [19] ;
_Bool arr_4 [19] [19] ;
short arr_6 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)-11053;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

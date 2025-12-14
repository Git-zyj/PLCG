#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25795;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 455739702U;
signed char var_4 = (signed char)-54;
unsigned char var_9 = (unsigned char)11;
long long int var_12 = 6661292343345857015LL;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
unsigned long long int var_14 = 14947312356007698434ULL;
unsigned short var_15 = (unsigned short)45963;
unsigned char var_16 = (unsigned char)184;
signed char var_17 = (signed char)-27;
unsigned int var_18 = 4166563325U;
signed char arr_0 [18] ;
signed char arr_1 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-62;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)126;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

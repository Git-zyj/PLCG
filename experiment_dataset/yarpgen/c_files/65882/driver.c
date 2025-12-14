#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1180663239U;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 12051406278752818992ULL;
unsigned char var_11 = (unsigned char)104;
int zero = 0;
long long int var_13 = 8729185076730997451LL;
unsigned char var_14 = (unsigned char)78;
unsigned char var_15 = (unsigned char)74;
unsigned char var_16 = (unsigned char)31;
unsigned short var_17 = (unsigned short)11425;
unsigned int var_18 = 3359295881U;
long long int arr_0 [12] ;
signed char arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 9184541806552127548LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)-82;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2020690588U;
long long int var_1 = 616972718044129464LL;
unsigned char var_3 = (unsigned char)221;
int var_5 = 135434232;
unsigned int var_7 = 778018393U;
int var_8 = 465257225;
int zero = 0;
unsigned short var_10 = (unsigned short)55001;
unsigned int var_11 = 7766279U;
signed char var_12 = (signed char)-53;
unsigned int var_13 = 2380460523U;
unsigned char var_14 = (unsigned char)254;
unsigned char arr_2 [21] [21] ;
long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)9;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5828283280804964479LL : 2248291899891906283LL;
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

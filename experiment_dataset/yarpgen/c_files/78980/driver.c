#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 545896049U;
unsigned long long int var_2 = 448484633182097754ULL;
long long int var_6 = 8111925793579846884LL;
unsigned char var_7 = (unsigned char)54;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)221;
unsigned char var_10 = (unsigned char)32;
int zero = 0;
short var_11 = (short)-30044;
unsigned long long int var_12 = 8779544356819693731ULL;
int arr_0 [21] [21] ;
int arr_5 [21] [21] ;
int arr_7 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = -2146667032;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = 855248610;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = 1531058080;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

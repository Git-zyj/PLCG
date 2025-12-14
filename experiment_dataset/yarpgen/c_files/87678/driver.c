#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2443020988450012770LL;
unsigned int var_2 = 373136385U;
long long int var_3 = 5549720539718962448LL;
unsigned long long int var_4 = 5886715638251672262ULL;
_Bool var_5 = (_Bool)1;
unsigned char var_7 = (unsigned char)225;
unsigned char var_8 = (unsigned char)19;
short var_10 = (short)22;
int zero = 0;
long long int var_15 = 1914636205638105307LL;
short var_16 = (short)3650;
long long int var_17 = -6661004695408099245LL;
_Bool var_18 = (_Bool)1;
unsigned char arr_0 [13] ;
unsigned int arr_3 [13] [13] ;
unsigned long long int arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)19;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 1092543996U : 926790480U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14450217861814866977ULL : 15435272059452963148ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

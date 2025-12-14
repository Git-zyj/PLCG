#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 3276271959U;
unsigned short var_7 = (unsigned short)33950;
unsigned char var_13 = (unsigned char)184;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 415280567;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)37;
unsigned char var_20 = (unsigned char)40;
signed char arr_1 [17] ;
unsigned int arr_5 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3117107931U;
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

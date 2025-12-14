#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1331683204;
unsigned short var_2 = (unsigned short)31235;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)178;
short var_6 = (short)31869;
long long int var_8 = 7547411870411947039LL;
unsigned char var_10 = (unsigned char)237;
unsigned char var_14 = (unsigned char)124;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 1280782878762251531ULL;
unsigned short var_18 = (unsigned short)49461;
unsigned short var_19 = (unsigned short)3389;
_Bool var_20 = (_Bool)0;
short var_21 = (short)10385;
unsigned char var_22 = (unsigned char)243;
signed char arr_0 [17] [17] ;
unsigned short arr_1 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-39 : (signed char)-40;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned short)41578;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

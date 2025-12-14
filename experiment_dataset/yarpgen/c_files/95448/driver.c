#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5906221500502272287ULL;
signed char var_3 = (signed char)-76;
unsigned short var_4 = (unsigned short)37970;
int zero = 0;
signed char var_15 = (signed char)-31;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-35;
int var_18 = 648047203;
long long int var_19 = -8067763258376833599LL;
signed char var_20 = (signed char)32;
signed char arr_0 [16] ;
signed char arr_1 [16] ;
unsigned char arr_2 [16] ;
signed char arr_3 [16] ;
short arr_4 [10] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-74 : (signed char)97;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)31 : (signed char)-18;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (short)-9679;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 9130587013184185236ULL;
}

void checksum() {
    hash(&seed, var_15);
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

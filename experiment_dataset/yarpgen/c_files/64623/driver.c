#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7286059883882097473ULL;
unsigned char var_9 = (unsigned char)216;
unsigned long long int var_14 = 7914434145124650983ULL;
unsigned long long int var_15 = 12298318654914614580ULL;
signed char var_16 = (signed char)87;
int zero = 0;
signed char var_20 = (signed char)-59;
int var_21 = -1203212562;
signed char var_22 = (signed char)(-127 - 1);
int var_23 = 2043129498;
short var_24 = (short)648;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-47;
signed char var_27 = (signed char)-84;
unsigned long long int arr_0 [17] ;
unsigned char arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1068544355377861386ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)65;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)205;
signed char var_8 = (signed char)97;
short var_12 = (short)-2645;
unsigned char var_13 = (unsigned char)126;
unsigned short var_18 = (unsigned short)38291;
unsigned short var_19 = (unsigned short)27454;
int zero = 0;
long long int var_20 = 5478785082346715687LL;
unsigned long long int var_21 = 7131894694147168ULL;
_Bool var_22 = (_Bool)1;
unsigned char var_23 = (unsigned char)61;
unsigned int var_24 = 3566746880U;
unsigned int var_25 = 2174038578U;
unsigned int arr_0 [17] ;
signed char arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 1488794659U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-96;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

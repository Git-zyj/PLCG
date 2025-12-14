#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3980964668266452015LL;
unsigned short var_4 = (unsigned short)64465;
short var_8 = (short)-8373;
long long int var_9 = 2022008152359055791LL;
unsigned short var_10 = (unsigned short)28216;
int zero = 0;
unsigned int var_12 = 432297759U;
long long int var_13 = -1111699558324100186LL;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)48144;
long long int var_16 = -7861579127573391266LL;
unsigned short arr_0 [14] ;
signed char arr_1 [14] ;
signed char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)54662 : (unsigned short)52239;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)50;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)117;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1704044506U;
long long int var_2 = -2851737709486541943LL;
unsigned char var_13 = (unsigned char)182;
short var_14 = (short)27331;
short var_18 = (short)-24346;
int zero = 0;
unsigned short var_19 = (unsigned short)55554;
short var_20 = (short)5178;
unsigned long long int var_21 = 5045948679361494181ULL;
int var_22 = 1253088120;
unsigned short var_23 = (unsigned short)41711;
signed char arr_0 [18] ;
unsigned char arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)3 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (unsigned char)26;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2900874760109907984LL;
unsigned long long int var_2 = 17338472407464864303ULL;
signed char var_6 = (signed char)2;
short var_12 = (short)6049;
int zero = 0;
unsigned short var_20 = (unsigned short)56178;
unsigned int var_21 = 2222105407U;
signed char var_22 = (signed char)43;
int var_23 = -953056745;
int var_24 = 973879039;
unsigned char arr_1 [13] ;
signed char arr_2 [13] ;
unsigned char arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned char)60;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

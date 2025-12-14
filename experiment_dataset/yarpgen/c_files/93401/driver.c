#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 795155943U;
unsigned long long int var_3 = 14355714491687232579ULL;
long long int var_5 = -9098919450756887816LL;
unsigned char var_6 = (unsigned char)145;
unsigned char var_7 = (unsigned char)136;
int zero = 0;
unsigned char var_11 = (unsigned char)20;
unsigned long long int var_12 = 13116791925891080286ULL;
unsigned short var_13 = (unsigned short)31896;
long long int var_14 = -8663907687043997959LL;
short var_15 = (short)5355;
unsigned char arr_1 [18] ;
unsigned long long int arr_2 [18] ;
short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 7631294399861817069ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (short)-23633;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 294908636;
signed char var_3 = (signed char)53;
signed char var_6 = (signed char)-46;
unsigned short var_7 = (unsigned short)25644;
unsigned short var_8 = (unsigned short)3083;
_Bool var_10 = (_Bool)1;
signed char var_15 = (signed char)-78;
int var_17 = 1006204892;
int zero = 0;
unsigned long long int var_19 = 3479325112247831631ULL;
unsigned short var_20 = (unsigned short)24740;
unsigned short var_21 = (unsigned short)64548;
int var_22 = -831167865;
_Bool var_23 = (_Bool)0;
_Bool arr_1 [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 4926106710886296469ULL;
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -86418477456403894LL;
unsigned short var_12 = (unsigned short)33720;
unsigned char var_13 = (unsigned char)105;
signed char var_16 = (signed char)71;
unsigned int var_17 = 3065668571U;
unsigned long long int var_19 = 3075508939403383354ULL;
int zero = 0;
int var_20 = -1244597492;
unsigned short var_21 = (unsigned short)10483;
unsigned long long int var_22 = 16698385514141190184ULL;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)22278;
int var_25 = 2044688609;
unsigned short arr_0 [20] [20] ;
_Bool arr_1 [20] ;
signed char arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)2234 : (unsigned short)8624;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (signed char)-94;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

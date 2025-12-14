#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-99;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)59633;
signed char var_9 = (signed char)26;
int zero = 0;
long long int var_10 = -682308285563339543LL;
signed char var_11 = (signed char)99;
unsigned short var_12 = (unsigned short)12266;
long long int var_13 = 6976865427394950847LL;
signed char arr_0 [15] [15] ;
unsigned short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)37 : (signed char)-45;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned short)5279;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

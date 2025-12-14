#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6191289491460457815ULL;
unsigned long long int var_5 = 3890296545957312257ULL;
signed char var_7 = (signed char)-94;
unsigned char var_9 = (unsigned char)46;
int zero = 0;
unsigned long long int var_10 = 3424444551877679845ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3648361770458829336ULL;
int arr_2 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -1563404920;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

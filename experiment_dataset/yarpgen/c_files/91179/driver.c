#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-27291;
short var_4 = (short)-15797;
unsigned short var_6 = (unsigned short)26216;
int var_9 = 1049443843;
long long int var_12 = -1790248082122622500LL;
unsigned long long int var_13 = 4863397045149215790ULL;
int var_14 = 668484506;
unsigned short var_18 = (unsigned short)5369;
int zero = 0;
short var_19 = (short)-29684;
long long int var_20 = -6868273520572427144LL;
unsigned short var_21 = (unsigned short)6601;
unsigned int var_22 = 1146958087U;
short var_23 = (short)8676;
_Bool arr_2 [18] ;
unsigned short arr_5 [18] [18] ;
_Bool arr_4 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)7019;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

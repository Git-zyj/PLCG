#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 823122826;
_Bool var_1 = (_Bool)1;
long long int var_2 = 4712017248931165858LL;
unsigned long long int var_3 = 6430790836750749456ULL;
long long int var_4 = -2044034671777615660LL;
int var_7 = 415456018;
int var_10 = -1812554022;
int zero = 0;
int var_13 = 1017022814;
unsigned char var_14 = (unsigned char)195;
signed char var_15 = (signed char)40;
unsigned long long int var_16 = 13147698087958307308ULL;
unsigned short arr_2 [25] ;
unsigned int arr_6 [25] ;
signed char arr_8 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)5359;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 2391695164U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)87;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

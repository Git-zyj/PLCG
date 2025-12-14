#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8213;
unsigned char var_2 = (unsigned char)87;
unsigned int var_3 = 1993295811U;
signed char var_4 = (signed char)82;
short var_5 = (short)9858;
unsigned short var_7 = (unsigned short)53545;
unsigned short var_8 = (unsigned short)30794;
unsigned int var_9 = 493016763U;
int zero = 0;
signed char var_12 = (signed char)-44;
signed char var_13 = (signed char)-98;
unsigned short var_14 = (unsigned short)26570;
int var_15 = 1380388618;
short var_16 = (short)-25136;
unsigned char arr_0 [18] ;
_Bool arr_4 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned char)107;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
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

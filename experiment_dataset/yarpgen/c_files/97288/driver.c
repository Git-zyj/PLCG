#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-106;
unsigned short var_7 = (unsigned short)60453;
unsigned char var_11 = (unsigned char)220;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -1568513206;
unsigned short var_19 = (unsigned short)24656;
unsigned int var_20 = 4172171421U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 7899001855532837607ULL;
signed char var_24 = (signed char)94;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)122;
unsigned short var_27 = (unsigned short)46643;
signed char var_28 = (signed char)-13;
_Bool arr_0 [10] [10] ;
_Bool arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

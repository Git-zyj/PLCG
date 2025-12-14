#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -710789238;
short var_9 = (short)-10265;
int var_10 = 1731397818;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)26494;
short var_17 = (short)-4057;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)52152;
unsigned char var_20 = (unsigned char)110;
unsigned short arr_0 [16] ;
_Bool arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)42672;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -281875315;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)118;
signed char var_19 = (signed char)-59;
unsigned char var_20 = (unsigned char)121;
short arr_2 [17] ;
unsigned short arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (short)10677;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (unsigned short)16809;
}

void checksum() {
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

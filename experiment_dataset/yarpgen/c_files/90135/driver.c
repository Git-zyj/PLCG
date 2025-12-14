#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)122;
unsigned short var_5 = (unsigned short)47124;
unsigned short var_8 = (unsigned short)60692;
unsigned short var_11 = (unsigned short)12700;
int zero = 0;
short var_13 = (short)-16771;
short var_14 = (short)12617;
unsigned short var_15 = (unsigned short)41198;
unsigned char var_16 = (unsigned char)9;
long long int var_17 = -2477597389925804120LL;
_Bool var_18 = (_Bool)1;
signed char arr_0 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)28 : (signed char)-10;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

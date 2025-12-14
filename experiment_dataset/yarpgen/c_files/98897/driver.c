#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)43041;
long long int var_10 = 3491379396821575464LL;
int zero = 0;
unsigned short var_11 = (unsigned short)24940;
unsigned int var_12 = 164437453U;
short var_13 = (short)-8066;
unsigned long long int var_14 = 7339605011209908416ULL;
unsigned short arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)59411 : (unsigned short)25550;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

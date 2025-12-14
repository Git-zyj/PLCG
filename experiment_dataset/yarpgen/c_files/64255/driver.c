#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)179;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13570207183022398691ULL;
int var_5 = -258782884;
unsigned short var_7 = (unsigned short)58390;
short var_12 = (short)-18582;
unsigned int var_13 = 3774166564U;
int zero = 0;
unsigned long long int var_14 = 11064901669222010253ULL;
unsigned short var_15 = (unsigned short)19625;
signed char var_16 = (signed char)-126;
int var_17 = -63376233;
unsigned short var_18 = (unsigned short)3579;
int var_19 = 1620577178;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 1114277702U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

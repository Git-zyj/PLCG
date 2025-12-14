#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-51;
unsigned short var_2 = (unsigned short)41421;
_Bool var_5 = (_Bool)1;
long long int var_7 = 8980193784436854299LL;
int var_13 = -1542960422;
_Bool var_14 = (_Bool)0;
signed char var_18 = (signed char)-84;
int zero = 0;
long long int var_19 = 1571017916026969744LL;
unsigned int var_20 = 1532033288U;
unsigned char var_21 = (unsigned char)82;
unsigned short var_22 = (unsigned short)3550;
signed char arr_0 [22] ;
short arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (short)-11933;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

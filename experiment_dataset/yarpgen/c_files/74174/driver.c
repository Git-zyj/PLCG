#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5026025413207028774ULL;
signed char var_2 = (signed char)57;
unsigned char var_3 = (unsigned char)176;
unsigned int var_4 = 3529409808U;
unsigned long long int var_6 = 684783128713793163ULL;
_Bool var_8 = (_Bool)0;
int var_10 = -1221397031;
int var_14 = -874023402;
int zero = 0;
unsigned long long int var_16 = 7118377976431646522ULL;
unsigned int var_17 = 1621603680U;
unsigned long long int var_18 = 16500944714032111121ULL;
unsigned long long int var_19 = 3506077145419233551ULL;
unsigned short var_20 = (unsigned short)56871;
_Bool arr_0 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
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

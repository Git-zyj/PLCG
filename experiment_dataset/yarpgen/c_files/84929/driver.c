#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28118;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 176026406U;
long long int var_9 = -5918192683395234318LL;
_Bool var_11 = (_Bool)0;
short var_13 = (short)-20420;
unsigned short var_16 = (unsigned short)7792;
int zero = 0;
unsigned short var_18 = (unsigned short)49893;
unsigned short var_19 = (unsigned short)8476;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 4423216229976240921ULL;
unsigned short var_23 = (unsigned short)29569;
signed char arr_1 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)-109;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)53;
short var_2 = (short)21728;
short var_3 = (short)617;
unsigned int var_6 = 2463683819U;
signed char var_9 = (signed char)74;
signed char var_10 = (signed char)40;
unsigned int var_11 = 2524979738U;
unsigned int var_12 = 1648050875U;
int var_15 = 1098587666;
int zero = 0;
signed char var_19 = (signed char)38;
short var_20 = (short)26607;
unsigned long long int var_21 = 12751720313410796960ULL;
long long int var_22 = -2666401459723491467LL;
_Bool var_23 = (_Bool)1;
unsigned short var_24 = (unsigned short)42129;
_Bool arr_0 [25] ;
_Bool arr_4 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

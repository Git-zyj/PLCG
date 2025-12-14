#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned short var_12 = (unsigned short)54327;
unsigned int var_13 = 2948813754U;
signed char var_16 = (signed char)9;
unsigned long long int var_17 = 8066333223329912422ULL;
int zero = 0;
unsigned long long int var_18 = 680835313188020307ULL;
unsigned long long int var_19 = 18181621610366000718ULL;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 2171938922U;
unsigned int var_22 = 793307932U;
unsigned short arr_1 [25] [25] ;
int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)30918;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1824769478;
}

void checksum() {
    hash(&seed, var_18);
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

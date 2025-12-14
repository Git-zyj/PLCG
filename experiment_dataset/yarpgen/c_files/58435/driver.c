#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3543373321U;
int var_2 = -1324426079;
short var_3 = (short)-7261;
_Bool var_5 = (_Bool)0;
unsigned long long int var_9 = 15901169465068444384ULL;
unsigned short var_10 = (unsigned short)37316;
int zero = 0;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-7325;
signed char var_14 = (signed char)103;
long long int var_15 = 4540886802283531038LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 3295242555U;
unsigned int arr_0 [17] [17] ;
short arr_2 [17] [17] ;
short arr_3 [17] ;
_Bool arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 1837787007U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)29120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)-24952;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

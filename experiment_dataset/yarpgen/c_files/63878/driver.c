#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26732;
unsigned int var_1 = 2962195983U;
unsigned long long int var_3 = 16717820285102646511ULL;
short var_4 = (short)18733;
unsigned long long int var_5 = 10725638331415095865ULL;
signed char var_6 = (signed char)35;
unsigned int var_7 = 2876715749U;
unsigned int var_8 = 1823512706U;
unsigned int var_10 = 2300938335U;
unsigned long long int var_11 = 12304944106038827530ULL;
int zero = 0;
unsigned long long int var_12 = 14890640100194681465ULL;
short var_13 = (short)20393;
unsigned int var_14 = 2984453480U;
unsigned int var_15 = 4288573985U;
unsigned long long int var_16 = 3539080464096401399ULL;
unsigned short var_17 = (unsigned short)6486;
unsigned char var_18 = (unsigned char)37;
unsigned int var_19 = 3900997772U;
unsigned int var_20 = 3407905775U;
signed char var_21 = (signed char)40;
short var_22 = (short)18712;
unsigned int arr_1 [20] ;
_Bool arr_6 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 331408307U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

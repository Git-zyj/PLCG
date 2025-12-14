#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14523099286025101902ULL;
unsigned short var_4 = (unsigned short)21212;
unsigned long long int var_6 = 4528669817170123732ULL;
unsigned int var_9 = 1381731623U;
unsigned long long int var_13 = 9033027444435870786ULL;
signed char var_14 = (signed char)-60;
int zero = 0;
unsigned long long int var_15 = 15147541259898699743ULL;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 1349881453735399159LL;
signed char var_19 = (signed char)-126;
unsigned short var_20 = (unsigned short)22374;
unsigned long long int var_21 = 5824926804985825357ULL;
int var_22 = 1706106627;
unsigned short arr_0 [15] [15] ;
unsigned long long int arr_1 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)7672;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 155065461861241437ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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

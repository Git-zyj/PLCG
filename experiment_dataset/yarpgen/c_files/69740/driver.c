#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3732364596331536891LL;
unsigned long long int var_1 = 12530513122455064620ULL;
unsigned int var_3 = 3102506138U;
unsigned long long int var_4 = 13921053663398265591ULL;
long long int var_5 = -5425129677574658506LL;
unsigned short var_7 = (unsigned short)19847;
unsigned short var_8 = (unsigned short)18495;
signed char var_9 = (signed char)-105;
int var_10 = -1219660359;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3673496352U;
unsigned long long int var_15 = 2111653162628770705ULL;
short var_16 = (short)12747;
int var_17 = -149914399;
unsigned long long int var_18 = 2783578733882505313ULL;
unsigned short var_19 = (unsigned short)62633;
unsigned long long int var_20 = 6373193613306428575ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 1805429608U;
unsigned short arr_9 [14] [14] ;
unsigned short arr_14 [14] [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)60015 : (unsigned short)42105;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)26134 : (unsigned short)26827;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

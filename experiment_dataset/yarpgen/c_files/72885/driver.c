#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6276022049009694013LL;
unsigned short var_3 = (unsigned short)21747;
long long int var_6 = 8779140942477333617LL;
long long int var_7 = 7984127588296880579LL;
signed char var_10 = (signed char)79;
long long int var_11 = -8102199090029234073LL;
long long int var_13 = -8207047634615917421LL;
unsigned int var_16 = 1227150882U;
unsigned long long int var_17 = 4836780935724464883ULL;
int zero = 0;
signed char var_18 = (signed char)-92;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 4088918147U;
signed char var_21 = (signed char)-28;
unsigned long long int var_22 = 14635424562456921350ULL;
long long int var_23 = -8429652304953721767LL;
unsigned int var_24 = 1141669991U;
unsigned short var_25 = (unsigned short)40575;
unsigned long long int arr_8 [14] [14] ;
unsigned short arr_9 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_8 [i_0] [i_1] = 15343476404154281667ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)63225;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

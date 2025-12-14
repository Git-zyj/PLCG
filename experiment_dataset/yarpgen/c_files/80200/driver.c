#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4087443731U;
int var_3 = -1241122754;
int var_4 = 251354218;
_Bool var_6 = (_Bool)1;
int var_7 = -116364336;
long long int var_8 = -3559741410168332520LL;
long long int var_9 = -4323198291763675876LL;
long long int var_10 = 3457558220323414959LL;
int var_11 = -765782613;
_Bool var_13 = (_Bool)1;
long long int var_16 = 8959219815981422225LL;
unsigned long long int var_17 = 6932826778540634488ULL;
unsigned short var_19 = (unsigned short)32015;
int zero = 0;
long long int var_20 = 7067515685798539736LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)98;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)23;
unsigned short var_25 = (unsigned short)42521;
unsigned short arr_2 [15] ;
short arr_5 [15] ;
int arr_9 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned short)23211;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (short)30106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1014254585 : -1247154067;
}

void checksum() {
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

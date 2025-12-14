#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3569362494U;
unsigned short var_3 = (unsigned short)21822;
unsigned long long int var_4 = 16836818976831634970ULL;
unsigned short var_6 = (unsigned short)49419;
long long int var_7 = 3790595445153506222LL;
unsigned int var_8 = 450624735U;
long long int var_9 = -3862400194684994213LL;
short var_10 = (short)20395;
long long int var_12 = -3962030655851739741LL;
long long int var_13 = -8163831234288999465LL;
long long int var_14 = -8091285690690246129LL;
unsigned long long int var_15 = 14422221057716920379ULL;
long long int var_18 = -3969769020612996934LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 4242990343U;
unsigned int var_22 = 339910947U;
short var_23 = (short)-23087;
long long int var_24 = 6202096156871712325LL;
short var_25 = (short)-3155;
long long int var_26 = -4198570619950796000LL;
short arr_0 [10] ;
unsigned long long int arr_1 [10] ;
signed char arr_3 [21] ;
unsigned int arr_4 [21] [21] ;
_Bool arr_2 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (short)1801;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2418859223211678696ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 943321583U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

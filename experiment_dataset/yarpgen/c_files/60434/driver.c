#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12510236702444512673ULL;
unsigned short var_6 = (unsigned short)52237;
unsigned char var_8 = (unsigned char)167;
short var_10 = (short)-23738;
int var_11 = -42299389;
short var_12 = (short)-19838;
unsigned int var_16 = 497925054U;
int zero = 0;
unsigned char var_18 = (unsigned char)248;
int var_19 = -1794686528;
unsigned char var_20 = (unsigned char)188;
_Bool var_21 = (_Bool)1;
long long int var_22 = 354855504589562315LL;
long long int var_23 = 7478511482704059370LL;
unsigned long long int var_24 = 17160292915897226038ULL;
unsigned int var_25 = 3447830736U;
unsigned short arr_0 [12] ;
long long int arr_4 [12] [12] [12] ;
unsigned long long int arr_5 [12] ;
long long int arr_2 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned short)18798;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 5923098012271709368LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 3525705465732054383ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -5639375121703071597LL;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

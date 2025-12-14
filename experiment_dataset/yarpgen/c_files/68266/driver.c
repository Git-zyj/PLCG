#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-41;
short var_2 = (short)12087;
unsigned long long int var_5 = 1567381689080419020ULL;
unsigned short var_7 = (unsigned short)17205;
signed char var_9 = (signed char)-56;
int var_11 = -1016347838;
short var_12 = (short)22945;
int zero = 0;
unsigned long long int var_20 = 4846362669766496642ULL;
int var_21 = 837443631;
short var_22 = (short)29744;
signed char var_23 = (signed char)0;
unsigned short var_24 = (unsigned short)32747;
signed char arr_0 [16] [16] ;
unsigned long long int arr_1 [16] ;
short arr_3 [16] ;
int arr_4 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 17975500245969287640ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-29943 : (short)-22975;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 1230062266 : -192994727;
}

void checksum() {
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

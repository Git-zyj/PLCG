#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3436405851828460346ULL;
int var_5 = 1463458793;
unsigned char var_7 = (unsigned char)73;
short var_8 = (short)-17444;
long long int var_17 = 1284645932317251235LL;
unsigned short var_18 = (unsigned short)30962;
long long int var_19 = 8657950344734330837LL;
int zero = 0;
unsigned short var_20 = (unsigned short)28851;
unsigned char var_21 = (unsigned char)107;
unsigned short var_22 = (unsigned short)31347;
int var_23 = 837806565;
short arr_1 [17] ;
long long int arr_2 [17] ;
unsigned int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (short)6329;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -9046516413015491287LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 663673540U : 156186624U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

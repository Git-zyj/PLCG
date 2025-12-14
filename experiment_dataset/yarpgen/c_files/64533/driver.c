#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1026936943U;
unsigned int var_2 = 276939974U;
int var_6 = 1839607711;
unsigned char var_7 = (unsigned char)171;
short var_8 = (short)8508;
short var_9 = (short)-9263;
unsigned long long int var_11 = 17219112877666131348ULL;
unsigned long long int var_14 = 14676327878337326370ULL;
unsigned long long int var_16 = 18097247790817816411ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)44915;
unsigned char var_19 = (unsigned char)167;
unsigned char var_20 = (unsigned char)204;
unsigned int var_21 = 2419701664U;
unsigned int var_22 = 2133230957U;
unsigned long long int arr_1 [16] ;
unsigned short arr_5 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 4543675017356036738ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44915 : (unsigned short)22352;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

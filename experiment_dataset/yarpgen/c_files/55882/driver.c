#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1183994339;
unsigned short var_1 = (unsigned short)40846;
unsigned short var_2 = (unsigned short)36451;
short var_3 = (short)23157;
long long int var_4 = -7974797889480782981LL;
unsigned long long int var_5 = 12417797806960078902ULL;
unsigned char var_6 = (unsigned char)123;
unsigned short var_7 = (unsigned short)46589;
unsigned short var_8 = (unsigned short)35507;
unsigned int var_9 = 4094389599U;
int zero = 0;
int var_10 = 1037217402;
short var_11 = (short)24418;
unsigned char var_12 = (unsigned char)84;
signed char var_13 = (signed char)-70;
unsigned int var_14 = 1196952434U;
unsigned short var_15 = (unsigned short)47043;
short var_16 = (short)-22538;
unsigned short arr_0 [18] ;
signed char arr_2 [17] ;
unsigned int arr_3 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (unsigned short)48823;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-123 : (signed char)-57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 1623381989U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
signed char var_1 = (signed char)42;
unsigned long long int var_2 = 10947989945318529209ULL;
int var_4 = -1955896464;
long long int var_5 = -7400298704341392540LL;
long long int var_6 = 4938287264642044662LL;
unsigned long long int var_7 = 5797458654148629620ULL;
unsigned short var_8 = (unsigned short)21552;
int var_9 = -100842716;
int var_10 = 266352400;
short var_11 = (short)-4082;
unsigned short var_13 = (unsigned short)3880;
int zero = 0;
unsigned short var_14 = (unsigned short)50954;
int var_15 = 1844055657;
int var_16 = 1398689210;
unsigned int var_17 = 3497117226U;
unsigned int var_18 = 1087597959U;
int var_19 = 1479539284;
unsigned short var_20 = (unsigned short)33097;
signed char arr_1 [14] ;
int arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 1344648608;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

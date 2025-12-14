#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_3 = (signed char)26;
int var_4 = -1873695631;
_Bool var_6 = (_Bool)1;
unsigned short var_9 = (unsigned short)50450;
int var_16 = 828769912;
unsigned short var_17 = (unsigned short)62391;
int var_19 = -1758465305;
int zero = 0;
unsigned char var_20 = (unsigned char)101;
signed char var_21 = (signed char)-25;
unsigned char var_22 = (unsigned char)29;
unsigned short var_23 = (unsigned short)62007;
long long int var_24 = 1131197295929089647LL;
signed char var_25 = (signed char)28;
unsigned short arr_0 [23] ;
unsigned char arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)34972;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)106;
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

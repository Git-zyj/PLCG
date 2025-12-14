#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62585;
unsigned long long int var_2 = 10869655419605093200ULL;
unsigned long long int var_3 = 8239555936647376204ULL;
int var_4 = -98538264;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)97;
short var_7 = (short)-20661;
signed char var_9 = (signed char)-123;
signed char var_11 = (signed char)-36;
int zero = 0;
unsigned long long int var_12 = 4001565118125809193ULL;
short var_13 = (short)20093;
unsigned char var_14 = (unsigned char)188;
int arr_0 [13] ;
_Bool arr_1 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = -949138788;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

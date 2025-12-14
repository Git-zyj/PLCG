#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1148185082U;
short var_1 = (short)-21631;
unsigned char var_3 = (unsigned char)141;
unsigned long long int var_4 = 12149919623623445915ULL;
int var_5 = 482634990;
unsigned char var_6 = (unsigned char)87;
unsigned long long int var_7 = 4295743803317051925ULL;
unsigned char var_10 = (unsigned char)244;
unsigned int var_12 = 2879328969U;
short var_14 = (short)11992;
unsigned long long int var_15 = 8158178005601940701ULL;
unsigned char var_16 = (unsigned char)120;
unsigned short var_18 = (unsigned short)15523;
short var_19 = (short)-27876;
int zero = 0;
short var_20 = (short)23595;
unsigned char var_21 = (unsigned char)242;
unsigned long long int var_22 = 904768736280791258ULL;
int var_23 = 1952538932;
unsigned int var_24 = 704187673U;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)10;
unsigned short var_27 = (unsigned short)2327;
unsigned char arr_9 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned char)33 : (unsigned char)66;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

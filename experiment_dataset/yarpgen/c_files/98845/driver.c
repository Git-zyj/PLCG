#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = 7131090595313468849LL;
unsigned long long int var_4 = 12208227757940675446ULL;
unsigned int var_6 = 1571502501U;
int var_9 = -879185438;
unsigned long long int var_10 = 15128875112267179526ULL;
long long int var_12 = 5079526660054532122LL;
long long int var_13 = -8786395082582232124LL;
int var_14 = 108776135;
unsigned long long int var_15 = 1682125605191075351ULL;
signed char var_16 = (signed char)82;
unsigned char var_18 = (unsigned char)252;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 9042152651740433416ULL;
long long int var_22 = -1421917904532061441LL;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 10587802764279973493ULL;
long long int var_25 = -4678713847238848162LL;
unsigned char var_26 = (unsigned char)223;
unsigned short var_27 = (unsigned short)907;
unsigned char arr_15 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)150 : (unsigned char)12;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

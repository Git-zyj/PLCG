#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 571670485U;
unsigned int var_2 = 3181011326U;
unsigned short var_3 = (unsigned short)60067;
unsigned short var_4 = (unsigned short)55635;
unsigned long long int var_7 = 14088798064555887380ULL;
unsigned int var_8 = 3066470302U;
unsigned long long int var_9 = 7807255644236340089ULL;
unsigned short var_10 = (unsigned short)30063;
unsigned short var_11 = (unsigned short)34784;
_Bool var_12 = (_Bool)0;
signed char var_13 = (signed char)-29;
unsigned int var_14 = 3870631355U;
unsigned int var_15 = 4047286084U;
int zero = 0;
unsigned char var_18 = (unsigned char)116;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 3795594755U;
long long int var_22 = 6170298807362495953LL;
unsigned int arr_1 [13] ;
long long int arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 4007925846U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 5437611355088787784LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

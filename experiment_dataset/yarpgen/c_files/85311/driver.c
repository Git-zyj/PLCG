#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-29767;
signed char var_2 = (signed char)-124;
signed char var_3 = (signed char)-109;
unsigned long long int var_4 = 5845532560095988983ULL;
long long int var_5 = 7006695564813163479LL;
unsigned int var_6 = 96429614U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_8 = 3179267152309031824ULL;
signed char var_10 = (signed char)-75;
long long int var_11 = 3325198492948416993LL;
int zero = 0;
unsigned char var_13 = (unsigned char)22;
long long int var_14 = 6120597324065066589LL;
unsigned long long int var_15 = 9705258867922902353ULL;
signed char var_16 = (signed char)-44;
unsigned int var_17 = 39113195U;
unsigned int var_18 = 423567516U;
int var_19 = -1234752017;
signed char arr_3 [12] ;
signed char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (signed char)13;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

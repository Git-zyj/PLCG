#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_3 = (unsigned char)57;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-101;
long long int var_10 = 4293508299563034578LL;
unsigned long long int var_11 = 10588127079283602563ULL;
long long int var_12 = -1279978187813056094LL;
int zero = 0;
unsigned long long int var_17 = 4057176680450319106ULL;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-11912;
_Bool var_20 = (_Bool)1;
int var_21 = 354591873;
short var_22 = (short)-29172;
short var_23 = (short)-25386;
short arr_1 [11] [11] ;
int arr_10 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-11512;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_10 [i_0] [i_1] = 987662700;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

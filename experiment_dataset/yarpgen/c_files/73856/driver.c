#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7760119859821048639LL;
long long int var_2 = -8619285150343196805LL;
unsigned char var_3 = (unsigned char)147;
long long int var_4 = -139369405855647710LL;
long long int var_5 = 2504458566216585829LL;
short var_6 = (short)-16747;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 8279438260775667042ULL;
unsigned long long int var_13 = 10564135022183845978ULL;
unsigned int var_14 = 1795212928U;
long long int var_15 = 7932646714422398534LL;
unsigned long long int var_16 = 17155459802326377478ULL;
unsigned long long int var_17 = 13842113005330739694ULL;
unsigned int arr_9 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 418361419U : 3922378186U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

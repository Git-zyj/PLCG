#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)204;
long long int var_5 = 5684195555532110624LL;
short var_6 = (short)10476;
long long int var_8 = -5697381623099008615LL;
int var_14 = -1524099867;
short var_18 = (short)17865;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 620651358;
long long int var_21 = 1550454027758169717LL;
unsigned char var_22 = (unsigned char)236;
unsigned int var_23 = 2326860348U;
signed char var_24 = (signed char)-86;
unsigned char var_25 = (unsigned char)7;
signed char arr_0 [23] [23] ;
unsigned int arr_3 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)43;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = 897594878U;
}

void checksum() {
    hash(&seed, var_19);
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

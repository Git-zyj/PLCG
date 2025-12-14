#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1572678563;
unsigned char var_4 = (unsigned char)70;
unsigned long long int var_9 = 16617844378125925016ULL;
int var_10 = -1658780693;
signed char var_14 = (signed char)-23;
short var_16 = (short)-17079;
int zero = 0;
long long int var_18 = -5698957084600734381LL;
unsigned long long int var_19 = 10141235195309020287ULL;
long long int var_20 = 863640156532240211LL;
unsigned int var_21 = 2374022643U;
unsigned int arr_0 [22] [22] ;
long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 587217200U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -5660027182227990186LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

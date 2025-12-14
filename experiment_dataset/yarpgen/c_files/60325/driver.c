#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)124;
unsigned char var_7 = (unsigned char)63;
unsigned int var_10 = 2530186164U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)119;
int zero = 0;
unsigned short var_15 = (unsigned short)54028;
unsigned long long int var_16 = 10373872418645622152ULL;
signed char var_17 = (signed char)41;
unsigned int var_18 = 1707790255U;
long long int var_19 = -1700327169157641969LL;
_Bool var_20 = (_Bool)0;
int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 567353490;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

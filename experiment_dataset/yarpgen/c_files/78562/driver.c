#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 423736633U;
short var_1 = (short)-27597;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
int var_6 = 1614367234;
int var_7 = 1560969327;
unsigned char var_8 = (unsigned char)39;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 4028456434U;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 18379990006669266169ULL;
short var_16 = (short)7137;
long long int var_17 = -9058616199175743539LL;
long long int var_18 = 6104785508886368309LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

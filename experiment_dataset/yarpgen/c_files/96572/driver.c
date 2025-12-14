#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1422504403U;
int var_4 = -1274630762;
unsigned long long int var_5 = 15948370149223645907ULL;
int var_10 = -1573184909;
_Bool var_15 = (_Bool)1;
signed char var_17 = (signed char)-100;
int zero = 0;
unsigned int var_18 = 994157744U;
int var_19 = 896844902;
signed char var_20 = (signed char)-101;
unsigned char var_21 = (unsigned char)195;
void init() {
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

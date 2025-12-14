#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2023768884;
signed char var_3 = (signed char)125;
_Bool var_7 = (_Bool)1;
unsigned int var_11 = 2810673026U;
int zero = 0;
unsigned char var_19 = (unsigned char)121;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)172;
_Bool var_22 = (_Bool)0;
unsigned long long int var_23 = 2294510522870677687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

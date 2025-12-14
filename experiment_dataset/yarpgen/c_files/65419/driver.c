#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -502380619;
long long int var_1 = -124045460577157859LL;
signed char var_2 = (signed char)-58;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)32;
signed char var_8 = (signed char)-75;
signed char var_10 = (signed char)-96;
int zero = 0;
signed char var_13 = (signed char)-16;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1312886522267463281LL;
signed char var_16 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

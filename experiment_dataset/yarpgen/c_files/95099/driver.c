#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)5;
unsigned int var_6 = 3933189133U;
int var_7 = -1137442367;
unsigned char var_11 = (unsigned char)193;
unsigned char var_13 = (unsigned char)208;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_15 = (unsigned char)129;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)44;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)78;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

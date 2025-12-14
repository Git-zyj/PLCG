#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)28;
unsigned int var_5 = 1345017726U;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 2495089808U;
_Bool var_11 = (_Bool)1;
signed char var_13 = (signed char)-47;
int zero = 0;
signed char var_14 = (signed char)-69;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

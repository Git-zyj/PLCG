#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7867055930203875523ULL;
unsigned long long int var_2 = 15841243394547484443ULL;
unsigned char var_4 = (unsigned char)219;
signed char var_8 = (signed char)119;
int zero = 0;
unsigned char var_12 = (unsigned char)50;
unsigned long long int var_13 = 17674653399145482019ULL;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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

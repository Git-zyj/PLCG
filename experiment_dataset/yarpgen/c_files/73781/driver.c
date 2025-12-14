#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 16940191713467654935ULL;
signed char var_6 = (signed char)75;
unsigned char var_11 = (unsigned char)198;
signed char var_13 = (signed char)82;
int zero = 0;
unsigned char var_15 = (unsigned char)154;
int var_16 = -1584472686;
void init() {
}

void checksum() {
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

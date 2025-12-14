#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)51245;
unsigned long long int var_4 = 6575784416566851591ULL;
unsigned int var_8 = 1460569774U;
unsigned int var_11 = 2374250341U;
unsigned long long int var_12 = 550201606892778331ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)238;
unsigned char var_14 = (unsigned char)66;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

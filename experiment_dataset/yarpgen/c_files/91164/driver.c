#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8912945031139620843ULL;
unsigned long long int var_3 = 18044891423874085247ULL;
unsigned int var_5 = 2494114506U;
unsigned short var_6 = (unsigned short)58681;
long long int var_8 = 519530004919039456LL;
int zero = 0;
signed char var_10 = (signed char)-35;
signed char var_11 = (signed char)13;
unsigned short var_12 = (unsigned short)12204;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

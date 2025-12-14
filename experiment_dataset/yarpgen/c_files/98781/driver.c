#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)9037;
unsigned short var_2 = (unsigned short)53907;
unsigned long long int var_7 = 3052002651485400047ULL;
unsigned long long int var_8 = 16811355355756840140ULL;
unsigned char var_10 = (unsigned char)53;
int zero = 0;
int var_11 = -585056396;
unsigned short var_12 = (unsigned short)43204;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

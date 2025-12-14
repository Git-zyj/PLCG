#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)244;
long long int var_3 = 4602756096812447819LL;
signed char var_4 = (signed char)59;
long long int var_5 = -1749447337764072560LL;
long long int var_6 = 3845177920046547474LL;
short var_10 = (short)24129;
int var_11 = -293328794;
int zero = 0;
signed char var_13 = (signed char)78;
short var_14 = (short)-6819;
short var_15 = (short)4961;
unsigned long long int var_16 = 7338582977250846175ULL;
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

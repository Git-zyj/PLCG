#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)40;
signed char var_2 = (signed char)-55;
_Bool var_5 = (_Bool)1;
int var_10 = -1756103543;
int zero = 0;
unsigned short var_11 = (unsigned short)33631;
unsigned long long int var_12 = 18048341499127696777ULL;
unsigned short var_13 = (unsigned short)64108;
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

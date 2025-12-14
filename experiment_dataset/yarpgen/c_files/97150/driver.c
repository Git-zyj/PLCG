#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)37099;
unsigned char var_3 = (unsigned char)28;
long long int var_4 = -835772783830588569LL;
unsigned char var_6 = (unsigned char)0;
int zero = 0;
short var_10 = (short)-5163;
long long int var_11 = 4778360292379370766LL;
signed char var_12 = (signed char)93;
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

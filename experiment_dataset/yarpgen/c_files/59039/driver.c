#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1527116862483995993LL;
unsigned char var_3 = (unsigned char)48;
short var_5 = (short)2515;
long long int var_10 = -2618227503451655809LL;
int var_11 = 940633296;
unsigned char var_13 = (unsigned char)156;
int zero = 0;
int var_15 = 262378405;
long long int var_16 = -6818539304040963442LL;
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

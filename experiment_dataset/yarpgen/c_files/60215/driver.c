#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4255742666708439112LL;
unsigned char var_3 = (unsigned char)111;
unsigned char var_4 = (unsigned char)28;
short var_7 = (short)25386;
long long int var_12 = 8761499933444569937LL;
int zero = 0;
unsigned long long int var_13 = 9823823181887382337ULL;
short var_14 = (short)-29133;
short var_15 = (short)12642;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)214;
long long int var_5 = -3441016686076627551LL;
int var_6 = 856746441;
unsigned char var_12 = (unsigned char)92;
short var_13 = (short)10148;
int var_18 = -1756224757;
unsigned int var_19 = 863376010U;
int zero = 0;
unsigned char var_20 = (unsigned char)163;
short var_21 = (short)20541;
unsigned char var_22 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

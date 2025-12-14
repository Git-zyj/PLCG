#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7265112313321271449LL;
long long int var_3 = 4850848024280925422LL;
unsigned char var_4 = (unsigned char)93;
int var_6 = 304336243;
int zero = 0;
unsigned char var_11 = (unsigned char)159;
long long int var_12 = -6692228763525144566LL;
unsigned char var_13 = (unsigned char)39;
short var_14 = (short)15571;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1386336158;
int var_6 = -1486445897;
short var_7 = (short)30974;
long long int var_8 = 3632556275254834115LL;
int zero = 0;
unsigned short var_12 = (unsigned short)34013;
int var_13 = -484711895;
void init() {
}

void checksum() {
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

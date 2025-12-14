#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-114;
long long int var_3 = 7843312189272302264LL;
unsigned char var_4 = (unsigned char)107;
int var_6 = -103061459;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = -565709887;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

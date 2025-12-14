#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-6062;
signed char var_3 = (signed char)41;
signed char var_4 = (signed char)-87;
long long int var_9 = 8756468194121618956LL;
int zero = 0;
unsigned int var_10 = 221540153U;
signed char var_11 = (signed char)15;
signed char var_12 = (signed char)77;
short var_13 = (short)14217;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

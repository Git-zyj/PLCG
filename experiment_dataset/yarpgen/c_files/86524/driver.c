#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -3737637121502263523LL;
signed char var_3 = (signed char)120;
int var_4 = 1402381838;
long long int var_6 = 5362962038787239603LL;
unsigned char var_9 = (unsigned char)32;
int zero = 0;
signed char var_10 = (signed char)77;
unsigned char var_11 = (unsigned char)143;
signed char var_12 = (signed char)-94;
unsigned char var_13 = (unsigned char)123;
unsigned char var_14 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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

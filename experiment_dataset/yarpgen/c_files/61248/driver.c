#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-19001;
short var_7 = (short)18575;
int zero = 0;
int var_11 = 1463758657;
short var_12 = (short)25527;
unsigned long long int var_13 = 12526952683513503304ULL;
long long int var_14 = 876643693647981997LL;
unsigned char var_15 = (unsigned char)15;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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

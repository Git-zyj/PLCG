#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27035;
unsigned long long int var_5 = 5891955594818996983ULL;
short var_8 = (short)20575;
int zero = 0;
unsigned long long int var_11 = 18227528786968275257ULL;
unsigned long long int var_12 = 2465501037660182268ULL;
void init() {
}

void checksum() {
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

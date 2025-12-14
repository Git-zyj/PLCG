#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)32226;
int var_13 = 2102114954;
unsigned int var_19 = 3074649430U;
int zero = 0;
short var_20 = (short)29679;
unsigned long long int var_21 = 12485797802541055479ULL;
long long int var_22 = -3773302311558497410LL;
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

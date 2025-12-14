#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5748607050148527624LL;
unsigned long long int var_10 = 2371942789107459823ULL;
int zero = 0;
unsigned long long int var_13 = 18299851343541210867ULL;
long long int var_14 = 3163855199473934530LL;
void init() {
}

void checksum() {
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

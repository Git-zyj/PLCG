#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1351960925991967933LL;
long long int var_4 = 4402410187651230760LL;
long long int var_10 = -8847771953651838528LL;
int zero = 0;
short var_13 = (short)31202;
unsigned char var_14 = (unsigned char)255;
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

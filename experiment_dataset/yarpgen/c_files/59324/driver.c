#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-24569;
unsigned char var_5 = (unsigned char)2;
short var_6 = (short)23748;
short var_9 = (short)9209;
long long int var_13 = -8643635642021061274LL;
unsigned int var_17 = 4112458574U;
int zero = 0;
short var_20 = (short)-11099;
int var_21 = -740371214;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

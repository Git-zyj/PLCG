#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10101397291236055147ULL;
unsigned char var_4 = (unsigned char)29;
_Bool var_6 = (_Bool)0;
int zero = 0;
short var_15 = (short)10613;
unsigned long long int var_16 = 9473809208479877477ULL;
unsigned char var_17 = (unsigned char)156;
int var_18 = -1933469552;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1999668021;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 1213365823U;
int zero = 0;
unsigned int var_10 = 3957296017U;
unsigned char var_11 = (unsigned char)214;
int var_12 = -1204059326;
short var_13 = (short)17049;
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

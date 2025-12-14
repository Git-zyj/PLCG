#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 915001412;
short var_4 = (short)-4339;
unsigned short var_6 = (unsigned short)39622;
int zero = 0;
short var_11 = (short)26492;
unsigned long long int var_12 = 10145484628376393992ULL;
unsigned long long int var_13 = 1643339809782312628ULL;
long long int var_14 = 8245052853427689829LL;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8141894180970568513ULL;
short var_2 = (short)-5691;
unsigned char var_3 = (unsigned char)8;
unsigned long long int var_11 = 7352337501502003677ULL;
unsigned char var_13 = (unsigned char)100;
int zero = 0;
unsigned long long int var_15 = 7095799070327217743ULL;
unsigned char var_16 = (unsigned char)241;
unsigned char var_17 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)26948;
unsigned long long int var_12 = 1424185277231384978ULL;
int zero = 0;
short var_13 = (short)8780;
unsigned long long int var_14 = 10965052098144548110ULL;
unsigned char var_15 = (unsigned char)216;
void init() {
}

void checksum() {
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

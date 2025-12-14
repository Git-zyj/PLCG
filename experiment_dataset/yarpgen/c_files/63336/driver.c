#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 572617226123609444ULL;
unsigned char var_5 = (unsigned char)82;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)-12436;
unsigned int var_18 = 1791250103U;
void init() {
}

void checksum() {
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

#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-40;
signed char var_7 = (signed char)-89;
unsigned int var_9 = 764639752U;
int zero = 0;
short var_13 = (short)5087;
signed char var_14 = (signed char)76;
unsigned short var_15 = (unsigned short)13320;
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

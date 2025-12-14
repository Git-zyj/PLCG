#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
int var_1 = -1250740505;
unsigned char var_2 = (unsigned char)6;
int zero = 0;
signed char var_13 = (signed char)-40;
unsigned short var_14 = (unsigned short)16110;
unsigned short var_15 = (unsigned short)46381;
unsigned long long int var_16 = 13762346083826592143ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

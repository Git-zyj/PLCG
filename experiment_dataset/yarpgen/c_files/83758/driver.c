#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)32;
int var_2 = -1635234726;
signed char var_6 = (signed char)-119;
unsigned char var_10 = (unsigned char)31;
int zero = 0;
signed char var_13 = (signed char)39;
unsigned long long int var_14 = 13360959317608915651ULL;
signed char var_15 = (signed char)82;
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

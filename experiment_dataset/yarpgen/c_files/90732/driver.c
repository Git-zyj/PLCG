#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12386;
short var_8 = (short)-9851;
unsigned long long int var_17 = 4007569280062720065ULL;
int zero = 0;
short var_18 = (short)-8887;
unsigned long long int var_19 = 6961618838300414374ULL;
short var_20 = (short)-6577;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

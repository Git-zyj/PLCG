#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -933319497986349714LL;
signed char var_7 = (signed char)96;
short var_8 = (short)4723;
long long int var_9 = 1903956555939945054LL;
int zero = 0;
unsigned long long int var_13 = 11859477446192200575ULL;
unsigned char var_14 = (unsigned char)98;
unsigned short var_15 = (unsigned short)39636;
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

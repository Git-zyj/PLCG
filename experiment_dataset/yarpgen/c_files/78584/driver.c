#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1691058698004536546LL;
long long int var_3 = -3657626919540362349LL;
long long int var_5 = -7537208053411501117LL;
long long int var_6 = -2791596213605726023LL;
unsigned short var_8 = (unsigned short)13274;
int zero = 0;
unsigned short var_14 = (unsigned short)55103;
unsigned long long int var_15 = 9446463688273280697ULL;
signed char var_16 = (signed char)3;
unsigned char var_17 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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

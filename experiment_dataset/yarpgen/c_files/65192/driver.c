#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1879638157;
unsigned char var_10 = (unsigned char)246;
unsigned long long int var_11 = 10613286404317633982ULL;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-105;
_Bool var_14 = (_Bool)0;
long long int var_15 = -2417291731057305663LL;
int zero = 0;
short var_17 = (short)32544;
signed char var_18 = (signed char)-120;
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

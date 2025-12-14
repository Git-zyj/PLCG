#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 968001970U;
unsigned int var_8 = 2608520481U;
unsigned long long int var_11 = 5618849505123638819ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_18 = (signed char)55;
unsigned long long int var_19 = 14996575470541269506ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

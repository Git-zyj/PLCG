#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-119;
long long int var_4 = -7292115793917420692LL;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_10 = (short)3706;
long long int var_11 = 5787000204927264942LL;
long long int var_12 = 603542199139839852LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

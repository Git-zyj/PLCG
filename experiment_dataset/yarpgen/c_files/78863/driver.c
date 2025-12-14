#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16666352123512333489ULL;
long long int var_8 = 1142750809757879590LL;
long long int var_15 = -6744917804091487440LL;
int zero = 0;
long long int var_20 = 2471962820736632248LL;
short var_21 = (short)10089;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}

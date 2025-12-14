#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7117;
long long int var_1 = -3680664816717776835LL;
short var_6 = (short)7034;
int zero = 0;
unsigned long long int var_11 = 4195687085712398925ULL;
long long int var_12 = -3814188181893815286LL;
void init() {
}

void checksum() {
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

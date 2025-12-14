#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-66;
int var_9 = -1632391714;
unsigned char var_10 = (unsigned char)195;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -856665612;
unsigned long long int var_15 = 15971534498115115161ULL;
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
